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
