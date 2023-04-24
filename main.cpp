//Made by MachChemie
#include <iostream>
#include <string>
using namespace std;

int main() {
  int zeilen1, spalten1, zeilen2, spalten2;

begin:
  // Eingabe Zeilen u Spalten array 1
  cout << "Geben Sie die Anzahl der Zeilen von Array 1 ein: ";
  cin >> zeilen1;
  cout << "Geben Sie die Anzahl der Spalten von Array 1 ein: ";
  cin >> spalten1;
  int arr1[zeilen1][spalten1];

  // Eingabe arr1
  cout << "Bitte geben Sie die Elemente von Array 1 ein:" << endl;
  for (int i = 0; i < zeilen1; i++) {
    for (int j = 0; j < spalten1; j++) {
      cout << "Geben Sie das Element [" << i << "][" << j << "] ein: ";
      cin >> arr1[i][j];
    }
  }

  // Eingabe Zeilen u spalten array 2
  cout << "Geben Sie die Anzahl der Zeilen von Array 2 ein: ";
  cin >> zeilen2;
  cout << "Geben Sie die Anzahl der Spalten von Array 2 ein: ";
  cin >> spalten2;
  int arr2[zeilen2][spalten2];

  // Eingabe arr2
  cout << "Bitte geben Sie die Elemente von Array 2 ein:" << endl;
  for (int i = 0; i < zeilen2; i++) {
    for (int j = 0; j < spalten2; j++) {
      cout << "Geben Sie das Element [" << i << "][" << j << "] ein: ";
      cin >> arr2[i][j];
    }
  }

  // ausgabe der eingabe
  cout << "Das erste Array ist:" << endl;
  for (int i = 0; i < zeilen1; i++) {
    for (int j = 0; j < spalten1; j++) {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Das zweite Array ist:" << endl;
  for (int i = 0; i < zeilen2; i++) {
    for (int j = 0; j < spalten2; j++) {
      cout << arr2[i][j] << " ";
    }
    cout << endl;
  }
  
  //Rechnen
  string rechenorp;
abfrage_Operator:
  cout << "Welche Rechenoperation moechten Sie durchfuehren: + - * "<<endl;
  cin >> rechenorp;

  if (rechenorp=="+") {
      if (zeilen1==zeilen2 & spalten1==spalten2){

        int result[zeilen1][spalten1];
        for (int i = 0; i < zeilen1; i++) {
            for (int j = 0; j < spalten1; j++) {
                result[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        cout << "Die Summe der beiden Arrays ist:" << endl;
        for (int i = 0; i < zeilen1; i++) {
            for (int j = 0; j < spalten1
        ; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
      }
      else {
        cout <<"Spalten- und Zeilennummern muessen uebereinstimmen! Bitte erneut eingeben..."<<endl;
        goto begin;
      }
      
  }
  else if (rechenorp=="-") {
      if (zeilen1==zeilen2 & spalten1==spalten2){

        int result[zeilen1][spalten1];
        for (int i = 0; i < zeilen1; i++) {
            for (int j = 0; j < spalten1
        ; j++) {
                result[i][j] = arr1[i][j] - arr2[i][j];
            }
        }
        cout << "Die Different der beiden Arrays ist:" << endl;
        for (int i = 0; i < zeilen1; i++) {
            for (int j = 0; j < spalten1
        ; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
      }
      else {
        cout <<"Spalten- und Zeilennummern muessen uebereinstimmen! Bitte erneut eingeben..."<<endl;
        goto begin;
      }
  }
  else if (rechenorp=="*") {
      int result[zeilen2][spalten2]={0};
      if (spalten1==zeilen2){
        // Matrixmultiplikation
        for (int i = 0; i < zeilen1; i++) {
            for (int j = 0; j < spalten2; j++) {
              result[i][j]=0;
                for (int k = 0; k < spalten1; k++) {
                    
                    result[i][j] += arr1[i][k] * arr2[k][j];
                    /*cout <<"Arr1   "<<arr1[i][k] <<endl;
                    cout <<"Arr2   "<<arr2[k][j] <<endl;
                    cout <<"Ergebnis   "<<result[i][j] <<endl;
                    cout << "i  "<<i<<endl;
                    cout << "j    "<< j<<endl;*/
                }
            }
        }

        // Ergebnis ausgeben
        cout << "Das Produkt der beiden Arrays ist: " << endl;
        for (int i = 0; i < zeilen1; i++) {
            for (int j = 0; j < spalten2; j++) {
                cout << result[i][j] << " ";
            }
        cout << endl;
        }
        
      }
      else {
        cout <<"Spaltenanzahl der 1ten Matrize muss mit der Zeilenanzahl der 2ten Matrize uebereinstimmen! Bitte erneut eingeben..."<<endl;
        goto begin;
      }

  }
  else {
      cout <<"Ihre Eingabe ist invalid, bitte wiederholen!!!!"<<endl;
      goto abfrage_Operator;
  }
  return 0;
}




