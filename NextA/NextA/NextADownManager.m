//
//  NextADownManager.m
//  NextA
//
//  Created by only on 2019/3/27.
//  Copyright © 2019年 only. All rights reserved.
//

#import "NextADownManager.h"

@implementation NextADownManager

+ (NextADownManager *)sharedInstance {
    static dispatch_once_t pred;
    static NextADownManager *sharedInstance = nil;
    
    dispatch_once(&pred, ^{
        sharedInstance = [[NextADownManager alloc] init];
    });
    
    return sharedInstance;
}



- (void)startDownLoadActionWithType:(DownLoadFileType)type Completion:(ActionCompletion)completion{
    int x = arc4random() % 100;
    if (x >= 50) {
        completion(YES,[NSString stringWithFormat:@"%zd",type],nil);
    }else{
        completion(NO,[NSString stringWithFormat:@"%zd",type],[NSError errorWithDomain:@"NextA" code:110 userInfo:nil]);
    }
}

@end
