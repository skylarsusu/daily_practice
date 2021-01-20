//
//  NSObject+kvo.h
//  KVO
//
//  Created by suxiaobao on 2018/5/20.
//  Copyright © 2018年 suxiaobao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (kvo)

- (void)zj_addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(nullable void *)context;

@end
