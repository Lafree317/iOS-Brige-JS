//
//  OCBrigeModel.h
//  iOS-Brige-JS
//
//  Created by 胡春源 on 16/5/24.
//  Copyright © 2016年 胡春源. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import "OCWebViewController.h"

typedef void(^PopPushBlock)();

@interface OCBrigeModel : NSObject <JavaScriptObjectiveCDelegate>
@property (nonatomic, weak) JSContext *jsContext;
@property (nonatomic, weak) UIWebView *webView;
@property (copy, nonatomic) PopPushBlock pop;
@property (copy, nonatomic) PopPushBlock push;
@end
