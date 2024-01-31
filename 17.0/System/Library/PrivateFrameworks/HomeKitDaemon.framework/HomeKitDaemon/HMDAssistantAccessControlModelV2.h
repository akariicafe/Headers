@class NSArray, NSNumber;

@interface HMDAssistantAccessControlModelV2 : HMBModel

@property (copy, nonatomic) NSArray *accessoryUUIDs;
@property (copy, nonatomic) NSArray *siriEndpointAccessoryUUIDs;
@property (copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (copy, nonatomic) NSNumber *requiresAuthenticationForSecureRequests;

+ (id)hmbProperties;

@end
