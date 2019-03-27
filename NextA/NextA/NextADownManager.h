//
//  NextADownManager.h
//  NextA
//
//  Created by only on 2019/3/27.
//  Copyright © 2019年 only. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NextADefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface NextADownManager : NSObject

+ (NextADownManager *)sharedInstance;

- (void)startDownLoadActionWithType:(DownLoadFileType)type Completion:(ActionCompletion)completion;

@end

NS_ASSUME_NONNULL_END
