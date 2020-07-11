//
//  Student.m
//  main
//
//  Created by 王旭 on 2020/7/11.
//  Copyright © 2020 王旭. All rights reserved.
//

#import "Student.h"

@implementation Student
- (void) setScoreInt:(int)scoreInt
{
    if(scoreInt /2 != 0)
    {
        scoreInt++;
        return;
    }
    else
    {
        _scoreInt = scoreInt;
    }
}
- (int) scoreInt;
{
    return _scoreInt;
}
- (id) init
{
    if(self = [super init])
    {
        self.nameStr = _nameStr;
        self.ageInt = _ageInt;
        self.scoreInt = [self scoreInt];
    }
    return self;
}
@end
