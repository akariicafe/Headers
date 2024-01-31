@class NSUUID, NSString, NSXPCConnection, HMDXPCMessageSendPolicyParameters, NSSet, HMDXPCMessageCountTracker, NSDictionary, HMDXPCRequestTracker, NSObject, HMDProcessInfo;
@protocol OS_dispatch_queue;

@interface HMDXPCClientConnection : HMFMessageTransport <HMFLogging, HMXPCServerMessageHandling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDXPCMessageCountTracker *_counterTracker;
    NSString *_signature;
}

@property (copy) NSString *clientName;
@property (copy) NSUUID *clientUUID;
@property (copy) NSString *logIdentifier;
@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) HMDXPCRequestTracker *requestTracker;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (retain) NSDictionary *privateAccessEntitlement;
@property (copy, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters;
@property (retain) HMDProcessInfo *processInfo;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) Class principalClass;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) NSSet *activeRequests;
@property (readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property (readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) BOOL authorizedForMicrophoneAccess;
@property (readonly) unsigned long long entitlements;
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, nonatomic, getter=isAuthorizedForLocationAccess) BOOL authorizedForLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationAccess) BOOL entitledForHomeLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForCameraClipsAccess) BOOL entitledForCameraClipsAccess;
@property (readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) BOOL entitledForMultiUserSetupAccess;
@property (readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) BOOL entitledForShortcutsAutomationAccess;
@property (readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) BOOL entitledToProvideAccessorySetupPayload;
@property (readonly, nonatomic, getter=isEntitledToProvideMatterSetupPayload) BOOL entitledToProvideMatterSetupPayload;
@property (readonly, nonatomic, getter=isEntitledForPersonManagerAccess) BOOL entitledForPersonManagerAccess;
@property (readonly, nonatomic, getter=isEntitledForWalletKeyAccess) BOOL entitledForWalletKeyAccess;
@property (readonly, nonatomic, getter=isEntitledForSecureAccess) BOOL entitledForSecureAccess;
@property (readonly, nonatomic, getter=isEntitledForStateDump) BOOL entitledForStateDump;
@property (readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) BOOL entitledForAssistantIdentifiers;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) BOOL entitledForHomeLocationFeedbackAccess;
@property (readonly, getter=isPlatformBinary) BOOL platformBinary;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property (readonly, nonatomic) unsigned long long homeManagerOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)entitlementsForConnection:(id)a0;

- (id)_displayName;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)shortDescription;
- (void)handleMessage:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (id)attributeDescriptions;
- (void)deactivate;
- (void)updateUserInfo:(id)a0;
- (BOOL)canSendMessage:(id)a0;
- (void)_handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (void)__handleApplicationStateChange:(id)a0;
- (void)initiateRefresh;
- (id)counterIdentifierForMessage:(id)a0;
- (id)initWithConnection:(id)a0 counterTracker:(id)a1;
- (BOOL)shouldSendResponseForMessageIdentifier:(id)a0;
- (void)updateSendPolicyParameters:(id)a0;

@end
