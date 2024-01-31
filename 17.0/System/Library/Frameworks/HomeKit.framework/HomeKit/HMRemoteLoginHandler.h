@class NSUUID, HMAccessoryInfoDataProvider, NSString, HMAccessory, HMRemoteLoginAnisetteDataProvider, _HMContext, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface HMRemoteLoginHandler : NSObject <HMAccessoryInfoDataProviderDelegate, HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property BOOL didReceiveAccountInfo;
@property (retain) ACAccount *stagedLoggedInAccount;
@property (retain, nonatomic) HMAccessoryInfoDataProvider *accessoryInfoDataProvider;
@property (readonly) NSUUID *uuid;
@property (weak) HMAccessory *accessory;
@property (retain) NSString *currentSessionID;
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, nonatomic) ACAccount *loggedInAccount;
@property (readonly, nonatomic, getter=isSessionInProgress) BOOL sessionInProgress;
@property (readonly, nonatomic) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)messageDestination;
- (id)initWithCoder:(id)a0;
- (id)_accountFromAccountInfo:(id)a0;
- (void)_callAccountUpdateDelegate;
- (void)_companionLoginWithAccount:(id)a0 completion:(id /* block */)a1;
- (BOOL)_configureAccessoryInfoDataProviderIfNeeded;
- (void)_configureWithContext:(id)a0 accessory:(id)a1;
- (void)_handleLoginResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_handleQueryProxiedDeviceResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_handleRemoteLoginAccountUpdated:(id)a0;
- (void)_handleRemoteLoginSignoutResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_proxyLoginWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (void)_queryProxiedDevice:(id /* block */)a0;
- (void)_signout:(id /* block */)a0;
- (void)accessoryInfoDataProvider:(id)a0 didReceiveUpdatesForAccessoryWithIdentifier:(id)a1 accountInfo:(id)a2;
- (void)companionLoginWithAccount:(id)a0 completion:(id /* block */)a1;
- (id)initWithUUID:(id)a0 accessory:(id)a1 loggedInAccount:(id)a2 stagedLoggedInAccount:(id)a3 anisetteDataProvider:(id)a4;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)postConfigure;
- (void)proxyLoginWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (void)queryProxiedDevice:(id /* block */)a0;
- (void)registerForMessages;
- (void)setLoggedInAccount:(id)a0;
- (void)signout:(id /* block */)a0;
- (void)updateLoggedInAccount:(id)a0 completionHandler:(id /* block */)a1;

@end
