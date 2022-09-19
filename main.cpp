#include <iostream>
#include <Windows.h>
#include <string>
#include <cstring>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include "parametry.h"
#include <cstdlib>
#include <sstream>
#include <ctime>

 
using namespace std;


// DATA PLIKU
//------------------------------------------------------------------------------
const string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y.%m.%d  %X", &tstruct);

    return buf;
}


// GODZINA PLIKU
//------------------------------------------------------------------------------
const string currentDateTimeGodzina() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%X", &tstruct);

    return buf;
}


// DATA FOLDERU
//------------------------------------------------------------------------------
const string currentDateTimeFolder() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y.%m.%d", &tstruct);

    return buf;
}


// POPRAWNOŒÆ ZNAKÓW
//------------------------------------------------------------------------------
bool isRight()
{
    if (cin.rdstate() != 0)
    {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "Niepoprawny znak. Wpisz ponownie: ";
        return false;   
    }   
    
    return true;
    
}


// PAUZA: 1 + CZAS_PAUZY_1
//------------------------------------------------------------------------------
void pauza_1_1(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}

}


// PAUZA: 1 + CZAS_PAUZY_2
//------------------------------------------------------------------------------
void pauza_1_2(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci )
{
    pauza++;
	Sleep (CZAS_PAUZY_2);
}

}


// PAUZA: 2 + CZAS_PAUZY_1
//------------------------------------------------------------------------------
void pauza_2_1(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci*2 )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}

}


// PAUZA: 3 + CZAS_PAUZY_2
//------------------------------------------------------------------------------
void pauza_bompos() {
          
int pauza = 1;
int max_czynnosci = 1;

while( pauza <= max_czynnosci*3 )
{; 
	cout<<pauza<<" "; 
	pauza++;
    Sleep (CZAS_PAUZY_BOMPOS);	 	
} 

}


// PAUZA: 4 + CZAS_PAUZY_1
//------------------------------------------------------------------------------
void pauza_4_1(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci*4 )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}

}


int main ()
{       
         
          
/*          
  int muzyka;
  //open the audio file
  mciSendString("open \"Music.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
  
  cout<<"Press 1 to start playing.\n";
  cin>>muzyka;
  
  //play the audio file and specify start and end positions 
  if(muzyka==1)
  {
    cout<<"file playing....\n";
    time_t t1=time(0);
    mciSendString("play mp3 from 10000 to 30000 wait", NULL, 0, NULL);
    time_t t2=time(0);
    cout<<"Duration of the play :"<<t2-t1<<" seconds."<<endl;
  }
  else
    cout<<"You did not press 1."<<endl;
    
  //close the audio file
  mciSendString("close mp3", NULL, 0, NULL);
*/
    
    
setlocale( LC_ALL, "Polish" ); 
   
string x;   
int max_czynnosci;   
int a;
int b;
int c;
int os_x;
int os_y;
int max_bompos = 1;
//int pauza; 
//int max_marszruta = 1;
int licznik;

string linia_0;
string rodzaj_indeksu;  
string indeks_nowy;
string indeks_nowy_gwiazdka;
string indeks_ostatni;
string indeks_wzorzec;
string klasa_nowy;
string klasa_wzorzec;
string indeks_nazwa;
string linia_1;
string indeks_sklad;
string marszruta;
string marszruta_wiersz;
string marszruta_pozycja;
string zmiana_marszruty_zapisanie;
string dlugosc;
string szerokosc;
string wysokosc;
string jednostka;
string objetosc;
string waga;
string linia_2;
string abs_1;
string abs_2;
string abs_3;
string abs_4;
string wymiar_na_gotowo;
string linia_3;
string nazwa_rysunku;
string nazwa_rodziny;
string dl_frez_fdolno;
string il_wiercen;
string dl_frez_dia;
string dl_frez_pila;
string dl_oprosto;
string il_oprosto;

string dl_okrzywo;
string il_okrzywo; 
string DS00;

string linia_indeks;
string linia;

string jezyk;

string enter;


string indeks_nowy_auto_szukanie_sap;
string indeks_nowy_auto_szukanie_plik;


string data_start = currentDateTime();

string szukanie_indeksow_40 = "0002";
string szukanie_indeksow_50 = "0001";

int rozdzielczosc_ekranu;
string rozdzielczosc;
string skalowanie;

int height;
int width;

int height_virtual;
int width_virtual;

do {
          
          
//ROZPOZNAWANIE ROZDZIELCZOŒCI EKRANU
//==============================================================================          
do {

HDC hdc = GetDC(NULL); // get the desktop device context
HDC hDest = CreateCompatibleDC(hdc); // create a device context to use yourself

// get the height && width of the screen
height_virtual = GetSystemMetrics(SM_CYSCREEN); //(SM_CYVIRTUALSCREEN);
width_virtual = GetSystemMetrics(SM_CXSCREEN);  //(SM_CXVIRTUALSCREEN)

height = GetSystemMetrics(SM_CYSCREEN);
width = GetSystemMetrics(SM_CXSCREEN);


if (height_virtual == 864) {
 
skalowanie = "125%";     

height = height_virtual * 125 / 100;
width = width_virtual * 125 / 100;      
          
}

if (height_virtual == 1080) {
 
skalowanie = "100%";  

height = height_virtual * 100 / 100;
width = width_virtual * 125 / 100;          
          
}


} while (height_virtual == 0);
//==============================================================================  
//ROZPOZNAWANIE ROZDZIELCZOŒCI EKRANU


//SPRAWDZANIE PO£O¯ENIA OKNA SAP 
//==============================================================================  
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = PASEK_POLA_GLOWNEGO_OS_X;
os_y = PASEK_POLA_GLOWNEGO_OS_Y;


do {
          

    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
system( "cls" );

cout<<"TWORZENIE SPECYFIKACJI MATERIA£OWEJ: SPRAWDZANIE PO£O¯ENIA OKNA SAP"<<endl;
cout<<"==========================================================================="<<endl;   
cout << a <<" " << b << " " << c << endl;


Sleep (1000);
    

if (KOLOR_NIEBIESKI_2_RGB_2) {    
         
cout<<"==========================================================================="<<endl;
cout<<"PRAWID£OWO PO£O¯ENE OKNA SAP. POTWIERD (t): ";
cin>>enter;

}


}   while (KOLOR_NIEBIESKI_2_RGB_1); 
//==============================================================================
//SPRAWDZANIE PO£O¯ENIA OKNA SAP 


system( "cls" ); 


cout<<"TWORZENIE SPECYFIKACJI MATERIA£OWEJ: "<<width<<"x"<<height<<" - "<<width_virtual<<"x"<<height_virtual<<" - "<<skalowanie<<endl;
cout<<"==========================================================================="<<endl;


// DZWIÊKI
//------------------------------------------------------------------------------

string dzwieki;
cout<<"0. Pomin¹æ w³¹czenie dzwiêków (t/n): ";
cin>>dzwieki;

while (dzwieki != "t" and dzwieki != "n") {
cout<<"0. Niepoprawny znak. Wpisz ponownie: "; 
cin>>dzwieki;
} 


// WPROWADZANIE DANYCH DO KONSOLI
//------------------------------------------------------------------------------

string tworzenie_pliku;
cout<<"0. Tworzenie pliku: PLIK.TXT (t/n): ";
cin>>tworzenie_pliku;

while (tworzenie_pliku != "t" and tworzenie_pliku != "n") {
cout<<"0. Niepoprawny znak. Wpisz ponownie: "; 
cin>>tworzenie_pliku;
} 


// OTWIERANIE PLIKU Z DANYMI
//------------------------------------------------------------------------------
if (tworzenie_pliku == "t") {
          

cout<<"==========================================================================="<<endl;
          
          
// OTWIERANIE PLIKU Z DANYMI
//------------------------------------------------------------------------------
fstream przechwyt_indeks; //obiekt typu fstream (uchwyt do pliku)
przechwyt_indeks.open("indeksy.txt"); //otwieramy plik: plik.txt (plik - nazwa pliku, txt - rozszerzenie)       


fstream plik1; 

string plik1_caly = "plik.txt";
plik1.open(plik1_caly.c_str(), ios::out);


getline(przechwyt_indeks, linia_0);


licznik = 1;


do {


getline(przechwyt_indeks, linia);


if (linia != "") {


int dlugosc_wiersza = 0;
int xx;
int licznik_znakow;
int licznik_znakow_tab;
string znak;

for( xx = 0; xx < linia.length(); xx++ )
{

dlugosc_wiersza++;

}

//cout<<"DLUGOSC WIERSZA: "<<dlugosc_wiersza<<endl;


//TWORZENIE ZMIENNEJ - RODZAJ MATERIA£U
//==============================================================================
znak = "a";

licznik_znakow = 0;

do {
          
znak = linia.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	");

 
//cout<<i<<endl;
  

string rodzaj_indeksu_poczatek = linia;
rodzaj_indeksu_poczatek.erase (licznik_znakow,dlugosc_wiersza);

rodzaj_indeksu = rodzaj_indeksu_poczatek;
  
//cout<<"RODZAJ MATERIALU: "<<rodzaj_indeksu<<endl;  
//==============================================================================
  

//TWORZENIE ZMIENNEJ - INDEKS NOWY
//==============================================================================
string indeks_nowy_poczatek = linia;  

licznik_znakow_tab = licznik_znakow +1;

indeks_nowy_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_nowy_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  
string indeks_nowy_koniec = indeks_nowy_poczatek;
indeks_nowy_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_nowy = indeks_nowy_koniec;
  
//cout<<"INDEKS NOWY: "<<indeks_nowy<<endl;  
//==============================================================================
  

//TWORZENIE ZMIENNEJ - INDEKS WZORZEC
//==============================================================================
string indeks_wzorzec_poczatek = indeks_nowy_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

indeks_wzorzec_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_wzorzec_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string indeks_wzorzec_koniec = indeks_wzorzec_poczatek; 
indeks_wzorzec_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_wzorzec = indeks_wzorzec_koniec;
  
//cout<<"INDEKS WZORZEC: "<<indeks_wzorzec<<endl;  
//==============================================================================
  
  
//TWORZENIE ZMIENNEJ - INDEKS NAZWA
//==============================================================================
string indeks_nazwa_poczatek = indeks_wzorzec_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

indeks_nazwa_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_nazwa_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string indeks_nazwa_koniec = indeks_nazwa_poczatek; 
indeks_nazwa_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_nazwa = indeks_nazwa_koniec;
  
//cout<<"INDEKS NAZWA: "<<indeks_nazwa<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - INDEKS SKLAD
//==============================================================================
string indeks_sklad_poczatek = indeks_nazwa_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

indeks_sklad_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_sklad_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string indeks_sklad_koniec = indeks_sklad_poczatek; 
indeks_sklad_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_sklad = indeks_sklad_koniec;
  
//cout<<"INDEKS SKLAD: "<<indeks_sklad<<endl;  
//==============================================================================   
  
  
//TWORZENIE ZMIENNEJ - MARSZRUTA
//==============================================================================
string marszruta_poczatek = indeks_sklad_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

marszruta_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = marszruta_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string marszruta_koniec = marszruta_poczatek; 
marszruta_koniec.erase (licznik_znakow,dlugosc_wiersza);

marszruta = marszruta_koniec;
  
//cout<<"MARSZRUTA: "<<marszruta<<endl;  
//==============================================================================    
  
  
//TWORZENIE ZMIENNEJ - DLUGOŒÆ
//==============================================================================
string dlugosc_poczatek = marszruta_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dlugosc_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dlugosc_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dlugosc_koniec = dlugosc_poczatek; 
dlugosc_koniec.erase (licznik_znakow,dlugosc_wiersza);

dlugosc = dlugosc_koniec;
  
//cout<<"DLUGOSC: "<<dlugosc<<endl;  
//==============================================================================  
  
  
//TWORZENIE ZMIENNEJ - SZEROKOŒÆ
//==============================================================================
string szerokosc_poczatek = dlugosc_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

szerokosc_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = szerokosc_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string szerokosc_koniec = szerokosc_poczatek; 
szerokosc_koniec.erase (licznik_znakow,dlugosc_wiersza);

szerokosc = szerokosc_koniec;
  
//cout<<"SZEROKOSC: "<<szerokosc<<endl;  
//==============================================================================    
  
  
//TWORZENIE ZMIENNEJ - WYSOKOŒÆ
//==============================================================================
string wysokosc_poczatek = szerokosc_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

wysokosc_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = wysokosc_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string wysokosc_koniec = wysokosc_poczatek; 
wysokosc_koniec.erase (licznik_znakow,dlugosc_wiersza);

wysokosc = wysokosc_koniec;
  
//cout<<"WYSOKOSC: "<<wysokosc<<endl;  
//==============================================================================    


//TWORZENIE ZMIENNEJ - WAGA
//==============================================================================
string waga_poczatek = wysokosc_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

waga_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = waga_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string waga_koniec = waga_poczatek; 
waga_koniec.erase (licznik_znakow,dlugosc_wiersza);

waga = waga_koniec;
  
//cout<<"WAGA: "<<waga<<endl;  
//==============================================================================  
  

//TWORZENIE ZMIENNEJ - ABS 1
//==============================================================================
string abs_1_poczatek = waga_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_1_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_1_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_1_koniec = abs_1_poczatek; 
abs_1_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_1 = abs_1_koniec;
  
//cout<<"ABS 1: "<<abs_1<<endl;  
//==============================================================================  


//TWORZENIE ZMIENNEJ - ABS 2
//==============================================================================
string abs_2_poczatek = abs_1_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_2_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_2_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_2_koniec = abs_2_poczatek; 
abs_2_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_2 = abs_2_koniec;
  
//cout<<"ABS 2: "<<abs_2<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - ABS 3
//==============================================================================
string abs_3_poczatek = abs_2_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_3_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_3_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_3_koniec = abs_3_poczatek; 
abs_3_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_3 = abs_3_koniec;
  
//cout<<"ABS 3: "<<abs_3<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - ABS 4
//==============================================================================
string abs_4_poczatek = abs_3_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_4_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_4_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_4_koniec = abs_4_poczatek; 
abs_4_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_4 = abs_4_koniec;
  
//cout<<"ABS 4: "<<abs_4<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - WYMIAR NA GOTOWO
//==============================================================================
string wymiar_na_gotowo_poczatek = abs_4_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

wymiar_na_gotowo_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = wymiar_na_gotowo_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string wymiar_na_gotowo_koniec = wymiar_na_gotowo_poczatek; 
wymiar_na_gotowo_koniec.erase (licznik_znakow,dlugosc_wiersza);

wymiar_na_gotowo = wymiar_na_gotowo_koniec;
  
//cout<<"NAZWA RYSUNKU: "<<wymiar_na_gotowo<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - NAZWA RYSUNKU
//==============================================================================
string nazwa_rysunku_poczatek = wymiar_na_gotowo_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

nazwa_rysunku_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = nazwa_rysunku_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string nazwa_rysunku_koniec = nazwa_rysunku_poczatek; 
nazwa_rysunku_koniec.erase (licznik_znakow,dlugosc_wiersza);

nazwa_rysunku = nazwa_rysunku_koniec;
  
//cout<<"NAZWA RYSUNKU: "<<nazwa_rysunku<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - NAZWA RODZINY
//==============================================================================
string nazwa_rodziny_poczatek = nazwa_rysunku_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

nazwa_rodziny_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = nazwa_rodziny_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string nazwa_rodziny_koniec = nazwa_rodziny_poczatek; 
nazwa_rodziny_koniec.erase (licznik_znakow,dlugosc_wiersza);

nazwa_rodziny = nazwa_rodziny_koniec;
  
//cout<<"NAZWA RODZINY: "<<nazwa_rodziny<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - DL_FREZ_FDOLNO
//==============================================================================
string dl_frez_fdolno_poczatek = nazwa_rodziny_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_frez_fdolno_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_frez_fdolno_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_frez_fdolno_koniec = dl_frez_fdolno_poczatek; 
dl_frez_fdolno_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_frez_fdolno = dl_frez_fdolno_koniec;
  
//cout<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<<endl;  
//============================================================================== 


//TWORZENIE ZMIENNEJ - IL_WIERCEN
//==============================================================================
string il_wiercen_poczatek = dl_frez_fdolno_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

il_wiercen_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = il_wiercen_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string il_wiercen_koniec = il_wiercen_poczatek; 
il_wiercen_koniec.erase (licznik_znakow,dlugosc_wiersza);

il_wiercen = il_wiercen_koniec;
  
//cout<<"IL_WIERCEN: "<<il_wiercen<<endl;  
//==============================================================================


//TWORZENIE ZMIENNEJ - DL_FREZ_DIA
//==============================================================================
string dl_frez_dia_poczatek = il_wiercen_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_frez_dia_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_frez_dia_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_frez_dia_koniec = dl_frez_dia_poczatek; 
dl_frez_dia_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_frez_dia = dl_frez_dia_koniec;
  
//cout<<"DL_FREZ_DIA: "<<dl_frez_dia<<endl;  
//==============================================================================


//TWORZENIE ZMIENNEJ - DL_FREZ_PILA
//==============================================================================
string dl_frez_pila_poczatek = dl_frez_dia_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_frez_pila_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_frez_pila_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_frez_pila_koniec = dl_frez_pila_poczatek; 
dl_frez_pila_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_frez_pila = dl_frez_pila_koniec;
  
//cout<<"DL_FREZ_PILA: "<<dl_frez_pila<<endl;  
//==============================================================================


//TWORZENIE ZMIENNEJ - DL_OPROSTO
//==============================================================================
string dl_oprosto_poczatek = dl_frez_pila_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_oprosto_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_oprosto_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_oprosto_koniec = dl_oprosto_poczatek; 
dl_oprosto_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_oprosto = dl_oprosto_koniec;
  
//cout<<"DL_OPROSTO: "<<dl_oprosto<<endl;  
//==============================================================================


//TWORZENIE ZMIENNEJ - IL_OPROSTO
//==============================================================================
string il_oprosto_poczatek = dl_oprosto_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

il_oprosto_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = il_oprosto_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string il_oprosto_koniec = il_oprosto_poczatek; 
il_oprosto_koniec.erase (licznik_znakow,dlugosc_wiersza);

il_oprosto = il_oprosto_koniec;
  
//cout<<"IL_OPROSTO: "<<il_oprosto<<endl;  
//==============================================================================


//TWORZENIE ZMIENNEJ - DL_OKRZYWO
//==============================================================================
string dl_okrzywo_poczatek = il_oprosto_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_okrzywo_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_okrzywo_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_okrzywo_koniec = dl_okrzywo_poczatek; 
dl_okrzywo_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_okrzywo = dl_okrzywo_koniec;
  
//cout<<"DL_OKRZYWO: "<<dl_okrzywo<<endl;  
//==============================================================================


//TWORZENIE ZMIENNEJ - IL_OKRZYWO
//==============================================================================
string il_okrzywo_poczatek = dl_okrzywo_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

il_okrzywo_poczatek.erase (0,licznik_znakow_tab); 

string il_okrzywo_koniec = il_okrzywo_poczatek; 
//il_okrzywo_koniec.erase (licznik_znakow,dlugosc_wiersza);

il_okrzywo = il_okrzywo_koniec;
  
//cout<<"IL_OKRZYWO: "<<il_okrzywo<<endl;  
//==============================================================================


plik1 <<"==========================================================================="<<endl;
plik1 <<"RODZAJ INDEKSU: "<<rodzaj_indeksu<<endl;
plik1 <<"INDEKS NOWY: "<<indeks_nowy<<endl;
plik1 <<"INDEKS WZORZEC: "<<indeks_wzorzec<<endl;
plik1 <<"INDEKS NAZWA: "<<indeks_nazwa<<endl;
plik1 <<"INDEKS SKLAD: "<<indeks_sklad<<endl;
plik1 <<"MARSZRUTA: "<<marszruta<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"DLUGOSC: "<<dlugosc<<endl;
plik1 <<"SZEROKOSC: "<<szerokosc<<endl;
plik1 <<"WYSOKOSC: "<<wysokosc<<endl;
plik1 <<"WAGA: "<<waga<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"ABS 1: "<<abs_1<<endl;
plik1 <<"ABS 2: "<<abs_2<<endl;
plik1 <<"ABS 3: "<<abs_3<<endl;
plik1 <<"ABS 4: "<<abs_4<<endl;
plik1 <<"WYMIAR NA GOTOWO: "<<wymiar_na_gotowo<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"NAZWA RYSUNKU: "<<nazwa_rysunku<<endl;
plik1 <<"NAZWA RODZINY: "<<nazwa_rodziny<<endl;
plik1 <<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<<endl;
plik1 <<"IL_WIERCEN: "<<il_wiercen<<endl;
plik1 <<"DL_FREZ_DIA: "<<dl_frez_dia<<endl;
plik1 <<"DL_FREZ_PILA: "<<dl_frez_pila<<endl;
plik1 <<"DL_OPROSTO: "<<dl_oprosto<<endl;
plik1 <<"IL_OPROSTO: "<<il_oprosto<<endl;
plik1 <<"DL_OKRZYWO: "<<dl_okrzywo<<endl;
plik1 <<"IL_OKRZYWO: "<<il_okrzywo<<endl;


cout<<licznik++ << ". NOWY: " <<indeks_nowy<< " - WZORZEC: "<<indeks_wzorzec<< " - NAZWA: "<<indeks_nazwa<<endl;


}


}

while (linia != ""); //przerwij je¿eli linia bêdzie pusta (dane w pliku siê skoñcz¹) UWAGA: Pamiêtaj, ¿eby w pliku zostawiæ ostatni¹ linijkê pust¹
przechwyt_indeks.close(); //zamykamy plik


//plik1.close();


cout<<"==========================================================================="<<endl;


}


// OTWIERANIE PLIKU Z DANYMI
//------------------------------------------------------------------------------
    fstream przechwyt; //obiekt typu fstream (uchwyt do pliku)
    przechwyt.open("plik.txt"); //otwieramy plik: plik.txt (plik - nazwa pliku, txt - rozszerzenie)   


// WPROWADZANIE DANYCH DO KONSOLI
//------------------------------------------------------------------------------

string tworzenie_materialu;
cout<<"1. Tworzenie materia³u (t/n): ";
cin>>tworzenie_materialu;

while (tworzenie_materialu != "t" and tworzenie_materialu != "n") {
cout<<"1. Niepoprawny znak. Wpisz ponownie: "; 
cin>>tworzenie_materialu;
} 




if (tworzenie_materialu == "n") {
 
indeks_nowy_auto_szukanie_sap = "n";
    
}

else {

indeks_nowy_auto_szukanie_sap;
cout<<"-  Odszukaæ automatycznie z SAP: Indeks - NOWY (t/n): ";
cin>>indeks_nowy_auto_szukanie_sap;

while (indeks_nowy_auto_szukanie_sap != "t" and indeks_nowy_auto_szukanie_sap != "n") {
cout<<"-  Niepoprawny znak. Wpisz ponownie: "; 
cin>>indeks_nowy_auto_szukanie_sap;
}

}


if (indeks_nowy_auto_szukanie_sap == "n") {


cout<<"-  Pobraæ automatycznie z pliku: Indeks - NOWY (t/n): ";
cin>>indeks_nowy_auto_szukanie_plik;

while (indeks_nowy_auto_szukanie_plik != "t" and indeks_nowy_auto_szukanie_plik != "n") {
cout<<"-  Niepoprawny znak. Wpisz ponownie: "; 
cin>>indeks_nowy_auto_szukanie_plik;
}

/*
if (indeks_nowy_auto_szukanie_plik == "n") {
cout<<"-  Wpisz rêcznie: Indeks - NOWY (00-0000-0000-00000): ";
cin>>indeks_nowy;
}
*/


}



//TWORZENIE FOLDERU
//------------------------------------------------------------------------------
string folder = currentDateTimeFolder();


if (CreateDirectory(folder.c_str(), NULL))
{
    // Directory created
}
else if (ERROR_ALREADY_EXISTS == GetLastError())
{
    // Directory already exists
}
else
{
    // Failed for some other reason
}


  
string tworzenie_profilu_konfiguracji;
cout<<"2. Tworzenie profilu konfiguracji (t/n): ";
cin>>tworzenie_profilu_konfiguracji;

while (tworzenie_profilu_konfiguracji != "t" and tworzenie_profilu_konfiguracji != "n") {
cout<<"2. Niepoprawny znak. Wpisz ponownie: "; 
cin>>tworzenie_profilu_konfiguracji;
} 


string tworzenie_klasy;
cout<<"3. Tworzenie klasy (t/n): ";
cin>>tworzenie_klasy;  

while (tworzenie_klasy != "t" and tworzenie_klasy != "n") {
cout<<"3. Niepoprawny znak. Wpisz ponownie: "; 
cin>>tworzenie_klasy;
} 


string przypisanie_materialu_do_klasy;
cout<<"4. Przypisanie materia³u do klasy (t/n): ";
cin>>przypisanie_materialu_do_klasy; 

while (przypisanie_materialu_do_klasy != "t" and przypisanie_materialu_do_klasy != "n") {
cout<<"4. Niepoprawny znak. Wpisz ponownie: "; 
cin>>przypisanie_materialu_do_klasy;
} 


string wywolanie_opracowania_wgladu;
cout<<"5. Wywo³anie opracowania wgl¹du - ZLOVC_BOMPOS (t/n): ";
cin>>wywolanie_opracowania_wgladu; 

while (wywolanie_opracowania_wgladu != "t" and wywolanie_opracowania_wgladu != "n") {
cout<<"5. Niepoprawny znak. Wpisz ponownie: "; 
cin>>wywolanie_opracowania_wgladu;
} 


string tworzenie_specyfikacji_materialowej_dla_materialu;
cout<<"6. Tworzenie specyfikacji materia³owej dla materia³u (t/tt/n): ";
cin>>tworzenie_specyfikacji_materialowej_dla_materialu;  

while (tworzenie_specyfikacji_materialowej_dla_materialu != "t" and tworzenie_specyfikacji_materialowej_dla_materialu != "tt" and tworzenie_specyfikacji_materialowej_dla_materialu != "n") {
cout<<"6. Niepoprawny znak. Wpisz ponownie: "; 
cin>>tworzenie_specyfikacji_materialowej_dla_materialu;
}    


string zmiana_marszruty_technologicznej;
cout<<"7. Zmiana marszruty technologicznej (t/tt/n): ";
cin>>zmiana_marszruty_technologicznej;

while (zmiana_marszruty_technologicznej != "t" and zmiana_marszruty_technologicznej != "tt" and zmiana_marszruty_technologicznej != "n") {
cout<<"7. Niepoprawny znak. Wpisz ponownie: "; 
cin>>zmiana_marszruty_technologicznej;
} 


if (zmiana_marszruty_technologicznej =="tt") {

marszruta_wiersz;
cout<<"-  Marszruta - wiersz (A/1/2/3/4/5): ";
cin>>marszruta_wiersz; 


marszruta_pozycja;
cout<<"-  Marszruta - pozycja (10/20/30/40/50): ";
cin>>marszruta_pozycja; 
              
}


cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"A. Czas przerwy miêdzy czynnoœciami (1 = 0,1 sek.- zalecane: 6 (1-9)): ";
//cin>>max_czynnosci;

do
{
    cin>>max_czynnosci;
} while (!isRight());


licznik--;


do {
                  
if (indeks_nowy_auto_szukanie_sap == "n" and indeks_nowy_auto_szukanie_plik == "n") {
cout<<"---------------------------------------------------------------------------"<<endl; 
cout<<"C. Wpisz rêcznie: Indeks - NOWY (00-0000-0000-00000): ";
cin>>indeks_nowy;
}

    
getline(przechwyt, linia_0);
getline(przechwyt, rodzaj_indeksu);
rodzaj_indeksu.erase (0,16);

    
if (rodzaj_indeksu == "10" or rodzaj_indeksu == "20" or rodzaj_indeksu == "30" or rodzaj_indeksu == "40"  or rodzaj_indeksu == "50") { 

if (indeks_nowy_auto_szukanie_sap == "n" and indeks_nowy_auto_szukanie_plik == "n") {

getline(przechwyt, linia_0);
   
//cout<<"INDEKS WPISANY: "<<indeks_nowy<<endl;    

}

else {

getline(przechwyt, indeks_nowy);
indeks_nowy.erase (0,13);   

//cout<<"INDEKS POBRANY: "<<indeks_nowy<<endl;    
          
}


getline(przechwyt, indeks_wzorzec);
indeks_wzorzec.erase (0,16);


pauza_1_1(max_czynnosci);


if (indeks_nowy_auto_szukanie_sap == "t" and rodzaj_indeksu == "10" or indeks_nowy_auto_szukanie_sap == "t" and rodzaj_indeksu == "20"
    or indeks_nowy_auto_szukanie_sap == "t" and rodzaj_indeksu == "30") {
                    
//KLIKANIE W PUSTE POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PUSTE_POLE_SAP_2 );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{     
          
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM03 (WYŒWIETLANIE MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x33, 0, 0, 0); // 3	       
keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//WCISKANIE - F4 (OTWIERANIE OKNA)
//------------------------------------------------------------------------------
keybd_event(0x73, 0, 0, 0); // F4	       
keybd_event(0x73, 0, KEYEVENTF_KEYUP, 0); // F4


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//TWORZENIE IDEKSU Z GWIAZDK¥
//------------------------------------------------------------------------------
string indeks_wariant_poczatek = indeks_wzorzec;
string indeks_wariant_koniec = indeks_wzorzec;

string indeks_nowy_gwiazdka;

string indeks_wariant_srodek_3 = "*";


if (rodzaj_indeksu == "20" or rodzaj_indeksu == "30") { 


indeks_wariant_poczatek.erase (8,11);
indeks_wariant_koniec.erase (0,12);


indeks_nowy_gwiazdka = indeks_wariant_poczatek + indeks_wariant_srodek_3 + indeks_wariant_koniec;

}


if (rodzaj_indeksu == "10") {
          

indeks_wariant_poczatek.erase (14,18);


indeks_nowy_gwiazdka = indeks_wariant_poczatek + indeks_wariant_srodek_3;
          
          
}
 

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
const char* indeks_nowy_gwiazdka_tekst = indeks_nowy_gwiazdka.c_str();

{
    HGLOBAL indeks_nowy_gwiazdka_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_gwiazdka_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_gwiazdka_zmienna,indeks_nowy_gwiazdka_tekst,strlen(indeks_nowy_gwiazdka_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_gwiazdka_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - 9999
//------------------------------------------------------------------------------    
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  


pauza_1_1(max_czynnosci);



//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   


/*
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_1_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_1_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_5_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - SHIFT+F4
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x73, 0, 0, 0); // F4       
keybd_event(0x73, 0, KEYEVENTF_KEYUP, 0); // F4
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  


pauza = 1;
while( pauza <= max_czynnosci*4 )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}
*/


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


pauza_4_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//KLIKANIE W KOLUMNÊ MATERIA£
//------------------------------------------------------------------------------
SetCursorPos( TWORZENIE_MATERIALU_SORTOWANIE ); 
mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP,0,0,0,0);


pauza_1_1(max_czynnosci);


//KLIKANIE W SORTOWANIE MALEJ¥CE
//------------------------------------------------------------------------------
SetCursorPos( TWORZENIE_MATERIALU_SORTOWANIE_MALEJACE ); 
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


pauza_4_1(max_czynnosci);


//WCISKANIE - STRZA£KA W PRAWO
//------------------------------------------------------------------------------
keybd_event(0x27, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x27, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W PRAWO 
keybd_event(0x27, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x27, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W PRAWO 


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+Y
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x59, 0, 0, 0); // Y	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y 


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            indeks_ostatni = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


//TWORZENIE NOWEGO ŒRODKA INDEKSU
//------------------------------------------------------------------------------
string indeks_wariant_srodek = indeks_ostatni;
string indeks_wariant_srodek_2;


if (rodzaj_indeksu != "10") {

indeks_wariant_srodek.erase (0,8);
indeks_wariant_srodek_2 = indeks_wariant_srodek;
indeks_wariant_srodek_2.erase (4,6);


}


if (rodzaj_indeksu == "10") {

indeks_wariant_srodek.erase (0,14);
indeks_wariant_srodek_2 = indeks_wariant_srodek;


}


//ZMIANA STRING NA INT I USUWANIE ZNAKÓW
//------------------------------------------------------------------------------
//int indeks_wariant_srodek_dodanie;
//indeks_wariant_srodek_dodanie = atoi(indeks_wariant_srodek_2.c_str())+1;


string liczba_1000 = indeks_wariant_srodek_2;
liczba_1000.erase (1,3);

int liczba_1000_int;
liczba_1000_int = atoi(liczba_1000.c_str());


string liczba_100 = indeks_wariant_srodek_2;
liczba_100.erase (0,1);
string liczba_100_2 = liczba_100;
liczba_100_2.erase (1,2);

int liczba_100_2_int;
liczba_100_2_int = atoi(liczba_100_2.c_str());


string liczba_10 = indeks_wariant_srodek_2;
liczba_10.erase (0,2);
string liczba_10_2 = liczba_10;
liczba_10_2.erase (1,1);

int liczba_10_2_int;
liczba_10_2_int = atoi(liczba_10_2.c_str());


string liczba_1 = indeks_wariant_srodek_2;
liczba_1.erase (0,3);

int liczba_1_int;
liczba_1_int = atoi(liczba_1.c_str());


//DODAWANIE LICZBY DO INDEKSU
//------------------------------------------------------------------------------
liczba_1_int++; 

if (liczba_1_int == 10) {
liczba_1_int = 0;
liczba_10_2_int++;   
}
 
if (liczba_10_2_int == 10) {
liczba_10_2_int = 0;
liczba_100_2_int++;    
}

if (liczba_100_2_int == 10) {
liczba_100_2_int = 0;
liczba_1000_int++;    
}


int indeks_wariant_srodek_dodanie = 1000*liczba_1000_int + 100*liczba_100_2_int + 10*liczba_10_2_int + liczba_1_int;


if (indeks_wariant_srodek_dodanie > 9999) {

cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"B. Wpisz rêcznie: Indeks - NOWY (00-0000-0000-00000): ";
cin>>indeks_nowy;

//KLIKANIE W PUSTE POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PUSTE_POLE_SAP_2 );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
    
}

else {

//ZMIANA INT NA STRING
//------------------------------------------------------------------------------
ostringstream indeks_wariant_srodek_dodanie_int;
indeks_wariant_srodek_dodanie_int << indeks_wariant_srodek_dodanie;
string indeks_wariant_srodek_dodanie_string = indeks_wariant_srodek_dodanie_int.str();


if (indeks_wariant_srodek_dodanie_string.length() == 1) {

indeks_wariant_srodek_dodanie_string = "000" + indeks_wariant_srodek_dodanie_string;    
    
}

if (indeks_wariant_srodek_dodanie_string.length() == 2) {

indeks_wariant_srodek_dodanie_string = "00" + indeks_wariant_srodek_dodanie_string;    
    
}

if (indeks_wariant_srodek_dodanie_string.length() == 3) {

indeks_wariant_srodek_dodanie_string = "0" + indeks_wariant_srodek_dodanie_string;    
    
}


if (rodzaj_indeksu != "10") {

indeks_wariant_poczatek = indeks_ostatni;
indeks_wariant_poczatek.erase (8,11);

indeks_nowy = indeks_wariant_poczatek + indeks_wariant_srodek_dodanie_string + indeks_wariant_koniec;


}


if (rodzaj_indeksu == "10") {
  

indeks_wariant_poczatek = indeks_ostatni;
indeks_wariant_poczatek.erase (14,5);
          
          
indeks_nowy = indeks_wariant_poczatek + indeks_wariant_srodek_dodanie_string;


}





//WCISKANIE - ESCAPE
//------------------------------------------------------------------------------
keybd_event(0x1B, 0, 0, 0); // ESCAPE	 
keybd_event(0x1B, 0, KEYEVENTF_KEYUP, 0); // ESCAPE 


pauza_1_1(max_czynnosci);

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_2); 	
//------------------------------------------------------------------------------


//WCISKANIE - F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


}


pauza_1_1(max_czynnosci);


}


if (indeks_nowy_auto_szukanie_sap == "t" and rodzaj_indeksu == "40" or indeks_nowy_auto_szukanie_sap == "t" and rodzaj_indeksu == "50") {
          
//KLIKANIE W PUSTE POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PUSTE_POLE_SAP_2 );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{     
          
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM03 (TWORZENIE MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x33, 0, 0, 0); // 3	       
keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//WCISKANIE - F4 (OTWIERANIE OKNA)
//------------------------------------------------------------------------------
keybd_event(0x73, 0, 0, 0); // F4	       
keybd_event(0x73, 0, KEYEVENTF_KEYUP, 0); // F4


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//TWORZENIE INDEKSU Z GWIAZDK¥
//------------------------------------------------------------------------------
string indeks_wariant_poczatek = indeks_wzorzec;
string indeks_wariant_koniec = indeks_wzorzec;


indeks_wariant_poczatek.erase (8,11);

string indeks_wariant_srodek_3 = "*";

indeks_wariant_koniec.erase (0,12);


if (rodzaj_indeksu == "40") {

string indeks_nowy_50_gwiazdka = "40-" + szukanie_indeksow_40 + "-*-00000";


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
const char* indeks_nowy_50_gwiazdka_tekst = indeks_nowy_50_gwiazdka.c_str();

{
    HGLOBAL indeks_nowy_50_gwiazdka_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_50_gwiazdka_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_50_gwiazdka_zmienna,indeks_nowy_50_gwiazdka_tekst,strlen(indeks_nowy_50_gwiazdka_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_50_gwiazdka_zmienna);
        CloseClipboard();
    }
}

}


if (rodzaj_indeksu == "50") {

string indeks_nowy_50_gwiazdka = "50-" + szukanie_indeksow_50 + "-*-00000";


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
const char* indeks_nowy_50_gwiazdka_tekst = indeks_nowy_50_gwiazdka.c_str();

{
    HGLOBAL indeks_nowy_50_gwiazdka_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_50_gwiazdka_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_50_gwiazdka_zmienna,indeks_nowy_50_gwiazdka_tekst,strlen(indeks_nowy_50_gwiazdka_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_50_gwiazdka_zmienna);
        CloseClipboard();
    }
}

}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WPISYWANIE - 9999
//------------------------------------------------------------------------------    
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  
keybd_event(0x39, 0, 0, 0); // 9
keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0); // 9  


pauza_1_1(max_czynnosci);



//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   


/*
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_1_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_1_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_5_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - SHIFT+F4
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x73, 0, 0, 0); // F4       
keybd_event(0x73, 0, KEYEVENTF_KEYUP, 0); // F4
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
*/

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


pauza_2_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);

 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//KLIKANIE W KOLUMNÊ MATERIA£
//------------------------------------------------------------------------------
SetCursorPos( TWORZENIE_MATERIALU_SORTOWANIE ); 
mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP,0,0,0,0);


pauza_1_1(max_czynnosci);


//KLIKANIE W SORTOWANIE MALEJ¥CE
//------------------------------------------------------------------------------
SetCursorPos( TWORZENIE_MATERIALU_SORTOWANIE_MALEJACE ); 
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


pauza_4_1(max_czynnosci);


//WCISKANIE - STRZA£KA W PRAWO
//------------------------------------------------------------------------------
keybd_event(0x27, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x27, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W PRAWO 
keybd_event(0x27, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x27, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W PRAWO 


pauza_1_1(max_czynnosci);


if (rodzaj_indeksu == "50") {

//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£          
                   
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+Y
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x59, 0, 0, 0); // Y	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y 


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            indeks_ostatni = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


//TWORZENIE NOWEGO ŒRODKA INDEKSU
//------------------------------------------------------------------------------
string indeks_wariant_srodek = indeks_ostatni;

indeks_wariant_srodek.erase (0,8);
string indeks_wariant_srodek_2 = indeks_wariant_srodek;
indeks_wariant_srodek_2.erase (4,6);


//ZMIANA STRING NA INT I USUWANIE ZNAKÓW
//------------------------------------------------------------------------------
//int indeks_wariant_srodek_dodanie;
//indeks_wariant_srodek_dodanie = atoi(indeks_wariant_srodek_2.c_str())+1;


string liczba_1000 = indeks_wariant_srodek_2;
liczba_1000.erase (1,3);

int liczba_1000_int;
liczba_1000_int = atoi(liczba_1000.c_str());


string liczba_100 = indeks_wariant_srodek_2;
liczba_100.erase (0,1);
string liczba_100_2 = liczba_100;
liczba_100_2.erase (1,2);

int liczba_100_2_int;
liczba_100_2_int = atoi(liczba_100_2.c_str());


string liczba_10 = indeks_wariant_srodek_2;
liczba_10.erase (0,2);
string liczba_10_2 = liczba_10;
liczba_10_2.erase (1,1);

int liczba_10_2_int;
liczba_10_2_int = atoi(liczba_10_2.c_str());


string liczba_1 = indeks_wariant_srodek_2;
liczba_1.erase (0,3);

int liczba_1_int;
liczba_1_int = atoi(liczba_1.c_str());


//DODAWANIE LICZBY DO INDEKSU
//------------------------------------------------------------------------------
liczba_1_int++; 

if (liczba_1_int == 10) {
liczba_1_int = 0;
liczba_10_2_int++;   
}
 
if (liczba_10_2_int == 10) {
liczba_10_2_int = 0;
liczba_100_2_int++;    
}

if (liczba_100_2_int == 10) {
liczba_100_2_int = 0;
liczba_1000_int++;    
}


int indeks_wariant_srodek_dodanie = 1000*liczba_1000_int + 100*liczba_100_2_int + 10*liczba_10_2_int + liczba_1_int;


if (indeks_wariant_srodek_dodanie > 9999) {

cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"B. Wpisz rêcznie: Indeks - NOWY (00-0000-0000-00000): ";
cin>>indeks_nowy;
    
}

else {

//ZMIANA INT NA STRING
//------------------------------------------------------------------------------
ostringstream indeks_wariant_srodek_dodanie_int;
indeks_wariant_srodek_dodanie_int << indeks_wariant_srodek_dodanie;
string indeks_wariant_srodek_dodanie_string = indeks_wariant_srodek_dodanie_int.str();


if (indeks_wariant_srodek_dodanie_string.length() == 1) {

indeks_wariant_srodek_dodanie_string = "000" + indeks_wariant_srodek_dodanie_string;    
    
}

if (indeks_wariant_srodek_dodanie_string.length() == 2) {

indeks_wariant_srodek_dodanie_string = "00" + indeks_wariant_srodek_dodanie_string;    
    
}

if (indeks_wariant_srodek_dodanie_string.length() == 3) {

indeks_wariant_srodek_dodanie_string = "0" + indeks_wariant_srodek_dodanie_string;    
    
}


indeks_wariant_poczatek = indeks_ostatni;
indeks_wariant_poczatek.erase (8,11);


indeks_nowy = indeks_wariant_poczatek + indeks_wariant_srodek_dodanie_string + indeks_wariant_koniec;

}


//WCISKANIE - ESCAPE
//------------------------------------------------------------------------------
keybd_event(0x1B, 0, 0, 0); // ESCAPE	 
keybd_event(0x1B, 0, KEYEVENTF_KEYUP, 0); // ESCAPE 


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_X;
os_y = TWORZENIE_MATERIALU_SZUKANIE_INDEKSU_2_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_2); 	
//------------------------------------------------------------------------------


//WCISKANIE - F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


pauza_1_1(max_czynnosci);


}


else {
    
    
//KLIKANIE W PUSTE POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PUSTE_POLE_SAP_2 );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


pauza_1_1(max_czynnosci);


}


//ZMIANA ZNAKÓW Z - NA _ - KLASA NOWY
//------------------------------------------------------------------------------
string klasa_nowy_poczatek = indeks_nowy;
string klasa_nowy_srodek_1 = indeks_nowy;

string klasa_nowy_srodek_2 = indeks_nowy;

string klasa_nowy_koniec = indeks_nowy;

klasa_nowy_poczatek.erase (2,16);
klasa_nowy_srodek_1.erase (0,3);
string klasa_nowy_srodek_1_2 = klasa_nowy_srodek_1;
klasa_nowy_srodek_1_2.erase (4,11);

klasa_nowy_srodek_2.erase (0,8);
string klasa_nowy_srodek_2_2 = klasa_nowy_srodek_2;
klasa_nowy_srodek_2_2.erase (4,6);

klasa_nowy_koniec.erase (0,13);

klasa_nowy = klasa_nowy_poczatek + "_" + klasa_nowy_srodek_1_2 + "_" + klasa_nowy_srodek_2_2 + "_" + klasa_nowy_koniec;


//ZMIANA ZNAKÓW Z - NA _ - KLASA WZORZEC
//------------------------------------------------------------------------------
string klasa_wzorzec_poczatek = indeks_wzorzec;
string klasa_wzorzec_srodek_1 = indeks_wzorzec;

string klasa_wzorzec_srodek_2 = indeks_wzorzec;

string klasa_wzorzec_koniec = indeks_wzorzec;

klasa_wzorzec_poczatek.erase (2,16);
klasa_wzorzec_srodek_1.erase (0,3);
string klasa_wzorzec_srodek_1_2 = klasa_wzorzec_srodek_1;
klasa_wzorzec_srodek_1_2.erase (4,11);

klasa_wzorzec_srodek_2.erase (0,8);
string klasa_wzorzec_srodek_2_2 = klasa_wzorzec_srodek_2;
klasa_wzorzec_srodek_2_2.erase (4,6);

klasa_wzorzec_koniec.erase (0,13);

klasa_wzorzec = klasa_wzorzec_poczatek + "_" + klasa_wzorzec_srodek_1_2 + "_" + klasa_wzorzec_srodek_2_2 + "_" + klasa_wzorzec_koniec;


//POBIERANIE DANYCH Z PLIKU: PLIK.TXT
//------------------------------------------------------------------------------
//getline(przechwyt, indeks_nowy);
cout<<"==========================================================================="<<endl;
cout<<"ILOŒÆ INDEKSÓW DO KOÑCA: "<<licznik<<endl;
cout<<"==========================================================================="<<endl;
cout<<"Rodzaj indeksu: "<< rodzaj_indeksu<<endl;
cout<<"Indeks - Nowy: "<< indeks_nowy<<endl;

//------------------------------------------------------------------------------

cout<<"Indeks - Wzorzec: "<<indeks_wzorzec<<endl;

//------------------------------------------------------------------------------

//getline(przechwyt, klasa_nowy);
cout<<"Klasa - Nowy: "<<klasa_nowy<<endl;

//------------------------------------------------------------------------------

//getline(przechwyt, klasa_wzorzec);
cout<<"Klasa - Wzorzec: "<<klasa_wzorzec<<endl;

//------------------------------------------------------------------------------

getline(przechwyt, indeks_nazwa);
indeks_nazwa.erase (0,14);
cout<<"Indeks - Nazwa: "<<indeks_nazwa<<endl;


//------------------------------------------------------------------------------


// TWORZENIE PLIKU: LOG_*.TXT
//------------------------------------------------------------------------------
fstream plik;

string plik_start_tekst = "log_";
string plik_koniec_tekst = ".txt";
string plik_caly = folder + "/" + plik_start_tekst + indeks_nowy + "_" + indeks_nazwa + plik_koniec_tekst;
plik.open(plik_caly.c_str(), ios::out);
  

plik<<"<<<POCZ¥TEK>>"<< endl; 
plik<<" "<< endl; 
plik<<"Data rozpoczêcia: "<<currentDateTime()<<endl;
plik<<"==========================================================================="<< endl;  
plik<<"Rodzaj indeksu: "<<rodzaj_indeksu<<endl; 
plik<<"Indeks - Nowy: "<<indeks_nowy<<endl; 
plik<<"Indeks - Wzorzec: "<<indeks_wzorzec<< endl;
plik<<"Klasa - Nowy: "<<klasa_nowy << endl;
plik<<"Klasa - Wzorzec: "<<klasa_wzorzec<< endl;
plik<<"Indeks - Nazwa: "<<indeks_nazwa<< endl;


// TWORZENIE PLIKU: WSZYSTKIE_INDEKSY.TXT
//------------------------------------------------------------------------------
ofstream wszystkie_indeksy;

string wszystkie_indeksy_tekst = "wszystkie_indeksy.txt";

string wszystkie_indeksy_caly = folder + "/" + wszystkie_indeksy_tekst;
wszystkie_indeksy.open(wszystkie_indeksy_caly.c_str(), ios::app);
  
  
wszystkie_indeksy <<indeks_nowy<<"	"<<klasa_nowy<<"	"<<indeks_nazwa<<endl; 


//------------------------------------------------------------------------------

getline(przechwyt, indeks_sklad);
indeks_sklad.erase (0,14);
cout<<"Indeks - Sklad: "<<indeks_sklad<<endl;


plik<<"Indeks - Sklad: "<<indeks_sklad<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, marszruta);
marszruta.erase (0,11);
cout<<"Marszruta: "<<marszruta<<endl;


plik<<"Marszruta: "<<marszruta<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, linia_1);
getline(przechwyt, dlugosc);
dlugosc.erase (0,9);
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"D³ugoœæ: "<<dlugosc<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"D³ugoœæ: "<<dlugosc<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, szerokosc);
szerokosc.erase (0,11);
cout<<"Szerokoœæ: "<<szerokosc<<endl;


plik<<"Szerokoœæ: "<<szerokosc<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, wysokosc);
wysokosc.erase (0,10);
cout<<"Wysokoœæ: "<<wysokosc<<endl;


plik<<"Wysokoœæ: "<<wysokosc<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, waga);
waga.erase (0,6);
cout<<"Waga: "<<waga<<endl;


plik<<"Waga: "<<waga<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, linia_2);
getline(przechwyt, abs_1);
abs_1.erase (0,7);
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"ABS 1: "<<abs_1<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"ABS 1: "<<abs_1<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, abs_2);
abs_2.erase (0,7);
cout<<"ABS 2: "<<abs_2<<endl;


plik<<"ABS 2: "<<abs_2<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, abs_3);
abs_3.erase (0,7);
cout<<"ABS 3: "<<abs_3<<endl;


plik<<"ABS 3: "<<abs_3<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, abs_4);
abs_4.erase (0,7);
cout<<"ABS 4: "<<abs_4<<endl;


plik<<"ABS 4: "<<abs_4<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, wymiar_na_gotowo);
wymiar_na_gotowo.erase (0,18);
cout<<"WYMIAR NA GOTOWO: "<<wymiar_na_gotowo<<endl;


plik<<"WYMIAR NA GOTOWO: "<<wymiar_na_gotowo<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, linia_3);
getline(przechwyt, nazwa_rysunku);
nazwa_rysunku.erase (0,15);



if (rodzaj_indeksu == "40") {
 
string nazwa_rysunku_skrot = indeks_nowy;
nazwa_rysunku_skrot.erase (12,6);
nazwa_rysunku = nazwa_rysunku_skrot; 
    
}


cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"Nazwa rysunku: "<<nazwa_rysunku<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"Nazwa rysunku: "<<nazwa_rysunku<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, nazwa_rodziny);
nazwa_rodziny.erase (0,15);
cout<<"Nazwa rodziny: "<<nazwa_rodziny<<endl;


plik<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_frez_fdolno);
dl_frez_fdolno.erase (0,16);
cout<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<<endl;


plik<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, il_wiercen);
il_wiercen.erase (0,12);
cout<<"IL_WIERCEN: "<<il_wiercen<<endl;


plik<<"IL_WIERCEN: "<<il_wiercen<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_frez_dia);
dl_frez_dia.erase (0,13);
cout<<"DL_FREZ_DIA: "<<dl_frez_dia<<endl;


plik<<"DL_FREZ_DIA: "<<dl_frez_dia<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_frez_pila);
dl_frez_pila.erase (0,14);
cout<<"DL_FREZ_PILA: "<<dl_frez_pila<<endl;


plik<<"DL_FREZ_PILA: "<<dl_frez_pila<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_oprosto);
dl_oprosto.erase (0,12);
cout<<"DL_OPROSTO: "<<dl_oprosto<<endl;


plik<<"DL_OPROSTO: "<<dl_oprosto<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, il_oprosto);
il_oprosto.erase (0,12);
cout<<"IL_OPROSTO: "<<il_oprosto<<endl;


plik<<"IL_OPROSTO: "<<il_oprosto<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_okrzywo);
dl_okrzywo.erase (0,12);
cout<<"DL_OKRZYWO: "<<dl_okrzywo<<endl;


plik<<"DL_OKRZYWO: "<<dl_okrzywo<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, il_okrzywo);
il_okrzywo.erase (0,12);
cout<<"IL_OKRZYWO: "<<il_okrzywo<<endl;


plik<<"IL_OKRZYWO: "<<il_okrzywo<< endl;

//------------------------------------------------------------------------------


const char* indeks_nowy_tekst = indeks_nowy.c_str();
const char* indeks_wzorzec_tekst = indeks_wzorzec.c_str();
const char* klasa_nowy_tekst = klasa_nowy.c_str();
const char* klasa_wzorzec_tekst = klasa_wzorzec.c_str();
const char* indeks_nazwa_tekst = indeks_nazwa.c_str();
const char* marszruta_tekst = marszruta.c_str();
const char* indeks_sklad_tekst = indeks_sklad.c_str();

const char* dlugosc_tekst = dlugosc.c_str();
const char* szerokosc_tekst = szerokosc.c_str();
const char* wysokosc_tekst = wysokosc.c_str();
const char* waga_tekst = waga.c_str();

const char* abs_1_tekst = abs_1.c_str();
const char* abs_2_tekst = abs_2.c_str();
const char* abs_3_tekst = abs_3.c_str();
const char* abs_4_tekst = abs_4.c_str();
const char* wymiar_na_gotowo_tekst = wymiar_na_gotowo.c_str(); 

const char* nazwa_rysunku_tekst = nazwa_rysunku.c_str();
const char* nazwa_rodziny_tekst = nazwa_rodziny.c_str(); 
const char* dl_frez_fdolno_tekst = dl_frez_fdolno.c_str();
const char* il_wiercen_tekst = il_wiercen.c_str();
const char* dl_frez_dia_tekst = dl_frez_dia.c_str();
const char* dl_frez_pila_tekst = dl_frez_pila.c_str(); 
const char* dl_oprosto_tekst = dl_oprosto.c_str();
const char* il_oprosto_tekst = il_oprosto.c_str();
const char* dl_okrzywo_tekst = dl_okrzywo.c_str();
const char* il_okrzywo_tekst = il_okrzywo.c_str();


//TWORZENIE MATERIA£U
//------------------------------------------------------------------------------

cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"1. Tworzenie materia³u: ";


//TWORZENIE MATERIA£U - 10 (SUROWIEC)
//------------------------------------------------------------------------------
if (tworzenie_materialu == "t" and rodzaj_indeksu == "10")
{

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{     
          
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM01 (TWORZENIE MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - S
//------------------------------------------------------------------------------
keybd_event(0x53, 0, 0, 0); // S  
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S
	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(indeks_wzorzec_zmienna,indeks_wzorzec_tekst,strlen(indeks_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_wzorzec_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
   

pauza_1_1(max_czynnosci);  


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 
  
  
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


if (indeks_sklad != "BRAK") {
    
    
//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_sklad_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_sklad_tekst) + 1); //text size + \0 character
    memcpy(indeks_sklad_zmienna,indeks_sklad_tekst,strlen(indeks_sklad_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_sklad_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
	

}

else {

//WPISYWANIE - MP01
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x4D, 0, 0, 0); // M       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x50, 0, 0, 0); // P       
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL + TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x09, 0, 0, 0); // TAB	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci); 


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci); 

if (indeks_sklad != "BRAK") {
    
    
//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_sklad_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_sklad_tekst) + 1); //text size + \0 character
    memcpy(indeks_sklad_zmienna,indeks_sklad_tekst,strlen(indeks_sklad_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_sklad_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
	

}

else {

//WPISYWANIE - MP01
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x4D, 0, 0, 0); // M       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x50, 0, 0, 0); // P       
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


}

pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);	

//TWORZENIE MATERIA£U - DANE PODSTAWOWE_1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nazwa_zmienna,indeks_nazwa_tekst,strlen(indeks_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
	
	
pauza_1_1(max_czynnosci);


// TWORZENIE MATERIA£U - DANE DODATKOWE - POCZ¥TEK
//------------------------------------------------------------------------------
if (szerokosc != "BRAK" or dlugosc != "BRAK" or wysokosc != "BRAK" or waga != "BRAK") {

if (szerokosc == "BRAK") {
szerokosc = " ";
}

if (dlugosc == "BRAK") {
dlugosc = " ";
}

if (wysokosc == "BRAK") {
wysokosc = " ";
}

if (waga == "BRAK") {
waga = " ";
}

//WCISKANIE - CTRL+F6 (PRZEJŒCIE DO: DANE DODATKOWE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x75, 0, 0, 0); // F6	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 


pauza_1_1(max_czynnosci);


//WCISKANIE - F6 (PRZEJŒCIE DO: JEDNOSTKI MIARY)
//------------------------------------------------------------------------------
keybd_event(0x75, 0, 0, 0); // F6	    
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 
	
	
pauza_1_1(max_czynnosci);
	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	

pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dlugosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dlugosc_tekst) + 1); //text size + \0 character
    memcpy(dlugosc_zmienna,dlugosc_tekst,strlen(dlugosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dlugosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL szerokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(szerokosc_tekst) + 1); //text size + \0 character
    memcpy(szerokosc_zmienna,szerokosc_tekst,strlen(szerokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,szerokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);

//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wysokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wysokosc_tekst) + 1); //text size + \0 character
    memcpy(wysokosc_zmienna,wysokosc_tekst,strlen(wysokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wysokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            jednostka = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            objetosc = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


if (jednostka == objetosc) {
          
//WPISYWANIE - 0,001
//------------------------------------------------------------------------------    
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0xBC, 0, 0, 0); // ,
keybd_event(0xBC, 0, KEYEVENTF_KEYUP, 0); // ,  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x31, 0, 0, 0); // 1
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
   

pauza_1_1(max_czynnosci);
           
}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

	
//WCISKANIE - CTRL+F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


}
//------------------------------------------------------------------------------
// TWORZENIE MATERIA£U - DANE DODATKOWE - KONIEC


pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - POCZ¥TEK
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
	
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_4_RGB_1) {    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------	


pauza_1_1(max_czynnosci);	


//WCISKANIE - F8 (PRZEJŒCIE DO: MRP1)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8	 
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


//TWORZENIE MATERIA£U - MRP2
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_MRP2_OS_X;
os_y = TWORZENIE_MATERIALU_MRP2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3
    

cout<<"TAK"<<endl;

plik<<"---------------------------------------------------------------------------"<<endl;
plik<< "1. Tworzenie materia³u: TAK"<<endl;  
    
    
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - 10 (SUROWIEC)



//TWORZENIE MATERIA£U - 20 (ELEMENTY)
//------------------------------------------------------------------------------
if (tworzenie_materialu == "t" and rodzaj_indeksu == "20")
{

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{     
          
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM01 (TWORZENIE MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - ELEMENTY
//------------------------------------------------------------------------------
keybd_event(0x45, 0, 0, 0); // E  
keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0); // E
keybd_event(0x4C, 0, 0, 0); // L  
keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0); // L 
keybd_event(0x45, 0, 0, 0); // E  
keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0); // E 
keybd_event(0x4D, 0, 0, 0); // M  
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M 
keybd_event(0x45, 0, 0, 0); // E  
keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0); // E 
keybd_event(0x4E, 0, 0, 0); // N  
keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0); // N 
keybd_event(0x54, 0, 0, 0); // T  
keybd_event(0x54, 0, KEYEVENTF_KEYUP, 0); // T 
keybd_event(0x59, 0, 0, 0); // Y  
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y 
	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(indeks_wzorzec_zmienna,indeks_wzorzec_tekst,strlen(indeks_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_wzorzec_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
    
    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);  


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - MP01
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x4D, 0, 0, 0); // M       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x50, 0, 0, 0); // P       
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL + TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x09, 0, 0, 0); // TAB	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci); 


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci); 


//WPISYWANIE - MP01
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x4D, 0, 0, 0); // M       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x50, 0, 0, 0); // P       
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);	

//TWORZENIE MATERIA£U - DANE PODSTAWOWE_1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nazwa_zmienna,indeks_nazwa_tekst,strlen(indeks_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
	
	
pauza_1_1(max_czynnosci);


// TWORZENIE MATERIA£U - DANE DODATKOWE - POCZ¥TEK
//------------------------------------------------------------------------------
if (szerokosc != "BRAK" or dlugosc != "BRAK" or wysokosc != "BRAK" or waga != "BRAK") {


/*
if (szerokosc == "BRAK") {
szerokosc = " ";
}

if (dlugosc == "BRAK") {
dlugosc = " ";
}

if (wysokosc == "BRAK") {
wysokosc = " ";
}

if (waga == "BRAK") {
waga = " ";
}
*/


//WCISKANIE - CTRL+F6 (PRZEJŒCIE DO: DANE DODATKOWE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x75, 0, 0, 0); // F6	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 


pauza_1_1(max_czynnosci);


//WCISKANIE - F6 (PRZEJŒCIE DO: JEDNOSTKI MIARY)
//------------------------------------------------------------------------------
keybd_event(0x75, 0, 0, 0); // F6	    
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 
	
	
pauza_1_1(max_czynnosci);
	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	

pauza_1_1(max_czynnosci);


if (dlugosc != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dlugosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dlugosc_tekst) + 1); //text size + \0 character
    memcpy(dlugosc_zmienna,dlugosc_tekst,strlen(dlugosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dlugosc_zmienna);
        CloseClipboard();
    }
}




pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


if (szerokosc != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL szerokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(szerokosc_tekst) + 1); //text size + \0 character
    memcpy(szerokosc_zmienna,szerokosc_tekst,strlen(szerokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,szerokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);

//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);


}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci); 


if (wysokosc != "BRAK") {
 

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wysokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wysokosc_tekst) + 1); //text size + \0 character
    memcpy(wysokosc_zmienna,wysokosc_tekst,strlen(wysokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wysokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);


}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            jednostka = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            objetosc = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


if (jednostka == objetosc) {
          
//WPISYWANIE - 0,001
//------------------------------------------------------------------------------    
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0xBC, 0, 0, 0); // ,
keybd_event(0xBC, 0, KEYEVENTF_KEYUP, 0); // ,  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x31, 0, 0, 0); // 1
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
   

pauza_1_1(max_czynnosci);
           
}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


if (waga != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


if (waga != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);


}	

	
//WCISKANIE - CTRL+F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


}
//------------------------------------------------------------------------------
// TWORZENIE MATERIA£U - DANE DODATKOWE - KONIEC


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - POCZ¥TEK
//------------------------------------------------------------------------------ 
if (abs_1 != "BRAK" or abs_2 != "BRAK" or abs_3 != "BRAK" or abs_4 != "BRAK" or wymiar_na_gotowo != "BRAK") {

if (abs_1 == "BRAK") {
abs_1 = " ";
}

if (abs_2 == "BRAK") {
abs_2 = " ";
}

if (abs_3 == "BRAK") {
abs_3 = " ";
}

if (abs_4 == "BRAK") {
abs_4 = " ";
}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);	
	

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL abs_1_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_1_tekst) + 1); //text size + \0 character
    memcpy(abs_1_zmienna,abs_1_tekst,strlen(abs_1_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_1_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);
	

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_2_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_2_tekst) + 1); //text size + \0 character
    memcpy(abs_2_zmienna,abs_2_tekst,strlen(abs_2_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_2_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_3_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_3_tekst) + 1); //text size + \0 character
    memcpy(abs_3_zmienna,abs_3_tekst,strlen(abs_3_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_3_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_4_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_4_tekst) + 1); //text size + \0 character
    memcpy(abs_4_zmienna,abs_4_tekst,strlen(abs_4_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_4_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
//------------------------------------------------------------------------------	
//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - KONIEC


pauza_1_1(max_czynnosci);


if (wymiar_na_gotowo == "BRAK") {
wymiar_na_gotowo = " ";
}

else {


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wymiar_na_gotowo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wymiar_na_gotowo_tekst) + 1); //text size + \0 character
    memcpy(wymiar_na_gotowo_zmienna,wymiar_na_gotowo_tekst,strlen(wymiar_na_gotowo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wymiar_na_gotowo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
}
//------------------------------------------------------------------------------	
//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - KONIEC


pauza_1_1(max_czynnosci);


}


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - POCZ¥TEK
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
	
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_4_RGB_1) {    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------	



//WCISKANIE CTRL+ALT
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	
keybd_event(0x12, 0, 0, 0); // ALT


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W LEWO
//------------------------------------------------------------------------------
keybd_event(0x25, 0, 0, 0); // STRZA£KA W LEWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO 
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ 


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W LEWO
//------------------------------------------------------------------------------
keybd_event(0x25, 0, 0, 0); // STRZA£KA W LEWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO 
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ 


pauza_1_1(max_czynnosci);


keybd_event(0x12, 0, KEYEVENTF_KEYUP, 0); // ALT	
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL 


pauza_1_1(max_czynnosci);


//WPISYWANIE - LEWY SHIFT+F2 (USUWANIE)
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x71, 0, 0, 0); // F2       
keybd_event(0x71, 0, KEYEVENTF_KEYUP, 0); // F2
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_USUWANIE_MATERIALU_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_USUWANIE_MATERIALU_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
    
    
pauza_1_1(max_czynnosci);

//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - POCZ¥TEK
//------------------------------------------------------------------------------
if (nazwa_rysunku != "BRAK") {


{
    HGLOBAL nazwa_rysunku_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_rysunku_tekst) + 1); //text size + \0 character
    memcpy(nazwa_rysunku_zmienna,nazwa_rysunku_tekst,strlen(nazwa_rysunku_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_rysunku_zmienna);
        CloseClipboard();
    }
}

pauza_1_1(max_czynnosci);


    // Wklejam nowy indeks MATERIA£U
    keybd_event(0x11, 0, 0, 0); // CRTL
    keybd_event(0x56, 0, 0, 0); // V	 
    keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
    keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);

}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - KONIEC


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - POCZ¥TEK
//------------------------------------------------------------------------------
if (dl_frez_fdolno != "BRAK" or il_wiercen != "BRAK" or dl_frez_dia != "BRAK" or dl_frez_pila != "BRAK" or dl_oprosto != "BRAK"
    or il_oprosto != "BRAK" or dl_okrzywo != "BRAK" or il_okrzywo != "BRAK") {
        
        
if (dl_frez_fdolno == "BRAK") {
    dl_frez_fdolno = ""; 
}

if (il_wiercen == "BRAK") {
    il_wiercen = ""; 
}

if (dl_frez_dia == "BRAK") {
    dl_frez_dia = ""; 
}

if (dl_frez_pila == "BRAK") {
    dl_frez_pila = ""; 
}

if (dl_oprosto == "BRAK") {
    dl_oprosto = ""; 
}

if (il_oprosto == "BRAK") {
    il_oprosto = ""; 
}

if (dl_okrzywo == "BRAK") {
    dl_okrzywo = ""; 
}

if (il_okrzywo == "BRAK") {
    il_okrzywo = ""; 
}


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_fdolno_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_fdolno_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_fdolno_zmienna,dl_frez_fdolno_tekst,strlen(dl_frez_fdolno_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_fdolno_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_wiercen_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_wiercen_tekst) + 1); //text size + \0 character
    memcpy(il_wiercen_zmienna,il_wiercen_tekst,strlen(il_wiercen_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_wiercen_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_dia_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_dia_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_dia_zmienna,dl_frez_dia_tekst,strlen(dl_frez_dia_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_dia_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_pila_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_pila_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_pila_zmienna,dl_frez_pila_tekst,strlen(dl_frez_pila_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_pila_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_oprosto_tekst) + 1); //text size + \0 character
    memcpy(dl_oprosto_zmienna,dl_oprosto_tekst,strlen(dl_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_oprosto_tekst) + 1); //text size + \0 character
    memcpy(il_oprosto_zmienna,il_oprosto_tekst,strlen(il_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(dl_okrzywo_zmienna,dl_okrzywo_tekst,strlen(dl_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(il_okrzywo_zmienna,il_okrzywo_tekst,strlen(il_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - KONIEC	
	
pauza_1_1(max_czynnosci);	


//WCISKANIE - F8 (PRZEJŒCIE DO: MRP1)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8	 
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


//TWORZENIE MATERIA£U - MRP1
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_MRP1_OS_X;
os_y = TWORZENIE_MATERIALU_MRP1_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3
    

cout<<"TAK"<<endl;

plik<<"---------------------------------------------------------------------------"<<endl;
plik<< "1. Tworzenie materia³u: TAK"<<endl;  
    
    
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - 20 (ELEMENTY)


//TWORZENIE MATERIA£U - 30 (PÓ£FABRYKATY)
//------------------------------------------------------------------------------
else if (tworzenie_materialu == "t" and rodzaj_indeksu == "30")
{

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM01 (TWORZENIE MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - PÓ£
//------------------------------------------------------------------------------
keybd_event(0x50, 0, 0, 0); // P	 
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x11, 0, 0, 0); // CTRL	
keybd_event(0x12, 0, 0, 0); // ALT
keybd_event(0x4F, 0, 0, 0); // O	 
keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0); // O 	
keybd_event(0x4C, 0, 0, 0); // L	 
keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0); // L 
keybd_event(0x12, 0, KEYEVENTF_KEYUP, 0); // ALT	
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL 
    	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(indeks_wzorzec_zmienna,indeks_wzorzec_tekst,strlen(indeks_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_wzorzec_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   

	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   


//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------      
    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WPISYWANIE - MP01
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x4D, 0, 0, 0); // M       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x50, 0, 0, 0); // P       
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  


//WCISKANIE - CTRL + TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x09, 0, 0, 0); // TAB	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WPISYWANIE - MP01
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x4D, 0, 0, 0); // M       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x50, 0, 0, 0); // P       
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  	


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
	

//TWORZENIE MATERIA£U - DANE PODSTAWOWE_1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nazwa_zmienna,indeks_nazwa_tekst,strlen(indeks_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
	
	
pauza_1_1(max_czynnosci);


// TWORZENIE MATERIA£U - DANE DODATKOWE - POCZ¥TEK
//------------------------------------------------------------------------------
if (szerokosc != "BRAK" or dlugosc != "BRAK" or wysokosc != "BRAK" or waga != "BRAK") {

if (szerokosc == "BRAK") {
szerokosc = " ";
}

if (dlugosc == "BRAK") {
dlugosc = " ";
}

if (wysokosc == "BRAK") {
wysokosc = " ";
}

if (waga == "BRAK") {
waga = " ";
}

//WCISKANIE - CTRL+F6 (PRZEJŒCIE DO: DANE DODATKOWE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x75, 0, 0, 0); // F6	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 


pauza_1_1(max_czynnosci);


//WCISKANIE - F6 (PRZEJŒCIE DO: JEDNOSTKI MIARY)
//------------------------------------------------------------------------------
keybd_event(0x75, 0, 0, 0); // F6	    
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 
	
	
pauza_1_1(max_czynnosci);
	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	

pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dlugosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dlugosc_tekst) + 1); //text size + \0 character
    memcpy(dlugosc_zmienna,dlugosc_tekst,strlen(dlugosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dlugosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL szerokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(szerokosc_tekst) + 1); //text size + \0 character
    memcpy(szerokosc_zmienna,szerokosc_tekst,strlen(szerokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,szerokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wysokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wysokosc_tekst) + 1); //text size + \0 character
    memcpy(wysokosc_zmienna,wysokosc_tekst,strlen(wysokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wysokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            jednostka = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            objetosc = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


if (jednostka == objetosc) {
          
//WPISYWANIE - 0,001
//------------------------------------------------------------------------------    
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0xBC, 0, 0, 0); // ,
keybd_event(0xBC, 0, KEYEVENTF_KEYUP, 0); // ,  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x31, 0, 0, 0); // 1
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
   

pauza_1_1(max_czynnosci);
      
}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);

//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

	
//WCISKANIE - CTRL+F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


}
//------------------------------------------------------------------------------
// TWORZENIE MATERIA£U - DANE DODATKOWE - KONIEC


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - POCZ¥TEK
//------------------------------------------------------------------------------ 
if (abs_1 != "BRAK" or abs_2 != "BRAK" or abs_3 != "BRAK" or abs_4 != "BRAK" or wymiar_na_gotowo != "BRAK") {

if (abs_1 == "BRAK") {
abs_1 = " ";
}

if (abs_2 == "BRAK") {
abs_2 = " ";
}

if (abs_3 == "BRAK") {
abs_3 = " ";
}

if (abs_4 == "BRAK") {
abs_4 = " ";
}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);	
	

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL abs_1_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_1_tekst) + 1); //text size + \0 character
    memcpy(abs_1_zmienna,abs_1_tekst,strlen(abs_1_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_1_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);
	

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_2_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_2_tekst) + 1); //text size + \0 character
    memcpy(abs_2_zmienna,abs_2_tekst,strlen(abs_2_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_2_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_3_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_3_tekst) + 1); //text size + \0 character
    memcpy(abs_3_zmienna,abs_3_tekst,strlen(abs_3_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_3_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_4_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_4_tekst) + 1); //text size + \0 character
    memcpy(abs_4_zmienna,abs_4_tekst,strlen(abs_4_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_4_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
//------------------------------------------------------------------------------	
//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - KONIEC


pauza_1_1(max_czynnosci);


if (wymiar_na_gotowo == "BRAK") {
wymiar_na_gotowo = " ";
}

else {


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wymiar_na_gotowo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wymiar_na_gotowo_tekst) + 1); //text size + \0 character
    memcpy(wymiar_na_gotowo_zmienna,wymiar_na_gotowo_tekst,strlen(wymiar_na_gotowo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wymiar_na_gotowo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
}
//------------------------------------------------------------------------------	
//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - KONIEC


pauza_1_1(max_czynnosci);


}


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - POCZ¥TEK
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
	
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_4_RGB_1) {    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------	


//WCISKANIE CTRL+ALT
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	
keybd_event(0x12, 0, 0, 0); // ALT


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W LEWO
//------------------------------------------------------------------------------
keybd_event(0x25, 0, 0, 0); // STRZA£KA W LEWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO 
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ 


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W LEWO
//------------------------------------------------------------------------------
keybd_event(0x25, 0, 0, 0); // STRZA£KA W LEWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO 
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ 


pauza_1_1(max_czynnosci);


keybd_event(0x12, 0, KEYEVENTF_KEYUP, 0); // ALT	
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL 


pauza_1_1(max_czynnosci);


//WPISYWANIE - LEWY SHIFT+F2 (USUWANIE)
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x71, 0, 0, 0); // F2       
keybd_event(0x71, 0, KEYEVENTF_KEYUP, 0); // F2
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_USUWANIE_MATERIALU_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_USUWANIE_MATERIALU_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
    
    
pauza_1_1(max_czynnosci);

//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - POCZ¥TEK
//------------------------------------------------------------------------------
if (nazwa_rysunku != "BRAK") {


{
    HGLOBAL nazwa_rysunku_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_rysunku_tekst) + 1); //text size + \0 character
    memcpy(nazwa_rysunku_zmienna,nazwa_rysunku_tekst,strlen(nazwa_rysunku_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_rysunku_zmienna);
        CloseClipboard();
    }
}

pauza_1_1(max_czynnosci);

	// Wklejam nowy indeks MATERIA£U
    keybd_event(0x11, 0, 0, 0); // CRTL
	keybd_event(0x56, 0, 0, 0); // V	 
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);

}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - KONIEC


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - POCZ¥TEK
//------------------------------------------------------------------------------
if (dl_frez_fdolno != "BRAK" or il_wiercen != "BRAK" or dl_frez_dia != "BRAK" or dl_frez_pila != "BRAK" or dl_oprosto != "BRAK"
    or il_oprosto != "BRAK" or dl_okrzywo != "BRAK" or il_okrzywo != "BRAK") {
        
        
if (dl_frez_fdolno == "BRAK") {
    dl_frez_fdolno = ""; 
}

if (il_wiercen == "BRAK") {
    il_wiercen = ""; 
}

if (dl_frez_dia == "BRAK") {
    dl_frez_dia = ""; 
}

if (dl_frez_pila == "BRAK") {
    dl_frez_pila = ""; 
}

if (dl_oprosto == "BRAK") {
    dl_oprosto = ""; 
}

if (il_oprosto == "BRAK") {
    il_oprosto = ""; 
}

if (dl_okrzywo == "BRAK") {
    dl_okrzywo = ""; 
}

if (il_okrzywo == "BRAK") {
    il_okrzywo = ""; 
}


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_fdolno_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_fdolno_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_fdolno_zmienna,dl_frez_fdolno_tekst,strlen(dl_frez_fdolno_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_fdolno_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_wiercen_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_wiercen_tekst) + 1); //text size + \0 character
    memcpy(il_wiercen_zmienna,il_wiercen_tekst,strlen(il_wiercen_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_wiercen_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_dia_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_dia_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_dia_zmienna,dl_frez_dia_tekst,strlen(dl_frez_dia_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_dia_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_pila_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_pila_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_pila_zmienna,dl_frez_pila_tekst,strlen(dl_frez_pila_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_pila_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_oprosto_tekst) + 1); //text size + \0 character
    memcpy(dl_oprosto_zmienna,dl_oprosto_tekst,strlen(dl_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_oprosto_tekst) + 1); //text size + \0 character
    memcpy(il_oprosto_zmienna,il_oprosto_tekst,strlen(il_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(dl_okrzywo_zmienna,dl_okrzywo_tekst,strlen(dl_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(il_okrzywo_zmienna,il_okrzywo_tekst,strlen(il_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - KONIEC	
	
pauza_1_1(max_czynnosci);	


//WCISKANIE - F8 (PRZEJŒCIE DO: MRP1)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8	 
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


//TWORZENIE MATERIA£U - MRP1
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_MRP1_OS_X;
os_y = TWORZENIE_MATERIALU_MRP1_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------	


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
	

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


cout<<"TAK"<<endl;

plik<<"---------------------------------------------------------------------------"<<endl;
plik<< "1. Tworzenie materia³u: TAK"<<endl;  
 
      
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - 30 (PÓ£FABRYKATY)


//==============================================================================


//TWORZENIE MATERIA£U - 40 (PACZKI)
//------------------------------------------------------------------------------
else if (tworzenie_materialu == "t" and rodzaj_indeksu == "40")
{

//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - KR
//------------------------------------------------------------------------------


cout<<"KR - "; 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{     
          
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM01 (TWORZENIE MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - ELEMENTY
//------------------------------------------------------------------------------
keybd_event(0x50, 0, 0, 0); // P  
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x41, 0, 0, 0); // A 
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A 
keybd_event(0x43, 0, 0, 0); // C  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x5A, 0, 0, 0); // Z  
keybd_event(0x5A, 0, KEYEVENTF_KEYUP, 0); // Z 
keybd_event(0x4B, 0, 0, 0); // K  
keybd_event(0x4B, 0, KEYEVENTF_KEYUP, 0); // K 
keybd_event(0x49, 0, 0, 0); // I  
keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0); // I 
	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(indeks_wzorzec_zmienna,indeks_wzorzec_tekst,strlen(indeks_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_wzorzec_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 

//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 
  
  
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 
  
    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9 


pauza_1_1(max_czynnosci);        
    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WPISYWANIE - WG11
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x57, 0, 0, 0); // W       
keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0); // W
keybd_event(0x47, 0, 0, 0); // G       
keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0); // G 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  


//WCISKANIE - CTRL + TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x09, 0, 0, 0); // TAB	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci); 


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WPISYWANIE - WG11
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x57, 0, 0, 0); // W       
keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0); // W
keybd_event(0x47, 0, 0, 0); // G       
keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0); // G 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  	


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
	

//TWORZENIE MATERIA£U - DANE PODSTAWOWE_1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nazwa_zmienna,indeks_nazwa_tekst,strlen(indeks_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+F6 (PRZEJŒCIE DO: DANE DODATKOWE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x75, 0, 0, 0); // F6	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);


do {
    

//KLIKANIE
//------------------------------------------------------------------------------
SetCursorPos( TWORZENIE_MATERIALU_DANE_DODATKOWE_USUWANIE_LINII );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            jezyk = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


}


while (jezyk != "PL"); 


// TWORZENIE MATERIA£U - DANE DODATKOWE - POCZ¥TEK
//------------------------------------------------------------------------------
if (szerokosc != "BRAK" or dlugosc != "BRAK" or wysokosc != "BRAK" or waga != "BRAK") {

if (szerokosc == "BRAK") {
szerokosc = " ";
}

if (dlugosc == "BRAK") {
dlugosc = " ";
}

if (wysokosc == "BRAK") {
wysokosc = " ";
}

if (waga == "BRAK") {
waga = " ";
}


pauza_1_1(max_czynnosci);


//WCISKANIE - F6 (PRZEJŒCIE DO: JEDNOSTKI MIARY)
//------------------------------------------------------------------------------
keybd_event(0x75, 0, 0, 0); // F6	    
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 
	
	
pauza_1_1(max_czynnosci);
	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	

pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dlugosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dlugosc_tekst) + 1); //text size + \0 character
    memcpy(dlugosc_zmienna,dlugosc_tekst,strlen(dlugosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dlugosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL szerokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(szerokosc_tekst) + 1); //text size + \0 character
    memcpy(szerokosc_zmienna,szerokosc_tekst,strlen(szerokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,szerokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wysokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wysokosc_tekst) + 1); //text size + \0 character
    memcpy(wysokosc_zmienna,wysokosc_tekst,strlen(wysokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wysokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            jednostka = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            objetosc = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


if (jednostka == objetosc) {
          
//WPISYWANIE - 0,001
//------------------------------------------------------------------------------    
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0xBC, 0, 0, 0); // ,
keybd_event(0xBC, 0, KEYEVENTF_KEYUP, 0); // ,  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x31, 0, 0, 0); // 1
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
   

pauza_1_1(max_czynnosci);
      
}
	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);

//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


}

	
//WCISKANIE - CTRL+F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
// TWORZENIE MATERIA£U - DANE DODATKOWE - KONIEC


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - POCZ¥TEK
//------------------------------------------------------------------------------ 
if (abs_1 != "BRAK" or abs_2 != "BRAK" or abs_3 != "BRAK" or abs_4 != "BRAK" or wymiar_na_gotowo != "BRAK") {

if (abs_1 == "BRAK") {
abs_1 = " ";
}

if (abs_2 == "BRAK") {
abs_2 = " ";
}

if (abs_3 == "BRAK") {
abs_3 = " ";
}

if (abs_4 == "BRAK") {
abs_4 = " ";
}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);	
	

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL abs_1_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_1_tekst) + 1); //text size + \0 character
    memcpy(abs_1_zmienna,abs_1_tekst,strlen(abs_1_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_1_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);
	

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_2_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_2_tekst) + 1); //text size + \0 character
    memcpy(abs_2_zmienna,abs_2_tekst,strlen(abs_2_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_2_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_3_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_3_tekst) + 1); //text size + \0 character
    memcpy(abs_3_zmienna,abs_3_tekst,strlen(abs_3_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_3_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_4_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_4_tekst) + 1); //text size + \0 character
    memcpy(abs_4_zmienna,abs_4_tekst,strlen(abs_4_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_4_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
//------------------------------------------------------------------------------	
//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - KONIEC


pauza_1_1(max_czynnosci);


if (wymiar_na_gotowo == "BRAK") {
wymiar_na_gotowo = " ";
}

else {


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wymiar_na_gotowo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wymiar_na_gotowo_tekst) + 1); //text size + \0 character
    memcpy(wymiar_na_gotowo_zmienna,wymiar_na_gotowo_tekst,strlen(wymiar_na_gotowo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wymiar_na_gotowo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
}
//------------------------------------------------------------------------------	
//TWORZENIE MATERIA£U - DANE PODTSAWOWE 2 - KONIEC


pauza_1_1(max_czynnosci);


}


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - POCZ¥TEK
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
	
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_4_RGB_1) {    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------	


//WCISKANIE CTRL+ALT
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	
keybd_event(0x12, 0, 0, 0); // ALT


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W LEWO
//------------------------------------------------------------------------------
keybd_event(0x25, 0, 0, 0); // STRZA£KA W LEWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO 
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ 


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W LEWO
//------------------------------------------------------------------------------
keybd_event(0x25, 0, 0, 0); // STRZA£KA W LEWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO 
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO
keybd_event(0x25, 0, 0, 0); // STRZA£KA W PRAWO           
keybd_event(0x25, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W LEWO


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ 


pauza_1_1(max_czynnosci);


keybd_event(0x12, 0, KEYEVENTF_KEYUP, 0); // ALT	
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL 


pauza_1_1(max_czynnosci);


//WPISYWANIE - LEWY SHIFT+F2 (USUWANIE)
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x71, 0, 0, 0); // F2       
keybd_event(0x71, 0, KEYEVENTF_KEYUP, 0); // F2
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT
 

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_USUWANIE_MATERIALU_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_USUWANIE_MATERIALU_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - POCZ¥TEK
//------------------------------------------------------------------------------
if (nazwa_rysunku != "BRAK") {


{
    HGLOBAL nazwa_rysunku_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_rysunku_tekst) + 1); //text size + \0 character
    memcpy(nazwa_rysunku_zmienna,nazwa_rysunku_tekst,strlen(nazwa_rysunku_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_rysunku_zmienna);
        CloseClipboard();
    }
}

pauza_1_1(max_czynnosci);

	// Wklejam nowy indeks MATERIA£U
    keybd_event(0x11, 0, 0, 0); // CRTL
	keybd_event(0x56, 0, 0, 0); // V	 
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);

}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - KONIEC


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - POCZ¥TEK
//------------------------------------------------------------------------------
if (dl_frez_fdolno != "BRAK" or il_wiercen != "BRAK" or dl_frez_dia != "BRAK" or dl_frez_pila != "BRAK" or dl_oprosto != "BRAK"
    or il_oprosto != "BRAK" or dl_okrzywo != "BRAK" or il_okrzywo != "BRAK") {


if (dl_frez_fdolno == "BRAK") {
    dl_frez_fdolno = ""; 
}

if (il_wiercen == "BRAK") {
    il_wiercen = ""; 
}

if (dl_frez_dia == "BRAK") {
    dl_frez_dia = ""; 
}

if (dl_frez_pila == "BRAK") {
    dl_frez_pila = ""; 
}

if (dl_oprosto == "BRAK") {
    dl_oprosto = ""; 
}

if (il_oprosto == "BRAK") {
    il_oprosto = ""; 
}

if (dl_okrzywo == "BRAK") {
    dl_okrzywo = ""; 
}

if (il_okrzywo == "BRAK") {
    il_okrzywo = ""; 
}


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_fdolno_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_fdolno_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_fdolno_zmienna,dl_frez_fdolno_tekst,strlen(dl_frez_fdolno_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_fdolno_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_wiercen_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_wiercen_tekst) + 1); //text size + \0 character
    memcpy(il_wiercen_zmienna,il_wiercen_tekst,strlen(il_wiercen_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_wiercen_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_dia_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_dia_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_dia_zmienna,dl_frez_dia_tekst,strlen(dl_frez_dia_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_dia_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_pila_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_pila_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_pila_zmienna,dl_frez_pila_tekst,strlen(dl_frez_pila_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_pila_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_oprosto_tekst) + 1); //text size + \0 character
    memcpy(dl_oprosto_zmienna,dl_oprosto_tekst,strlen(dl_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_oprosto_tekst) + 1); //text size + \0 character
    memcpy(il_oprosto_zmienna,il_oprosto_tekst,strlen(il_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(dl_okrzywo_zmienna,dl_okrzywo_tekst,strlen(dl_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(il_okrzywo_zmienna,il_okrzywo_tekst,strlen(il_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - KONIEC	
	
pauza_1_1(max_czynnosci);	


//WCISKANIE - F8 (PRZEJŒCIE DO: MRP1)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8	 
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 1
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_1_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_1_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - 2
//------------------------------------------------------------------------------
keybd_event(0x32, 0, 0, 0); // 2	 
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    
    
pauza_1_1(max_czynnosci);    

//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 2
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci); 


//WPISYWANIE - 0002
//------------------------------------------------------------------------------
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x32, 0, 0, 0); // 2	 
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 


pauza_1_1(max_czynnosci); 

//------------------------------------------------------------------------------


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------


cout<<"TAK, ";
	

//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - KR


//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - EX
//------------------------------------------------------------------------------


cout<<"EX - ";


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - ELEMENTY
//------------------------------------------------------------------------------
keybd_event(0x50, 0, 0, 0); // P  
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x41, 0, 0, 0); // A 
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A 
keybd_event(0x43, 0, 0, 0); // C  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x5A, 0, 0, 0); // Z  
keybd_event(0x5A, 0, KEYEVENTF_KEYUP, 0); // Z 
keybd_event(0x4B, 0, 0, 0); // K  
keybd_event(0x4B, 0, KEYEVENTF_KEYUP, 0); // K 
keybd_event(0x49, 0, 0, 0); // I  
keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0); // I 
	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 

	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 

//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
   

//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 
  
  
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 
  
    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9 


pauza_1_1(max_czynnosci); 
            

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WPISYWANIE - WG11
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x57, 0, 0, 0); // W       
keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0); // W
keybd_event(0x47, 0, 0, 0); // G       
keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0); // G 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  


//SZUKANIE DS00
//------------------------------------------------------------------------------
DS00 = "";

do {
          
if (DS00 != "DS00") { 
          
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);

          
//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            DS00 = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);

 
}


}

while (DS00 != "DS00"); 



pauza_1_1(max_czynnosci); 


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci); 


//WPISYWANIE - EX
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x45, 0, 0, 0); // E       
keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0); // E
keybd_event(0x58, 0, 0, 0); // X       
keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0); // X 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


pauza_1_1(max_czynnosci);  


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
	

//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
    
    
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);

//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 2
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci); 


//WPISYWANIE - 0002
//------------------------------------------------------------------------------
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x32, 0, 0, 0); // 2	 
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    
    
pauza_2_1(max_czynnosci);

//------------------------------------------------------------------------------

    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
  
   
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------	
	
	
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);


cout<<"TAK, ";


//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - EX


//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - UE
//------------------------------------------------------------------------------


cout<<"UE - ";


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - ELEMENTY
//------------------------------------------------------------------------------
keybd_event(0x50, 0, 0, 0); // P  
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x41, 0, 0, 0); // A 
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A 
keybd_event(0x43, 0, 0, 0); // C  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x5A, 0, 0, 0); // Z  
keybd_event(0x5A, 0, KEYEVENTF_KEYUP, 0); // Z 
keybd_event(0x4B, 0, 0, 0); // K  
keybd_event(0x4B, 0, KEYEVENTF_KEYUP, 0); // K 
keybd_event(0x49, 0, 0, 0); // I  
keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0); // I 
	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 

	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
   
    
//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 
  
  
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 
  
    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9 


pauza_1_1(max_czynnosci); 
           

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WPISYWANIE - WG11
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x57, 0, 0, 0); // W       
keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0); // W
keybd_event(0x47, 0, 0, 0); // G       
keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0); // G 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  


//SZUKANIE 
//------------------------------------------------------------------------------
DS00 = "";

do {
          
if (DS00 != "DS00") { 
          
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);

          
//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            DS00 = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);

 
}


}

while (DS00 != "DS00"); 



pauza_1_1(max_czynnosci); 


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci); 


//WPISYWANIE - UE
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x55, 0, 0, 0); // U       
keybd_event(0x55, 0, KEYEVENTF_KEYUP, 0); // U
keybd_event(0x45, 0, 0, 0); // E       
keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0); // E
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci); 


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);

//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 2
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci); 


//WPISYWANIE - 0002
//------------------------------------------------------------------------------
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x32, 0, 0, 0); // 2	 
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 


pauza_1_1(max_czynnosci); 


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    
    
pauza_2_1(max_czynnosci);  

//------------------------------------------------------------------------------

    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  

   
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - UE


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3
    

cout<<"TAK"<<endl;

plik<<"---------------------------------------------------------------------------"<<endl;
plik<< "1. Tworzenie materia³u: TAK"<<endl;    
    
    
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - 40 (PACZKI)


//=========================================================================================


//TWORZENIE MATERIA£U - 50 (PRODUKT GOTOWY)
//------------------------------------------------------------------------------
else if (tworzenie_materialu == "t" and rodzaj_indeksu == "50")
{

//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - KR
//------------------------------------------------------------------------------


cout<<"KR - ";


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{     
          
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM01 (TWORZENIE MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - ELEMENTY
//------------------------------------------------------------------------------
keybd_event(0x50, 0, 0, 0); // P  
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x52, 0, 0, 0); // R 
keybd_event(0x52, 0, KEYEVENTF_KEYUP, 0); // R 
keybd_event(0x4F, 0, 0, 0); // O  
keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0); // O 
keybd_event(0x44, 0, 0, 0); // D  
keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0); // D 

	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
	keybd_event(0x09, 0, 0, 0); // TAB	 
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(indeks_wzorzec_zmienna,indeks_wzorzec_tekst,strlen(indeks_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_wzorzec_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 

//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   


pauza_1_1(max_czynnosci); 
  
    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9 


pauza_1_1(max_czynnosci);        
    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);  


//WCISKANIE - CTRL + TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x09, 0, 0, 0); // TAB	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci); 


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);  	


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
	

//TWORZENIE MATERIA£U - DANE PODSTAWOWE_1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nazwa_zmienna,indeks_nazwa_tekst,strlen(indeks_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+F6 (PRZEJŒCIE DO: DANE DODATKOWE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x75, 0, 0, 0); // F6	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


// TWORZENIE MATERIA£U - DANE DODATKOWE - POCZ¥TEK
//------------------------------------------------------------------------------
if (szerokosc != "BRAK" or dlugosc != "BRAK" or wysokosc != "BRAK" or waga != "BRAK") {

if (szerokosc == "BRAK") {
szerokosc = " ";
}

if (dlugosc == "BRAK") {
dlugosc = " ";
}

if (wysokosc == "BRAK") {
wysokosc = " ";
}

if (waga == "BRAK") {
waga = " ";
}


//WCISKANIE - F6 (PRZEJŒCIE DO: JEDNOSTKI MIARY)
//------------------------------------------------------------------------------
keybd_event(0x75, 0, 0, 0); // F6	    
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 
	
	
pauza_1_1(max_czynnosci);
	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	

pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dlugosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dlugosc_tekst) + 1); //text size + \0 character
    memcpy(dlugosc_zmienna,dlugosc_tekst,strlen(dlugosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dlugosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL szerokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(szerokosc_tekst) + 1); //text size + \0 character
    memcpy(szerokosc_zmienna,szerokosc_tekst,strlen(szerokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,szerokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wysokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wysokosc_tekst) + 1); //text size + \0 character
    memcpy(wysokosc_zmienna,wysokosc_tekst,strlen(wysokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wysokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//WPISYWANIE - 0,001
//------------------------------------------------------------------------------
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0xBC, 0, 0, 0); // ,	 
keybd_event(0xBC, 0, KEYEVENTF_KEYUP, 0); // ,
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	 
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


}


//WCISKANIE - CTRL+F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// TWORZENIE MATERIA£U - DANE DODATKOWE - KONIEC


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_HIERARCHIA_PRODUKTU_OS_X;
os_y = TWORZENIE_MATERIALU_HIERARCHIA_PRODUKTU_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_6_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_SZARY_6_RGB_1); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WPISYWANIE - 24
//------------------------------------------------------------------------------
keybd_event(0x32, 0, 0, 0); // 2 
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 
keybd_event(0x34, 0, 0, 0); // 4 
keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0); // 4 


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_X;
os_y = TWORZENIE_MATERIALU_DANE_DODATKOWE_PROD_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - POCZ¥TEK
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_X;
os_y = TWORZENIE_MATERIALU_KLASYFIKACJA_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
	
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_4_RGB_1) {    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------	


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - POCZ¥TEK
//------------------------------------------------------------------------------
if (nazwa_rysunku != "BRAK") {
          

{
    HGLOBAL nazwa_rysunku_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_rysunku_tekst) + 1); //text size + \0 character
    memcpy(nazwa_rysunku_zmienna,nazwa_rysunku_tekst,strlen(nazwa_rysunku_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_rysunku_zmienna);
        CloseClipboard();
    }
}

pauza_1_1(max_czynnosci);

	// Wklejam nowy indeks MATERIA£U
    keybd_event(0x11, 0, 0, 0); // CRTL
	keybd_event(0x56, 0, 0, 0); // V	 
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);

}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RODZINY - KONIEC


//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RODZINY - POCZ¥TEK
//------------------------------------------------------------------------------
if (nazwa_rodziny != "BRAK") {


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


{
    HGLOBAL nazwa_rodziny_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_rodziny_tekst) + 1); //text size + \0 character
    memcpy(nazwa_rodziny_zmienna,nazwa_rodziny_tekst,strlen(nazwa_rodziny_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_rodziny_zmienna);
        CloseClipboard();
    }
}

pauza_1_1(max_czynnosci);

	// Wklejam nowy indeks MATERIA£U
    keybd_event(0x11, 0, 0, 0); // CRTL
	keybd_event(0x56, 0, 0, 0); // V	 
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);

}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - KONIEC


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - POCZ¥TEK
//------------------------------------------------------------------------------
if (dl_frez_fdolno != "BRAK" or il_wiercen != "BRAK" or dl_frez_dia != "BRAK" or dl_frez_pila != "BRAK" or dl_oprosto != "BRAK"
    or il_oprosto != "BRAK" or dl_okrzywo != "BRAK" or il_okrzywo != "BRAK") {


if (dl_frez_fdolno == "BRAK") {
    dl_frez_fdolno = ""; 
}

if (il_wiercen == "BRAK") {
    il_wiercen = ""; 
}

if (dl_frez_dia == "BRAK") {
    dl_frez_dia = ""; 
}

if (dl_frez_pila == "BRAK") {
    dl_frez_pila = ""; 
}

if (dl_oprosto == "BRAK") {
    dl_oprosto = ""; 
}

if (il_oprosto == "BRAK") {
    il_oprosto = ""; 
}

if (dl_okrzywo == "BRAK") {
    dl_okrzywo = ""; 
}

if (il_okrzywo == "BRAK") {
    il_okrzywo = ""; 
}


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_fdolno_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_fdolno_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_fdolno_zmienna,dl_frez_fdolno_tekst,strlen(dl_frez_fdolno_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_fdolno_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_wiercen_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_wiercen_tekst) + 1); //text size + \0 character
    memcpy(il_wiercen_zmienna,il_wiercen_tekst,strlen(il_wiercen_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_wiercen_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_dia_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_dia_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_dia_zmienna,dl_frez_dia_tekst,strlen(dl_frez_dia_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_dia_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_pila_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_pila_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_pila_zmienna,dl_frez_pila_tekst,strlen(dl_frez_pila_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_pila_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_oprosto_tekst) + 1); //text size + \0 character
    memcpy(dl_oprosto_zmienna,dl_oprosto_tekst,strlen(dl_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_oprosto_tekst) + 1); //text size + \0 character
    memcpy(il_oprosto_zmienna,il_oprosto_tekst,strlen(il_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(dl_okrzywo_zmienna,dl_okrzywo_tekst,strlen(dl_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);	


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(il_okrzywo_zmienna,il_okrzywo_tekst,strlen(il_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - KONIEC	
	
pauza_1_1(max_czynnosci);	


//WCISKANIE - F8 (PRZEJŒCIE DO: DZIA£ SPRZEDA¯Y 1)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8	 
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 1
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_1_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_1_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - 2
//------------------------------------------------------------------------------
keybd_event(0x32, 0, 0, 0); // 2	 
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    
    
pauza_1_1(max_czynnosci);    

//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 2
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);    


//WYPISYWANIE - WG
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x57, 0, 0, 0); // W	 
keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0); // W
keybd_event(0x47, 0, 0, 0); // G	 
keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0); // G 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


pauza_1_1(max_czynnosci);    


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci); 


//WPISYWANIE - 0002
//------------------------------------------------------------------------------
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x34, 0, 0, 0); // 4	 
keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0); // 4 


pauza_1_1(max_czynnosci); 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------


cout<<"TAK, ";
	

//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - KR


//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - EX
//------------------------------------------------------------------------------


cout<<"EX - ";


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - ELEMENTY
//------------------------------------------------------------------------------
keybd_event(0x50, 0, 0, 0); // P  
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x52, 0, 0, 0); // R 
keybd_event(0x52, 0, KEYEVENTF_KEYUP, 0); // R 
keybd_event(0x4F, 0, 0, 0); // O  
keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0); // O 
keybd_event(0x44, 0, 0, 0); // D  
keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0); // D 

	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 

	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 

//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   


pauza_1_1(max_czynnosci); 
  
    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9 


pauza_1_1(max_czynnosci);        
    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);  


//SZUKANIE DS00
//------------------------------------------------------------------------------
DS00 = "";

do {
          
if (DS00 != "DS00") { 
          
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);

          
//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            DS00 = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);

 
}


}

while (DS00 != "DS00"); 



pauza_1_1(max_czynnosci); 


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci); 


//WPISYWANIE - EX
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x45, 0, 0, 0); // E       
keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0); // E
keybd_event(0x58, 0, 0, 0); // X       
keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0); // X 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


pauza_1_1(max_czynnosci);  


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
	

//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
    
    
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);

//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 2
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      


pauza_1_1(max_czynnosci);


//WYPISYWANIE - WG
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x57, 0, 0, 0); // W	 
keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0); // W
keybd_event(0x47, 0, 0, 0); // G	 
keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0); // G 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci); 


//WPISYWANIE - 0002
//------------------------------------------------------------------------------
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x34, 0, 0, 0); // 4	 
keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0); // 4 


pauza_1_1(max_czynnosci); 

//------------------------------------------------------------------------------


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    
    
pauza_2_1(max_czynnosci);   

    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
  
   
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------	
	
	
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);
//------------------------------------------------------------------------------


cout<<"TAK, ";


//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - EX


//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - UE
//------------------------------------------------------------------------------


cout<<"UE - ";


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);

    
//WPISYWANIE - B
//------------------------------------------------------------------------------
keybd_event(0x42, 0, 0, 0); // B	 
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WPISYWANIE - ELEMENTY
//------------------------------------------------------------------------------
keybd_event(0x50, 0, 0, 0); // P  
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x52, 0, 0, 0); // R 
keybd_event(0x52, 0, KEYEVENTF_KEYUP, 0); // R 
keybd_event(0x4F, 0, 0, 0); // O  
keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0); // O 
keybd_event(0x44, 0, 0, 0); // D  
keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0); // D 

	

pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 

	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 

//TWORZENIE MATERIA£U - WYBÓR WGL¥DÓW
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = TWORZENIE_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£   


pauza_1_1(max_czynnosci); 
  
    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9 


pauza_1_1(max_czynnosci);        
    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//TWORZENIE MATERIA£U - POZIOMY ORGANIZACYJNE
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = TWORZENIE_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);  


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);  


//SZUKANIE DS00
//------------------------------------------------------------------------------
DS00 = "";

do {
          
if (DS00 != "DS00") { 
          
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);

          
//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            DS00 = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);

 
}


}

while (DS00 != "DS00"); 



pauza_1_1(max_czynnosci); 


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci); 


//WPISYWANIE - UE
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x55, 0, 0, 0); // U       
keybd_event(0x55, 0, KEYEVENTF_KEYUP, 0); // U
keybd_event(0x45, 0, 0, 0); // E       
keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0); // E
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


pauza_1_1(max_czynnosci);  


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
	

//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 1	
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_1_2_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
    
    
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);
	
//------------------------------------------------------------------------------


//TWORZENIE MATERIA£U - DZIA£ SPRZEDA¯Y 2
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_X;
os_y = TWORZENIE_MATERIALU_DZIAL_SPRZEDAZY_2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      


pauza_1_1(max_czynnosci);


//WYPISYWANIE - WG
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x57, 0, 0, 0); // W	 
keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0); // W
keybd_event(0x47, 0, 0, 0); // G	 
keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0); // G 
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  


pauza_1_1(max_czynnosci); 


//WPISYWANIE - 0002
//------------------------------------------------------------------------------
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x34, 0, 0, 0); // 4	 
keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0); // 4 


pauza_1_1(max_czynnosci); 


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    
    
pauza_2_1(max_czynnosci);  

//------------------------------------------------------------------------------  

    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
  
   
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_MATERIALU_ZAPISANIE_OS_X;
os_y = TWORZENIE_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------	
	
	
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - KANA£ DYSTRYBUCJI - UE


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3
    

cout<<"TAK"<<endl;

plik<<"---------------------------------------------------------------------------"<<endl;
plik<< "1. Tworzenie materia³u: TAK"<<endl;    
    
    
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U - 50 (PRODUKT GOTOWY)


else
{
    
cout<<"NIE"<<endl;

plik<<"---------------------------------------------------------------------------"<<endl;
plik<< "1. Tworzenie materia³u: NIE"<<endl; 
    
}
//------------------------------------------------------------------------------
//TWORZENIE MATERIA£U 


//==============================================================================


//TWORZENIE PROFILU KONFIGURACJI
//------------------------------------------------------------------------------

cout<<"2. Tworzenie profilu konfiguracji: ";


if (tworzenie_profilu_konfiguracji == "t")
{

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
        os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
        os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - CU41
//------------------------------------------------------------------------------
keybd_event(0x43, 0, 0, 0); // C	       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C
keybd_event(0x55, 0, 0, 0); // U	       
keybd_event(0x55, 0, KEYEVENTF_KEYUP, 0); // U  
keybd_event(0x34, 0, 0, 0); // 4	       
keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0); // 4 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
   
    
pauza_1_1(max_czynnosci);
   
  
//WCISKANIE - ENTER
//------------------------------------------------------------------------------  
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//KLIKANIE W POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PROFIL_KONFIGURACJI_WYBOR_OBIEKTOW_KONFIGUROWALNYCH ); 
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   
    
pauza_1_1(max_czynnosci); 


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - F5
//------------------------------------------------------------------------------ 
keybd_event(0x74, 0, 0, 0); // F5
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5  
      
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = PROFIL_KONFIGURACJI_KOPIOWANIE_WZORCA_OS_X;
os_y = PROFIL_KONFIGURACJI_KOPIOWANIE_WZORCA_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
pauza_1_1(max_czynnosci);

}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(indeks_wzorzec_zmienna,indeks_wzorzec_tekst,strlen(indeks_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_wzorzec_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
pauza_1_1(max_czynnosci);


if (rodzaj_indeksu == "50") {
 
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = PROFIL_KONFIGURACJI_KOPIOWANIE_WZORCA_POTWIERDZENIE_OS_X;
os_y = PROFIL_KONFIGURACJI_KOPIOWANIE_WZORCA_POTWIERDZENIE_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
pauza_1_1(max_czynnosci);

}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------ 
 
 
pauza_1_1(max_czynnosci);

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
pauza_1_1(max_czynnosci);
 
         
}


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = PROFIL_KONFIGURACJI_KOPIOWANIE_WZORCA_POTWIERDZENIE_OS_X;
os_y = PROFIL_KONFIGURACJI_KOPIOWANIE_WZORCA_POTWIERDZENIE_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
pauza_1_1(max_czynnosci);

}   while (KOLOR_NIEBIESKI_1_RGB_2); 	
//------------------------------------------------------------------------------ 


//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	    
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S    
	
	
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3 
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3 

    
cout<<"TAK"<<endl;

plik<<"2. Tworzenie profilu konfiguracji: TAK"<<endl;  
    
    
}


else
{
    
cout<<"NIE"<<endl;
    
plik<<"2. Tworzenie profilu konfiguracji: NIE"<<endl;

}
//------------------------------------------------------------------------------
//TWORZENIE PROFILU KONFIGURACJI


//==============================================================================
	
	
//TWORZENIE KLASY	
//------------------------------------------------------------------------------

cout<<"3. Tworzenie klasy: ";


if (tworzenie_klasy == "t" and rodzaj_indeksu != "50")
{
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------

  
//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /
     
    
pauza_1_1(max_czynnosci);    


//WPISYWANIE - CL01
//------------------------------------------------------------------------------
keybd_event(0x43, 0, 0, 0); // C	       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x4C, 0, 0, 0); // L	       
keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0); // L 
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------ 
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
   
    a = rr;
    b = gg;
    c = bb;

    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL klasa_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(klasa_nowy_tekst) + 1); //text size + \0 character
    memcpy(klasa_nowy_zmienna,klasa_nowy_tekst,strlen(klasa_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,klasa_nowy_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);

	
//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   

 
pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A    
	
	
pauza_1_1(max_czynnosci);	


//WPISYWANIE - 300
//------------------------------------------------------------------------------
	keybd_event(0x33, 0, 0, 0); // 3	 
	keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3  
	keybd_event(0x30, 0, 0, 0); // 0	 
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
	keybd_event(0x30, 0, 0, 0); // 0	 
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0x26, 0, 0, 0); // STRZA£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W GÓRÊ 


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_KLASY_WZORZEC_KLASA_OS_X;
os_y = TWORZENIE_KLASY_WZORZEC_KLASA_OS_Y;
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1);   
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL klasa_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(klasa_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(klasa_wzorzec_zmienna,klasa_wzorzec_tekst,strlen(klasa_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,klasa_wzorzec_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);

	
//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
 
 
pauza_1_1(max_czynnosci);
  

//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
pauza_1_1(max_czynnosci);
  
    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nazwa_zmienna,indeks_nazwa_tekst,strlen(indeks_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
pauza_1_1(max_czynnosci);

	
//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------

keybd_event(0x11, 0, 0, 0); // CTRL	  
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL    
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S   
	

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3	


cout<<"TAK"<<endl;

plik<<"3. Tworzenie klasy: TAK"<<endl;


}


else
{
    
cout<<"NIE"<<endl;

plik<<"3. Tworzenie klasy: NIE"<<endl;
    
}
//------------------------------------------------------------------------------
//TWORZENIE KLASY


//==============================================================================


// PRZYPISANIE MATERIA£U DO KLASY
//------------------------------------------------------------------------------

cout<<"4. Przypisanie materia³u do klasy: ";


if (przypisanie_materialu_do_klasy == "t"  and rodzaj_indeksu != "50")
{
      
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
 
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------   
    
    
//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /
  
    
pauza_1_1(max_czynnosci);    


//WPISYWANIE - CL24N
//------------------------------------------------------------------------------
keybd_event(0x43, 0, 0, 0); // C	       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x4C, 0, 0, 0); // L	       
keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0); // L 
keybd_event(0x32, 0, 0, 0); // 2	       
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 
keybd_event(0x34, 0, 0, 0); // 4	       
keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0); // 4 
keybd_event(0x4E, 0, 0, 0); // N	       
keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0); // N 

    
pauza_1_1(max_czynnosci); 


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL klasa_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(klasa_nowy_tekst) + 1); //text size + \0 character
    memcpy(klasa_nowy_zmienna,klasa_nowy_tekst,strlen(klasa_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,klasa_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);


//WPISYWANIE - 300
//------------------------------------------------------------------------------
keybd_event(0x33, 0, 0, 0); // 3	 
keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3  
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	 
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 


pauza_1_1(max_czynnosci);
    
//WCISKANIE - CTRL+F9 (PRZEJŒCIE DO: TYLKO NOWE PRZYPISANIE)
//------------------------------------------------------------------------------    
    keybd_event(0x11, 0, 0, 0); // CTRL	      
	keybd_event(0x78, 0, 0, 0); // F9	   
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
	keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   
	

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£  
	
	
pauza_1_2(max_czynnosci);
    
 
//WCISKANIE - ENTER
//------------------------------------------------------------------------------     
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = PRZYPISANIE_DO_KLASY_DODANIE_MATERIALU_OS_X;
os_y = PRZYPISANIE_DO_KLASY_DODANIE_MATERIALU_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;

    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);
  
    
//WCISKANIE - CTRL+V - WKLEJANIE
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
 
 
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	  
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S  
	

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3 


cout<<"TAK"<<endl;

plik<<"4. Przypisanie materia³u do klasy: TAK"<<endl;


}


else
{
    
cout<<"NIE"<<endl;

plik<<"4. Przypisanie materia³u do klasy: NIE"<<endl;
    
}
//------------------------------------------------------------------------------
// PRZYPISANIE MATERIA£U DO KLASY


//==============================================================================


// WYWO£ANIE OPRACOWANIA WL¥DU
//------------------------------------------------------------------------------

cout<<"5. Wywo³anie opracowania wgl¹du - tabela ZLOVC_BOMPOS: ";


if (wywolanie_opracowania_wgladu == "t" and rodzaj_indeksu != "50")
{
    

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
  
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /
    
    
pauza_1_1(max_czynnosci);    


//WPISYWANIE - SM30
//------------------------------------------------------------------------------
keybd_event(0x53, 0, 0, 0); // S	       
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S 
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M 
keybd_event(0x33, 0, 0, 0); // 3	       
keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3 
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = WYWOLANIE_OPRACOWANIA_WGLADOW_OS_X;
os_y = WYWOLANIE_OPRACOWANIA_WGLADOW_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_3_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - ZLOVC_BOMPOS
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x5A, 0, 0, 0); // Z	       
keybd_event(0x5A, 0, KEYEVENTF_KEYUP, 0); // Z
keybd_event(0x4C, 0, 0, 0); // L      
keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0); // L 
keybd_event(0x4F, 0, 0, 0); // O       
keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0); // O 
keybd_event(0x56, 0, 0, 0); // V       
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 
keybd_event(0x43, 0, 0, 0); // C       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C     
keybd_event(0xBD, 0, 0, 0); // -      
keybd_event(0xBD, 0, KEYEVENTF_KEYUP, 0); // -
keybd_event(0x42, 0, 0, 0); // B       
keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0); // B 
keybd_event(0x4F, 0, 0, 0); // O       
keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0); // O
keybd_event(0x4D, 0, 0, 0); // M       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x50, 0, 0, 0); // P      
keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0); // P
keybd_event(0x4F, 0, 0, 0); // O      
keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0); // O 
keybd_event(0x53, 0, 0, 0); // S       
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 
 
	
pauza_1_1(max_czynnosci);


string wynik;


string GetClipboardText();


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = WYWOLANIE_OPRACOWANIA_WGLADOW_TABELA_BOMPOS_OS_X;
os_y = WYWOLANIE_OPRACOWANIA_WGLADOW_TABELA_BOMPOS_OS_Y;
 

//WYWO£ANIE OPRACOWANIA WL¥DU - TABELA NIEDOSTÊPNA
//------------------------------------------------------------------------------  
do {
    
    
pauza_bompos();


	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
  

pauza_1_1(max_czynnosci);
    

if (KOLOR_SZARY_4_RGB_1) {
        
        
cout<<" - TABELA NIEDOSTÊPNA";        
cout<<" "<<endl; 
cout<<"   Ponowne wejscie do tabeli: ";

        
pauza_1_1(max_czynnosci);


if (dzwieki == "n") {
 
//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


string dzwiek_tabela_bompos_tekst;

//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            dzwiek_tabela_bompos_tekst = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);

      
          
//TWORZENIE  NAZWY U¯YTKOWNIKA
//------------------------------------------------------------------------------

int dzwiek_tabela_bompos_licznik;
int dzwiek_tabela_bompos_dlugosc_tekstu;

for( dzwiek_tabela_bompos_licznik = 0; dzwiek_tabela_bompos_licznik < dzwiek_tabela_bompos_tekst.length(); dzwiek_tabela_bompos_licznik++ )
{

dzwiek_tabela_bompos_dlugosc_tekstu++;

}


string dzwiek_tabela_bompos_tekst_poczatek = dzwiek_tabela_bompos_tekst;

dzwiek_tabela_bompos_tekst_poczatek.erase (0,38);
          


string dzwiek_tabela_bompos_znak = "a";

int dzwiek_tabela_bompos_licznik_znakow = 0;

do {
          
mciSendString("close mp3", NULL, 0, NULL); 
          
dzwiek_tabela_bompos_znak = dzwiek_tabela_bompos_tekst_poczatek.at(dzwiek_tabela_bompos_licznik_znakow);

if (dzwiek_tabela_bompos_znak != " ") {
    
//cout << znak<<endl;
dzwiek_tabela_bompos_licznik_znakow++;

}

    
} while (dzwiek_tabela_bompos_znak != " "); 




string dzwiek_tabela_bompos_tekst_koniec = dzwiek_tabela_bompos_tekst_poczatek;
dzwiek_tabela_bompos_tekst_koniec.erase (dzwiek_tabela_bompos_licznik_znakow,dzwiek_tabela_bompos_dlugosc_tekstu);


string dzwiek_tabela_bompos_uzytkownik = dzwiek_tabela_bompos_tekst_koniec;


//cout<<dzwiek_tabela_bompos_uzytkownik<<endl;


if (dzwiek_tabela_bompos_uzytkownik == "KJELINSKI") {

mciSendString("open \"dzwieki\\kjelinski.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

int muzyka = 1;  
  
  //play the audio file and specify start and end positions 
  if(muzyka==1)
  {
//    cout<<"file playing....\n";
   // time_t t1=time(0);
    mciSendString("play mp3", NULL, 0, NULL);
   // time_t t2=time(0);
//    cout<<"Duration of the play :"<<t2-t1<<" seconds."<<endl;


}

}


if (dzwiek_tabela_bompos_uzytkownik == "KCWIEK") {

mciSendString("open \"dzwieki\\kcwiek.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

int muzyka = 1;  
  
  //play the audio file and specify start and end positions 
  if(muzyka==1)
  {
//    cout<<"file playing....\n";
   // time_t t1=time(0);
    mciSendString("play mp3", NULL, 0, NULL);
   // time_t t2=time(0);
//    cout<<"Duration of the play :"<<t2-t1<<" seconds."<<endl;


}

}


if (dzwiek_tabela_bompos_uzytkownik == "OCHRYSZCZAK") {

mciSendString("open \"dzwieki\\ochryszczak.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

int muzyka = 1;  
  
  //play the audio file and specify start and end positions 
  if(muzyka==1)
  {
//    cout<<"file playing....\n";
   // time_t t1=time(0);
    mciSendString("play mp3", NULL, 0, NULL);
   // time_t t2=time(0);
//    cout<<"Duration of the play :"<<t2-t1<<" seconds."<<endl;


}

}


if (dzwiek_tabela_bompos_uzytkownik == "BSZMALC") {

mciSendString("open \"dzwieki\\bszmalc.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

int muzyka = 1;  
  
  //play the audio file and specify start and end positions 
  if(muzyka==1)
  {
//    cout<<"file playing....\n";
   // time_t t1=time(0);
    mciSendString("play mp3", NULL, 0, NULL);
   // time_t t2=time(0);
//    cout<<"Duration of the play :"<<t2-t1<<" seconds."<<endl;


}

}

           
pauza_1_1(max_czynnosci);  


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
       
          
}
//------------------------------------------------------------------------------
//TWORZENIE  NAZWY U¯YTKOWNIKA	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
   
pauza_1_1(max_czynnosci); 
 

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB   
   
   
pauza_1_1(max_czynnosci);   
   

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    
   
pauza_1_1(max_czynnosci);    
 
   
}

    
}  while (KOLOR_SZARY_4_RGB_1);
//------------------------------------------------------------------------------
//WYWO£ANIE OPRACOWANIA WL¥DU - TABELA NIEDOSTÊPNA


//WYWO£ANIE OPRACOWANIA WL¥DU - TABELA DOSTÊPNA
//------------------------------------------------------------------------------ 
cout<<" - TABELA DOSTÊPNA";    
    

pauza_1_1(max_czynnosci);


cout<<" "<<endl;
cout<<"   Wywo³anie opracowania wgl¹du: ";

    
//WCISKANIE - F5 (PRZEJŒCIE DO: NOWE WPISY)
keybd_event(0x74, 0, 0, 0); // F5
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5 
   
    
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL klasa_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(klasa_nowy_tekst) + 1); //text size + \0 character
    memcpy(klasa_nowy_zmienna,klasa_nowy_tekst,strlen(klasa_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,klasa_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V - WKLEJANIE
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}   

    
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V - WKLEJANIE
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
  
    
pauza_1_1(max_czynnosci);   


//WCISKANIE - LEWY SHIFT+X
//------------------------------------------------------------------------------
	keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
	keybd_event(0x58, 0, 0, 0); // X	      
	keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0); // X
	keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  

	       
pauza_1_1(max_czynnosci);     
  
    	
//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	  
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S  
	
	
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	
	
//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3

	
pauza_1_2(max_czynnosci); 


//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3
	
	
pauza_1_2(max_czynnosci);	


//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3	
	

cout<<"TAK"<<endl;

plik<<"5. Wywo³anie opracowania wgl¹du - ZLOVC_BOMPOS: TAK"<<endl;


}


else
{
    
cout<<"NIE"<<endl;

plik<<"5. Wywo³anie opracowania wgl¹du - ZLOVC_BOMPOS: NIE"<<endl;
    
}
//------------------------------------------------------------------------------
// WYWO£ANIE OPRACOWANIA WL¥DU


//==============================================================================


// TWORZENIE SPECYFIKACJI MATERIA£OWEJ
//------------------------------------------------------------------------------

cout<<"6. Tworzenie specyfikacji materia³owej dla materia³u: ";


if (tworzenie_specyfikacji_materialowej_dla_materialu == "t" or tworzenie_specyfikacji_materialowej_dla_materialu == "tt")
{
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
        
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /
    
    
pauza_1_1(max_czynnosci);    


//WPISYWANIE - CS01
//------------------------------------------------------------------------------
keybd_event(0x43, 0, 0, 0); // C	       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x53, 0, 0, 0); // S	       
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S 
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}

    
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V - WKLEJANIE
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   

	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);	


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
	keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
    keybd_event(0x59, 0, 0, 0); // Y	       
	keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
	keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
	keybd_event(0x30, 0, 0, 0); // 0	       
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
	keybd_event(0x30, 0, 0, 0); // 0	       
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
	keybd_event(0x31, 0, 0, 0); // 1	       
	keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 

	
pauza_1_1(max_czynnosci);
	

if (rodzaj_indeksu != "50") {

//WPISYWANIE - 1
//------------------------------------------------------------------------------	
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 	

}

else {
          
//WPISYWANIE - 3
//------------------------------------------------------------------------------	
keybd_event(0x33, 0, 0, 0); // 3	       
keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3           
          
}

	
pauza_1_1(max_czynnosci);


//WCISKANIE - F7 (PRZEJŒCIE DO: KOPIOWANIE WZORCA)
//------------------------------------------------------------------------------
keybd_event(0x76, 0, 0, 0); // F7	
keybd_event(0x76, 0, KEYEVENTF_KEYUP, 0); // F7
	

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_SPECYFIKACJI_MATERIALOWEJ_KOPIOWANIE_WZORCA_OS_X;
os_y = TWORZENIE_SPECYFIKACJI_MATERIALOWEJ_KOPIOWANIE_WZORCA_OS_Y;
  
       
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
  
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_wzorzec_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_wzorzec_tekst) + 1); //text size + \0 character
    memcpy(indeks_wzorzec_zmienna,indeks_wzorzec_tekst,strlen(indeks_wzorzec_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_wzorzec_zmienna);
        CloseClipboard();
    }
}

    
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V - WKLEJANIE
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
    

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_SPECYFIKACJI_MATERIALOWEJ_WZORZEC_OS_X;
os_y = TWORZENIE_SPECYFIKACJI_MATERIALOWEJ_WZORZEC_OS_Y;
     
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - CTRL+F3 (ZAZNACZANIE WSZYSTKICH)
//------------------------------------------------------------------------------ 
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3  
   
    
pauza_1_1(max_czynnosci); 

//WCISKANIE - F5 (KOPIOWANIE)
//------------------------------------------------------------------------------ 
keybd_event(0x74, 0, 0, 0); // F5         
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5 
	
	
pauza_1_1(max_czynnosci); 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = TWORZENIE_SPECYFIKACJI_MATERIALOWEJ_OS_X;
os_y = TWORZENIE_SPECYFIKACJI_MATERIALOWEJ_OS_Y;
     
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------


pauza_4_1(max_czynnosci);


string  tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie;

if (tworzenie_specyfikacji_materialowej_dla_materialu == "tt") {

tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie = "t";
          
}

else {
          
tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie;
cout<<"Zapisaæ zmiany (t/n)? ";
cin>>tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie;
cout<<"   Tworzenie specyfikacji materia³owej dla materia³u: ";
          
}





if (tworzenie_specyfikacji_materialowej_dla_materialu_zapisanie == "t")
{
    
//KLIKANIE W PUSTE POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PUSTE_POLE_SAP_2 ); 
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
    
    
pauza_1_1(max_czynnosci); 


//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	  
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S  


Sleep (2000);	
   
             
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = POMARANCZOWY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = POMARANCZOWY_ZNACZEK_POLA_GLOWNEGO_OS_Y;


int i = 0;


    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    

if (KOLOR_POMARANCZOWY_1_RGB_2) {


do {
           

    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
Sleep (2000);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


if (i < 100) {
    
os_x = os_x - 2;
//os_y = os_y - 3;  

cout << os_x << endl;
cout << os_y << endl;

i++;
    
}


}   while (KOLOR_POMARANCZOWY_1_RGB_1); 


}


pauza_1_1(max_czynnosci); 

	

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3 


}


cout<<"TAK"<<endl;

plik<< "6. Tworzenie specyfikacji materia³owej dla materia³u: TAK"<<endl;


}


else
{
    
cout<<"NIE"<<endl;

plik<< "6. Tworzenie specyfikacji materia³owej dla materia³u: NIE"<<endl;  
  
}
//------------------------------------------------------------------------------
// TWORZENIE SPECYFIKACJI MATERIA£OWEJ


//==============================================================================

/*
// SPRAWDZANIE NAZWY OD K¥TEM SPAWANIA
//------------------------------------------------------------------------------
string tekst = indeks_nazwa;
string szukaj = "spaw";
string marszruta_warunek;
	
int pozycja = tekst.find(szukaj);
	
if(pozycja!=string::npos) {

marszruta_warunek = "TAK";

}
//------------------------------------------------------------------------------
*/


cout<<"7. Zmiana marszruty technologicznej: ";


// ZMIANA MARSZRUTY TECHNOLOGICZNEJ
//------------------------------------------------------------------------------
if (zmiana_marszruty_technologicznej == "t" and marszruta != "BRAK"  and rodzaj_indeksu != "50"
or zmiana_marszruty_technologicznej == "tt" and marszruta != "BRAK"  and rodzaj_indeksu != "50")
{
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
  
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------
    
    
//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /

   
pauza_1_1(max_czynnosci);   


//WPISYWANIE - CA02
//------------------------------------------------------------------------------
keybd_event(0x43, 0, 0, 0); // C	       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C
keybd_event(0x41, 0, 0, 0); // A	       
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x32, 0, 0, 0); // 2	       
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 
  
    
pauza_1_1(max_czynnosci);

    
//WCISKANIE - ENTER
//------------------------------------------------------------------------------  
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     
    

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x41, 0, 0, 0); // A           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A 

	
pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 
	
	
pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y	       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL marszruta_zmienna = GlobalAlloc(GMEM_FIXED,strlen(marszruta_tekst) + 1); //text size + \0 character
    memcpy(marszruta_zmienna,marszruta_tekst,strlen(marszruta_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,marszruta_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


//STANDARDOWA MARSZRUTA - PRZEGL¥D OPERACJI
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STANDARDOWA_MARSZRUTA_ZMIANA_PRZEGLAD_OPERACJI_OS_X;
os_y = STANDARDOWA_MARSZRUTA_ZMIANA_PRZEGLAD_OPERACJI_OS_Y;


int licznik_marszruta = 0;   
         
do
{ 
      
//cout<<licznik_marszruta;
                    
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);

if (licznik_marszruta == 10) {
          
//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   

licznik_marszruta = 0;
          
}


licznik_marszruta++;  


}   while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------
    
    
    
    
    
    
    
//WCISKANIE - F5 (PRZEJŒCIE DO: NAG£ÓWEK MARSZRUTY/PLANU)
//------------------------------------------------------------------------------
keybd_event(0x74, 0, 0, 0); // F5
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5
//------------------------------------------------------------------------------
//STANDARDOWA MARSZRUTA - PRZEGL¥D OPERACJI


//STANDARDOWA MARSZRUTA - PE£EN NAG£ÓWEK
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STANDARDOWA_MARSZRUTA_ZMIANA_PELEN_NAGLOWEK_OS_X;
os_y = STANDARDOWA_MARSZRUTA_ZMIANA_PELEN_NAGLOWEK_OS_Y;
    
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_BIALY_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - CTRL+F7 (PRZEJŒCIE DO: PRZYPISANIE MATERIA£-MARSZRUTA/PLAN)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x76, 0, 0, 0); // F7           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x76, 0, KEYEVENTF_KEYUP, 0); // F7  


//STANDARDOWA MARSZRUTA - PRZYPISANIE MATERIA£U
//------------------------------------------------------------------------------

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STANDARDOWA_MARSZRUTA_ZMIANA_PRZYPISANIE_MATERIALU_OS_X;
os_y = STANDARDOWA_MARSZRUTA_ZMIANA_PRZYPISANIE_MATERIALU_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - CTRL+PAGE DOWN (PRZEJSCIE NA KONIEC TABELI)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x22, 0, 0, 0); // PAGE DOWN           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
   
    
pauza_1_2(max_czynnosci); 


//WCISKANIE - CTRL+PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


//WPISYWANIE - 1
//------------------------------------------------------------------------------
keybd_event(0x31, 0, 0, 0); // 1	
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB

	
pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y	       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1

	
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STANDARDOWA_MARSZRUTA_ZMIANA_PELEN_NAGLOWEK_OS_X;
os_y = STANDARDOWA_MARSZRUTA_ZMIANA_PELEN_NAGLOWEK_OS_Y;
 
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_BIALY_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - F8 (PRZEJŒCIE DO: PRZYPISANIE SK£AD. - OGÓLNE)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STANDARDOWA_MARSZRUTA_ZMIANA_PRZYPISANIE_SKLADNIKOW_OS_X;
os_y = STANDARDOWA_MARSZRUTA_ZMIANA_PRZYPISANIE_SKLADNIKOW_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - CTRL+PAGE DOWN (PRZEJŒCIE NA KONIEC TABELI)
//------------------------------------------------------------------------------
    keybd_event(0x11, 0, 0, 0); // CTRL 
	keybd_event(0x22, 0, 0, 0); // PAGE DOWN           
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
	keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);
	

//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------	
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     	
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);


//WCISKANIE - F2 (PRZEJŒCIE DO INDEKSU)
//------------------------------------------------------------------------------
keybd_event(0x71, 0, 0, 0); // F2	 
keybd_event(0x71, 0, KEYEVENTF_KEYUP, 0); // F2


pauza_1_1(max_czynnosci);


if (zmiana_marszruty_technologicznej == "t") {

cout<<"Zapisaæ zmiany (t/n)? ";
cin>>zmiana_marszruty_zapisanie;


if (zmiana_marszruty_zapisanie == "t") {

//KLIKANIE W PUSTE POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PUSTE_POLE_SAP_2 );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


pauza_1_1(max_czynnosci);

}

}



if (zmiana_marszruty_technologicznej == "tt") {
    
    
if (marszruta_wiersz == "A" and marszruta_pozycja == "10") {


//WCISKANIE - CTRL + F4
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x73, 0, 0, 0); // F4	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x73, 0, KEYEVENTF_KEYUP, 0); // F4   


pauza_1_1(max_czynnosci);


//WCISKANIE - F5
//------------------------------------------------------------------------------ 
keybd_event(0x74, 0, 0, 0); // F5
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STANDARDOWA_MARSZRUTA_ZMIANA_PONOWNE_PRZYPISANIE_OS_X;
os_y = STANDARDOWA_MARSZRUTA_ZMIANA_PONOWNE_PRZYPISANIE_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - 10
//------------------------------------------------------------------------------
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);   
 
    
}


if (marszruta_wiersz == "1" and marszruta_pozycja == "10") {
      
          
//WCISKANIE - CTRL + TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x09, 0, 0, 0); // TAB	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB

keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x09, 0, 0, 0); // TAB	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - F9
//------------------------------------------------------------------------------ 
keybd_event(0x78, 0, 0, 0); // F9
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci);


//WCISKANIE - F5
//------------------------------------------------------------------------------ 
keybd_event(0x74, 0, 0, 0); // F5
keybd_event(0x74, 0, KEYEVENTF_KEYUP, 0); // F5 


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STANDARDOWA_MARSZRUTA_ZMIANA_PONOWNE_PRZYPISANIE_OS_X;
os_y = STANDARDOWA_MARSZRUTA_ZMIANA_PONOWNE_PRZYPISANIE_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - 10
//------------------------------------------------------------------------------
keybd_event(0x31, 0, 0, 0); // 1	       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);

}

}

if (zmiana_marszruty_zapisanie != "n") {
 
//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	    
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S    


	
	
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


}   while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	


//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3 
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3 

}
       
cout<<"   Zmiana marszruty technologicznej: TAK"<<endl;
plik<< "7. Zmiana marszruty technologicznej: TAK"<<endl;

}


else
{
  
cout<<"   Zmiana marszruty technologicznej: NIE"<<endl;
plik<< "7. Zmiana marszruty technologicznej: NIE"<<endl;
}


plik<<"==========================================================================="<<endl;
//------------------------------------------------------------------------------
//ZMIANA MARSZRUTY TECHNOLOGICZNEJ

	
string data_koniec = currentDateTime();	

plik<< "Data zakoñczenia: "<< currentDateTime() <<endl;   
plik<< " " <<endl;
plik<< "<<<KONIEC>>>";
plik.close();


licznik--;


}

else {
    
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"BRAK DANYCH"<<endl;   
cout<<"---------------------------------------------------------------------------"<<endl; 
  
}


}


while (rodzaj_indeksu != ""); //przerwij je¿eli linia bêdzie pusta (dane w pliku siê skoñcz¹) UWAGA: Pamiêtaj, ¿eby w pliku zostawiæ ostatni¹ linijkê pust¹
przechwyt.close(); //zamykamy plik

/*
//WYŒWIETLANIE NA KONSOLI LOG
//------------------------------------------------------------------------------
string wyswietl_log;

cout<<" "<<endl;
cout<<"Wyœwietliæ zawartoœæ pliku LOG (t/n)? ";
cin>>wyswietl_log;
cout<<" "<<endl;


if (wyswietl_log  == "t")    
{
    
plik.open( plik_caly.c_str(), ios::in );
    if( plik.good() ) {
    
    string linia;
        
    cout << " " << endl;
    cout << "Zawartoœæ pliku: " << plik_start_tekst << indeks_nowy << plik_koniec_tekst << endl;
    cout << " " << endl;
        
    do {
        
        getline( plik, linia );
        cout << linia << endl;
        }
        while(linia !="<<<KONIEC>>>");

    plik.close();
    } 
    else cout << "Nie mo¿na wyœwietliæ zawartoœci pliku LOG" << endl;    
	
}
*/	
	
	
cout<<" "<<endl;
cout<<"Powtórzyæ program (t/n): ";
cin>>x;


while (x != "t" and x != "n") {
cout<<"Niepoprawny znak. Wpisz ponownie: "; 
cin>>x;
} 


}
 
       
while( x == "t" );
    

if( x != "t" )
{
        
Sleep (CZAS_PAUZY_3);
cout<<" "<<endl;
cout<<"Koniec programu"<<endl;
       
}


fstream wszystkie_indeksy;
wszystkie_indeksy.close();


Sleep(100000);	
 
 
cin.get();
return 0;


}
