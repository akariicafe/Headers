@class NSUUID, HMFMessageDispatcher, NSString;

@interface HMSiriEndpointProfilesMessenger : NSObject <HMFLogging>

@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)messageTargetUUIDWithHomeUUID:(id)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1;
- (void)sendApplyOnboardingSelectionsRequestWithAccessoryUUID:(id)a0 onboardingSelections:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendDeleteSiriHistoryRequestWithAccessoryUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
