//
//  SKManager.h
//  SeelKit
//
//  Created by CP on 2022/10/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SKManager : NSObject
+(instancetype)shared;

/// init
/// @param appKey appKey
- (void)startWithAppKey:(NSString *)appKey;

///creatPolicies
- (void)creatPoliciesParams:(NSDictionary *)params completion:(void (^)(BOOL success,NSDictionary *policies,NSError *error))completion;

/// creatQuotes
/// @param params
/// @param completion
- (void)creatQuotesParams:(NSDictionary *)params completion:(void (^)(BOOL success,NSString *price,NSError*))completion;


/// listener
/// @param event_type
/// @param event_data
- (void)listenerWithEvent_type:(NSString *)event_type event_data:(NSDictionary *)event_data;

@end

NS_ASSUME_NONNULL_END
