//		libfec.hpp
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


#ifndef _libfec_hpp_
#define _libfec_hpp_

class libfec{
		friend class algorithm;
	public:
		libfec(char *password);
		~libfec();
	
		void LibfecInitialize();
	
	private:
		int m_box[26];
		int m_length;
		char *m_password;
};


#endif //_linfec_hpp_

