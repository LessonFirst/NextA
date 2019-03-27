//
//  NextADefine.h
//  NextA
//
//  Created by only on 2019/3/27.
//  Copyright © 2019年 only. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NextADefine : NSObject

typedef NS_ENUM(NSInteger, DownLoadFileType) {
    DownLoadFileTypeImage = 101,           //
    DownLoadFileTypeVideo = 102,               //
    DownLoadFileTypeData = 103,                      //
};

typedef void (^ActionCompletion) (BOOL isSuccess,NSString *type,NSError *error);

@end

NS_ASSUME_NONNULL_END
