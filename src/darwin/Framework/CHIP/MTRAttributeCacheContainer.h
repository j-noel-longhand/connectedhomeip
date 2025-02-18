/**
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import <Foundation/Foundation.h>

#import <Matter/MTRBaseDevice.h>
#import <Matter/MTRDeviceController.h>

NS_ASSUME_NONNULL_BEGIN

@class MTRSubscribeParams;

@interface MTRAttributeCacheContainer : NSObject

/**
 * Reads an attribute with specific attribute path
 *
 * @param endpointID  endpoint ID of the attribute
 * @param clusterID  cluster ID of the attribute
 * @param attributeID  attribute ID of the attribute
 * @param clientQueue  client queue to dispatch the completion handler through
 * @param completion  block to receive the result.
 *                   "values" received by the block will have the same format of object as the one received by completion block
 *                   of MTRBaseDevice readAttributeWithEndpointID:clusterID:attributeID:clientQueue:completion method.
 */
- (void)readAttributeWithEndpointID:(NSNumber * _Nullable)endpointID
                          clusterID:(NSNumber * _Nullable)clusterID
                        attributeID:(NSNumber * _Nullable)attributeID
                        clientQueue:(dispatch_queue_t)clientQueue
                         completion:(MTRDeviceResponseHandler)completion MTR_NEWLY_AVAILABLE;

@end

@interface MTRAttributeCacheContainer (Deprecated)

- (void)readAttributeWithEndpointId:(NSNumber * _Nullable)endpointId
                          clusterId:(NSNumber * _Nullable)clusterId
                        attributeId:(NSNumber * _Nullable)attributeId
                        clientQueue:(dispatch_queue_t)clientQueue
                         completion:(MTRDeviceResponseHandler)completion
    MTR_NEWLY_DEPRECATED("Please use readAttributeWithEndpointID:clusterID:attributeID:clientQueue:completion:");

@end

NS_ASSUME_NONNULL_END
