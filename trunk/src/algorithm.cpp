/*		algorithm.cpp
//
//		Copyright by hofmann.martin@gmx.de
//
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.*/

#include <iostream>
#include "algorithm.hpp"
#include "table.h"


algorithm::algorithm(){
	//fill m_box with content from static const keys[]
	for( int i = 0; i < 26; i++ ){
		m_box[i] = keys[i];
	}
}//algorithm


algorithm::~algorithm(){
}//~algorithm


int algorithm::algorithmInitialize( int password_length ){
		 
	int useever = ( ( password_length * 2 ) % ( 26 - ( ( password_length % 26 ) * 2 ) ) );
	//int useever = password_length;
	int useKeys[password_length];
	
	int index = useever;
	
	//Die zu verwendenden Schlüssel berechnen
	//so viele Schlüssel wie länge des Passworts werden benötigt
	for( int i = 0; i < password_length; i++ ){
		
		//index ist eine zahl zwischen 0 und 25
		//gibt an welcher schlüssel genommen wird
		std::cout << useKeys[i] << std::endl;
		
		//prüfen ob index + index kleiner ist als 26
		if( ( index + index ) < 26 ){
			index += index;
		//wenn nein dann:
		} else {
			//für alle  von x bis useever
			for( int x = 0; x < useever; x++ ){
				//wenn index gleich 26 ist auf 0 setzen
				if(index >= 26){
					index = 0;
				} else {
					index++;
				}
			}
		}
		
		useKeys[i] = index;
	}
	
	return (0x00);
}//AlgorithmInitialize()
