//
//  Target_NextA.m
//  NextA
//
//  Created by only on 2019/3/27.
//  Copyright © 2019年 only. All rights reserved.
//

#import "Target_NextA.h"
#import "AViewController.h"
#import "NextADownManager.h"

@implementation Target_NextA

- (UIViewController *)Action_viewController:(NSDictionary *)params
{
    AViewController *viewController = [[AViewController alloc] init];
    return viewController;
}
- (NextADownManager *)Action_NextADownLoadWithType:(DownLoadFileType)type completion:(ActionCompletion)completion{
     NextADownManager *downLoadManager = [NextADownManager sharedInstance];
    [downLoadManager startDownLoadActionWithType:type Completion:completion];
    return downLoadManager;
}


@end
