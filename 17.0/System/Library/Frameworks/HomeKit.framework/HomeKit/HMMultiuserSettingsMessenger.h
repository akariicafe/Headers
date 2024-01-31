@class HMFMessageDispatcher, NSUUID, NSString, NSArray;

@interface HMMultiuserSettingsMessenger : NSObject <HMFLogging, HMFObject>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

@end
