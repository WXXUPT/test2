//
//  Person.m
//  main
//
//  Created by 王旭 on 2020/7/11.
//  Copyright © 2020 王旭. All rights reserved.
//

#import "Person.h"

@implementation Person
@synthesize name = _name;
@synthesize weight = _weight;
- (id) init
{
    if(self = [super init])
    {
        self.name = @"wangxu";
        self.weight = @"55kg";
    }
    return self;
}
@end
