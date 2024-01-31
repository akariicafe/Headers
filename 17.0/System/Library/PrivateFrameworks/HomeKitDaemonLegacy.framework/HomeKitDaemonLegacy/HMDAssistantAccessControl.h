@class NSMutableSet, NSUUID, HMDAssistantAccessControlModel, HMDUser, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_appleMediaAccessories;
    NSMutableSet *_hapAccessoryIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long cachedHash;
@property (readonly, copy) NSUUID *modelID;
@property (readonly, copy) HMDAssistantAccessControlModel *model;
@property unsigned long long options;
@property (getter=areActivityNotificationsEnabledForPersonalRequests) BOOL activityNotificationsEnabledForPersonalRequests;
@property (weak) HMDUser *user;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly, copy) NSArray *accessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (BOOL)isAccessorySupported:(id)a0;
+ (id)accessControlWithMessage:(id)a0 user:(id)a1 currentAccessories:(id)a2 error:(id *)a3;
+ (id)modelIDNamespace;

- (void)configure;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUser:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)removeAccessory:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAccessory:(id)a0;
- (id)assistantAccessControlModelWithRemovedAccessories:(id)a0;
- (void)handleRemovedAccessory:(id)a0;
- (id)initWithUser:(id)a0 appleAccessories:(id)a1 enabled:(BOOL)a2;
- (id)initWithUser:(id)a0 appleAccessories:(id)a1 hapAccessoryIdentifiers:(id)a2 enabled:(BOOL)a3 activityNotificationsEnabledForPersonalRequests:(BOOL)a4;
- (id)initWithUser:(id)a0 model:(id)a1;
- (void)notifyClientOfUpdateWithMessage:(id)a0;
- (void)removeAccessoriesAddedByOldController:(id)a0;
- (void)setAppleMediaAccessories:(id)a0;
- (void)setHapAccessoryIdentifiers:(id)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;

@end
