#include "pch.h"
#include "DataBase.h"

DataBase::DataBase()
{
  this->connectionString="datasource=localhost;port=3306;database=bomberos;username=root;password=root;";
  this->coneccion = gcnew MySqlConnection(this->connectionString);
}

void DataBase::abrirConection()
{
    this->coneccion->Open();
}

bool DataBase::loguin(String^ user, String^ pass)
{
    
    String^ sql= "select * from usuarios where id_legajo= '" + user + "' and contraseña='" + pass + "'";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->coneccion);
     MySqlDataReader^ reader = cursor->ExecuteReader();
    if (reader->Read()) {
        return true;
    }
    return false;
    
}

String^ DataBase::nombre(String^ user)
{
    String^ nombre = "select jerarquias.nombre, miembros.nombre,miembros.apellido from jerarquias join miembros on miembros.id_jerarquia=jerarquias.id where miembros.id_miembro='" + user + "'";
}

void DataBase::tomarSeccion(String^ user)
{  
    String^ query= "select secciones.nombre from secciones join miembrosxseccion on secciones.id = miembrosxseccion.id_seccion where miembrosxseccion.id_miembro = '"+user+"'";
   this->seccion
}


void DataBase::cerrarConection()
{
    this->coneccion->Close();
}

DataTable^ DataBase::guardiaSeccion()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

void DataBase::insertGuardia(String^)
{
    throw gcnew System::NotImplementedException();
}

void DataBase::eliminarCarga()
{
    throw gcnew System::NotImplementedException();
}
