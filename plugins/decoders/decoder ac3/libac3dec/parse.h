/*
* This source code is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*       
* You should have received a copy of the GNU Lesser General Public
* License along with this library; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
* File Name: parse.c							
*
* Reference:
*
* Author:                                                  
*
* Description:
*
* 	
* 
* History:
* 02/23/2005 
*  
*
*CodeReview Log:
* 
*/
#ifndef _PARSE_H
#define _PARSE_H 

#include "ac3.h"
#include "bitstream.h"

void parse_syncinfo(syncinfo_t *syncinfo,bitstream_t *bs);
void parse_audblk(bsi_t *bsi,audblk_t *audblk,bitstream_t *bs, uint_16 nblk);
void parse_bsi(bsi_t *bsi,bitstream_t *bs);
void parse_auxdata(syncinfo_t *syncinfo,bitstream_t *bs);

struct frmsize_s
{
	uint_16 bit_rate;
	uint_16 frm_size[3];
};

#endif

