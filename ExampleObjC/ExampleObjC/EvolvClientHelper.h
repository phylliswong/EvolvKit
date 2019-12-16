//
//  EvolvClientHelper.h
//
//  Copyright (c) 2019 Evolv Technology Solutions
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "EvolvKit-Swift.h"

NS_ASSUME_NONNULL_BEGIN

@interface EvolvClientHelper : NSObject<EvolvClientDelegate>

@property (strong, nonatomic) id<EvolvClient> client;
@property (nonatomic, copy) void (^didChangeClientStatus)(enum EvolvClientStatus status);

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END