#include "pch.h"
#include "DataBase.h"


DataBase::DataBase()
{
  this->connectionString="datasource=localhost;port=3306;database=prueba;username=root;password=root;";
  this->coneccion = gcnew MySqlConnection(this->connectionString);
}

void DataBase::abrirConection()
{
    this->coneccion->Open();
}

bool DataBase::loguin(String^ user, String^ pass)
{
    
    String^ sql= "select * from miembros where id_miembro= '" + user + "' and dni='" + pass + "'";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->coneccion);
     MySqlDataReader^ reader = cursor->ExecuteReader();
    if (reader->Read()) {
        return true;
    }
    return false;
    
}

DataRow^ DataBase::nombre(String^ user)
{
     String^ query = "select  miembros.nombre, miembros.apellido, jerarquias.nombre from jerarquias join miembros on miembros.id_jerarquia = jerarquias.id where miembros.id_miembro = '"+user+"'"; ;
     MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
     MySqlDataAdapter^ reader = gcnew MySqlDataAdapter(cursor);
     DataTable^ secc = gcnew DataTable();
     reader->Fill(secc);
     this->user = user;
     return secc->Rows[0];
  
}

 DataRow^ DataBase::apellido(String^ user)
 {
        String^ query = "select  miembros.apellido,miembros.nombre, jerarquias.nombre from jerarquias join miembros on miembros.id_jerarquia = jerarquias.id where miembros.id_miembro = '" + user + "';";
        MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
        MySqlDataAdapter^ reader = gcnew MySqlDataAdapter(cursor);
        DataTable^ secc = gcnew DataTable();
        reader->Fill(secc);
        return secc->Rows[0];
  }

DataRow^ DataBase::jerarquia(String^ user)
{
    String^ query = "select   jerarquias.nombre as jerarquia, miembros.apellido from jerarquias join miembros on miembros.id_jerarquia = jerarquias.id where miembros.id_miembro = '" + user + "';";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ reader = gcnew MySqlDataAdapter(cursor);
    DataTable^ secc = gcnew DataTable();
    reader->Fill(secc);
    return secc->Rows[0];
}

DataRow^ DataBase::tomarSeccion(String^ user)
{
    String^ query = "select secciones.nombre as seccion from secciones join miembrosxseccion on secciones.id = miembrosxseccion.id_seccion where miembrosxseccion.id_miembro = '" + user + "';";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ reader = gcnew MySqlDataAdapter(cursor);
    DataTable^ secc = gcnew DataTable();
    reader->Fill(secc);
    return secc->Rows[0];
}


void DataBase::cerrarConection()
{
    this->coneccion->Close();
}

DataTable^ DataBase::guardiaSeccion(String^ user)
{
    String^ query= "select registro.fecha,registro.hora_entrada as 'entrada',registro.hora_salida as 'salida',miembros.apellido,(select jerarquias.nombre from jerarquias join miembros on jerarquias.id=miembros.id_jerarquia where miembros.id_miembro='"+user+"') as 'jerarquia' from registro join miembrosxseccion on registro.id_miembroxseccion = miembrosxseccion.id join miembros on miembrosxseccion.id_miembro = miembros.id_miembro where registro.fecha >= date(now()) and miembros.id_miembro = '"+user+"'  order by(registro.fecha) asc;";
    MySqlCommand^ cursor = gcnew MySqlCommand(query,this->coneccion);
    MySqlDataAdapter ^ data = gcnew  MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}
DataTable^ DataBase::guardiasAnteriores(String^ user)
{
    String^ query = "select registro.fecha,registro.hora_entrada as 'entrada',registro.hora_salida as 'salida',miembros.apellido,(select jerarquias.nombre from jerarquias join miembros on jerarquias.id=miembros.id_jerarquia where miembros.id_miembro='" + user + "') as 'jerarquia' from registro join miembrosxseccion on registro.id_miembroxseccion = miembrosxseccion.id join miembros on miembrosxseccion.id_miembro = miembros.id_miembro where registro.fecha < date(now()) and miembros.id_miembro = '" + user + "'  order by(registro.fecha) desc;";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ data = gcnew  MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}

void DataBase::insertGuardia(String^user,String^ dia, String^e, String^s)
{ 
    
    String^ query = "insert into registro (id_miembroxseccion,fecha,hora_entrada,hora_salida) values ((select id from miembrosxseccion where id_miembro='"+user+"'),'"+dia+"','" + e+ "','" + s + "');";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    cursor->ExecuteNonQuery();
    try {
       
        using namespace System::Data;
        using namespace System::Drawing;
        using namespace System::Windows::Forms;
        MessageBox::Show("Se registro su guardia correctamente", "Nuevo registro", MessageBoxButtons::OK, MessageBoxIcon::Information);
        
    }
    catch(Exception^ e){
        using namespace System::Data;
        using namespace System::Drawing;
        using namespace System::Windows::Forms;
        MessageBox::Show("No se pudo realizar el registro", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

    }
}

void DataBase::eliminarCarga()
{
    this->coneccion->Open();
    this->coneccion->Close();
    
}

DataTable^ DataBase::SERVICIOS(String^ user)
{
    String^ query = "select llamados.fecha,siniestros.nombre as'TIPO DE SINIESTRO',cargosxservicio.nombre as'CARGO'  from siniestros join llamados on siniestros.id = llamados.id_tiposiniestro join miembrosxllamado on llamados.id = miembrosxllamado.id_llamado join cargosxservicio on miembrosxllamado.id_cargo = cargosxservicio.id where miembrosxllamado.id_miembro = '"+user+"';";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ data = gcnew  MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}

DataRow^ DataBase::totalServicios(String^ user)
{
    String^ query = "SELECT count(miembrosxllamado.id) AS 'total' FROM miembrosxllamado JOIN llamados ON miembrosxllamado.id_llamado = llamados.id WHERE miembrosxllamado.id_miembro = '"+user+"' ORDER BY(miembrosxllamado.id) DESC limit 1;";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ reader = gcnew MySqlDataAdapter(cursor);
    DataTable^ secc = gcnew DataTable();
    reader->Fill(secc);
    return secc->Rows[0];

}

DataTable^ DataBase::mostrarAnuncios()
{
    String^ query = " select anuncios.anuncio from anuncios where anuncios.fecha_fin > date(now());";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ data = gcnew  MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}

DataTable^ DataBase::mostrarTareas(String^user)
{
    String^ query = " SELECT tareas.tarea1 as 'tareas' from tareas join lista_tareas on tareas.id_lista=lista_tareas.id where lista_tareas.id_seccion = (select id_seccion from miembrosxseccion where id_miembro = '"+user+"') and tareas.fecha > date(now());";   
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ data = gcnew  MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}
