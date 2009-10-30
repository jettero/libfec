//		algorithm.cpp
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
//      MA 02110-1301, USA.

#include <iostream>
#include "algorithm.hpp"
#include "table.h"


algorithm::algorithm(){
}//algorithm


algorithm::~algorithm(){
}//~algorithm


int algorithm::AlgorithmInitialize( int password_length ){
	//fill m_box with content from static const keys[]
	for( int i = 0; i < 26; i++ ){
		m_box[i] = keys[i];
		std::cout << m_box[i] << std::endl;
	}
	
	//get the numbers of which keys we use to generate the password
	/*{
		 * ToDo: Eine rechnung aufstellen um zu berechnen welche keys benutzt werden sollen
	 }*/
	int useever = ( password_length % 26 );
	
	return (0x00);
}//AlgorithmInitialize()
