/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/RCTBridgeModule.h>
#import <React/RCTDevLoadingViewProtocol.h>
#import <React/RCTUIKit.h> // [macOS]

@interface RCTDevLoadingView : NSObject <RCTDevLoadingViewProtocol, RCTBridgeModule>
@end
