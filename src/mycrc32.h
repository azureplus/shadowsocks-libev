//
//  crc32.h
//  ShadowPath
//
//  Created by dev on 16/7/19.
//  Copyright © 2016年 TouchingApp. All rights reserved.
//

#ifndef crc32_h
#define crc32_h
void init_crc32_table(void);
void fillcrc32(unsigned char *buffer, unsigned int size) ;
uint32_t mycrc32(unsigned char *buffer, unsigned int size);
void fillcrc32to(unsigned char *buffer, unsigned int size, unsigned char *outbuffer) ;
void filladler32(unsigned char *buffer, unsigned int size);
int checkadler32(unsigned char *buffer, unsigned int size);
#endif /* crc32_h */
