//
//  obfsutils.h
//  ShadowPath
//
//  Created by dev on 16/7/19.
//  Copyright © 2016年 TouchingApp. All rights reserved.
//

#ifndef obfsutils_h
#define obfsutils_h

uint64_t xorshift128plus(void);
int get_head_size(char *plaindata, int size, int def_size);

#endif /* obfsutils_h */
