//
//  Person.h
//  main
//
//  Created by 王旭 on 2020/7/11.
//  Copyright © 2020 王旭. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject
@property (nonatomic , copy) NSString* name;
@property (nonatomic , copy) NSString* weight;
- (id) init;
@end

NS_ASSUME_NONNULL_END
