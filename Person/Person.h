//
//  Person.h
//  Test
//
//  Created by Andy on 2018/3/17.
//  Copyright © 2018年 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property(nonatomic, copy) NSString *name;
@property(nonatomic, assign) NSUInteger *age;

- (void)run;

@end
