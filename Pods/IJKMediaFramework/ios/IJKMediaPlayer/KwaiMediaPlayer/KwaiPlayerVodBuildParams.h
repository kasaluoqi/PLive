//
//  KwaiPlayerVodBuilder.h
//  IJKMediaFramework
//
//  Created by MarshallShuai on 2019/9/19.
//  Copyright © 2019 kuaishou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IJKFFOptions.h"

NS_ASSUME_NONNULL_BEGIN

@interface KwaiPlayerVodBuildParams : NSObject

#pragma mark 这一层供IJKFFMoviePlayerController使用
@property(strong, nonatomic) IJKFFOptions* ijkFFOptions;

#pragma mark 这一层供KwaiFFMovieController使用
// 本次播放是否使用cache，默认开启
@property(nonatomic) BOOL enableCache;

@end

NS_ASSUME_NONNULL_END
