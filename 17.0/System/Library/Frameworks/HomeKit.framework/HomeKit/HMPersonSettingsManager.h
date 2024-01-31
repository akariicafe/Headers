@class NSUUID, _HMContext, NSString, HMFMessageDestination;

@interface HMPersonSettingsManager : NSObject <HMFLogging>

@property (readonly) HMFMessageDestination *messageDestination;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)personSettingsManagerUUIDFromHomeUUID:(id)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_sendMessageWithName:(id)a0 payload:(id)a1 responseHandler:(id /* block */)a2;
- (void)fetchClassificationNotificationsEnabledForPersonWithUUID:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 UUID:(id)a1;
- (id)initWithHome:(id)a0;
- (void)updateClassificationNotificationsEnabled:(BOOL)a0 forPersonWithUUID:(id)a1 completion:(id /* block */)a2;

@end
