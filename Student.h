//
//  Student.h
//  main
//
//  Created by 王旭 on 2020/7/11.
//  Copyright © 2020 王旭. All rights reserved.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Student : Person
{
    @private
    NSString* _nameStr;
    int _scoreInt;
    int _ageInt;
}
@property (nonatomic , copy) NSString* nameStr;
@property (nonatomic , assign) int scoreInt;
@property (nonatomic , assign) int ageInt;
- (void) setScoreInt:(int)scoreInt;
- (int) scoreInt;
- (id) init;
@end

NS_ASSUME_NONNULL_END
