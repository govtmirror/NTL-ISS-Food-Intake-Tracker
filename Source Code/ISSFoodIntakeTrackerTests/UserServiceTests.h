// Copyright (c) 2013 TopCoder. All rights reserved.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
//  UserServiceTests.h
//  ISSFoodIntakeTracker
//
//  Created by duxiaoyang on 2013-07-11.
//

#import <SenTestingKit/SenTestingKit.h>
#import "UserServiceImpl.h"
#import "LockService.h"
#import "BaseTests.h"
#import "SMBClient.h"

/*!
 @class UserServiceTests
 @discussion This is the unit test cases for UserService.
 @author duxiaoyang, LokiYang
 @version 1.1
 @changes from 1.0
    1. Add LockService support.
 */
@interface UserServiceTests : BaseTests

/*!
 @property The UserService to test.
 */
@property (nonatomic, strong) UserServiceImpl *userService;

/*!
 @property The lock service for testing.
 */
@property (nonatomic, strong) id<LockService> lockService;

/*!
 @property The SMBClient instance.
 */
@property (nonatomic, strong) id<SMBClient> smbClient;

@end