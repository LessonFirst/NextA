//
//  Target_NextA.h
//  NextA
//
//  Created by only on 2019/3/27.
//  Copyright © 2019年 only. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NextADefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface Target_NextA : NSObject

- (UIViewController *)Action_viewController:(NSDictionary *)params;

- (id)Action_NextADownLoadWithType:(DownLoadFileType)type completion:(ActionCompletion)completion;

@end

NS_ASSUME_NONNULL_END
