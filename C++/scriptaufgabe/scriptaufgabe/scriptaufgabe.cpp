
#include <iostream>
#include <map>
using namespace std;



double summe(double* f, int n)
{
	double output = 0.0;

	for (int i = 0; i < n; i++)
	{
		output += f[i];
	}
	return output;
}

double durchschnitt(double* f, int n)
{
	double summe = 0.0;
	for (int i = 0; i < n; i++)
	{
		summe += f[i];
	}
	return summe / n;
}

double minimum(double* f, int n)
{
	double min = f[0]; // Starten mit dem ersten Element als Minimum
	for (int i = 1; i < n; ++i) {
		if (f[i] < min) {
			min = f[i]; // Aktualisieren, wenn ein kleineres Element gefunden wird
		}
	}
	return min;
}


double maximum(double* f, int n)
{
	double max = f[0]; // Starten mit dem ersten Element als Minimum
	for (int i = 1; i < n; ++i) {
		if (f[i] > max) {
			max = f[i]; // Aktualisieren, wenn ein kleineres Element gefunden wird
		}
	}
	return max;
}

double abweichung(double* f, int n)
{
	double avg = durchschnitt(f, n);
	double max_abweichung = 0.0;

	for (int i = 0; i < n; ++i) {
		double diff = abs(f[i] - avg);
		if (diff > max_abweichung) {
			max_abweichung = diff;
		}
	}
	return max_abweichung;
}

void input(double* f, int n)
{
	cout << "Bitte geben Sie 10 Werte ein: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "Wert: ";
		cin >> f[i];
	}
	cout << "Die Werte sind vollständig." << endl;
}

void output(double* f, int n)
{
	for (int i = 0; i < n; i++) {
		cout << f[i] << endl;
	}
}

int main() {
	double arr[10];
	double werte[] = { 3.1415, 5.777, 786.5654 };
	int n = sizeof(werte) / sizeof(werte[0]);  // Berechnung der Anzahl der Felder

	cout << summe(werte, n) << endl;
	cout << durchschnitt(werte, 3) << endl;
	input(arr, sizeof(arr) / sizeof(arr[0]));  // könnte auch input(arr, 10) sein
	output(arr, 10);   // (start, 10 Felder groß)
	cout << "Minimum: " << minimum(werte, n) << endl;
	cout << "Maximum: " << maximum(werte, n) << endl;
	cout << "Größte Abweichung: " << abweichung(werte, n) << endl;
	return 0;
}