#pragma once
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
using namespace std;

ref class DataBase
{
private:
	MySqlConnection^ coneccion;
	String^ user;
	String^ pass;
	String^ seccion;
public:
	DataBase();
	String^ connectionString;
	bool loguin(String^,String^);
	String^ nombre(String^);
	String^ tomarSeccion(String^, String^);
	void abrirConection();
	void cerrarConection();
	DataTable^ guardiaSeccion();
	void insertGuardia(String^);
	void eliminarCarga();


};

