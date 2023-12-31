#pragma once
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
using namespace std;

ref class DataBase
{

private:
	MySqlConnection^ coneccion;
	

public:
	String^ user;
	DataBase();
	String^ connectionString;
	bool loguin(String^,String^);
	DataRow^ nombre(String^);
	DataRow^ apellido(String^);
	DataRow^ jerarquia(String^);
	DataRow^ tomarSeccion(String^);
	void abrirConection();
	void cerrarConection();
	DataTable^ guardiaSeccion(String^);
	DataTable^ guardiasAnteriores(String^);
	void insertGuardia(String^ user,String^, String^, String^);
	void eliminarCarga();
	DataTable^ SERVICIOS(String^);
	DataRow^ totalServicios(String^);
	DataTable^ mostrarAnuncios();
	DataTable^ mostrarTareas(String^);



};

