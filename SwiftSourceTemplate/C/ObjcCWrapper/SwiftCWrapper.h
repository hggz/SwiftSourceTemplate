//
//  SwiftCWrapper.h
//  SwiftSourceTemplate
//
//  Created by Hugo Gonzalez on 2/20/20.
//  Copyright © 2020 Hugo Gonzalez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMain.h"

// Although not necessary, an objc wrapper over all the c code can make thinking about it easier to turn this into a pure C module later since we're following the same convention on cpp and objc land. You can totally import the C headers directly into the ObjC bridging header without wrapping it in an ObjC class since ObjC is a superset of C.
@interface SwiftCWrapper : NSObject
+ (void)cwrapperMain;
@end
