// rettungsschwimmer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
	double a = 50.0;
	double b = 50.0;
	double c = 0;
	double d = 50.0;
	double e = 50.0;
	double f = 0;
	double g = 100.0;
	double strecke_g;

	strecke_g = b + d;


	double land = 15.0;
	double sea = 5.0;

	double timeland;
	double timesea;
	double direct_time = 0;
	double short_time = 68;

	double landms = (land * 1000.0) / 3600.0;
	double seams = (sea * 1000.0) / 3600.0;
	double offset = 0.0;


	do
	{

		direct_time = short_time;

		double hypothenuse_c = sqrt((a * a)+ ((b + offset) * (b + offset)));
		timeland = hypothenuse_c / landms;

		double hypothenuse_f = sqrt((d * d) + ((b - offset) * (b - offset)));
		offset += 0.1;
		timesea = hypothenuse_f / seams;


		short_time = timeland + timesea;

		cout << hypothenuse_c << "		" << hypothenuse_f << "		" << endl;



	} while (direct_time > short_time);

	cout << short_time << " ist die kuerzeste Zeit, in der der Weg zurueckgelegt werden kann.\n";













}









// tges(x) = √(L-x)²+y² / v1 + √x² + z² / v2

//t‘ges(x) = -(L - x) / (v1 √(L - x)² + y²) + x / (v2 √x² + z²)
//t‘ges(x) = 0
//(L - x) / (v1 √(L - x)² + y²) = x / (v2 √x² + z²)


