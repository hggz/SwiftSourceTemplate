//
//  CppWrapper.h
//  ObjCPlayground
//
//  Created by Hugo Gonzalez on 2/20/20.
//  Copyright © 2020 Hugo Gonzalez. All rights reserved.
//

#ifndef HEADERFILE_H
#define HEADERFILE_H

#import <Foundation/Foundation.h>

#if __cplusplus

#include "CPPMain.hpp"

@interface CppWrapper : NSObject
- (void)cppWrapperMain;
@end

#endif
#endif
