@class NSArray, NSString, HMAccessoryNetworkAccessViolation;
@protocol _HMNetworkConfigurationProfileDelegate;

@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile <HMFLogging>

@property (readonly) long long targetProtectionMode;
@property (readonly) long long currentProtectionMode;
@property (readonly, getter=isNetworkAccessRestricted) BOOL networkAccessRestricted;
@property (readonly) NSArray *allowedHosts;
@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) BOOL supportsWiFiReconfiguration;
@property (readonly) long long credentialType;
@property (weak, nonatomic) id<_HMNetworkConfigurationProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)setCredentialType:(long long)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)messageReceiveQueue;
- (id)messageDestination;
- (id)messageTargetUUID;
- (void)setSupportsWiFiReconfiguration:(BOOL)a0;
- (void)_handleAccessViolationUpdated:(id)a0;
- (void)_handleHostsUpdated:(id)a0;
- (void)_handleWiFiReconfigurationUpdated:(id)a0;
- (void)_notifyDelegateOfNetworkAccessModeChanged;
- (void)_notifyDelegateOfUpdatedAccessViolation;
- (void)_notifyDelegateOfUpdatedAllowedHosts;
- (void)_notifyDelegateOfUpdatedProtectionMode;
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
- (void)_registerNotificationHandlers;
- (id)initWithAccessoryIdentifier:(id)a0 targetProtection:(long long)a1 currentProtection:(long long)a2 networkAccessRestricted:(BOOL)a3 allowedHosts:(id)a4 accessViolation:(id)a5 supportsWiFiReconfiguration:(BOOL)a6 credentialType:(long long)a7;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id /* block */)a0;
- (void)reconfigureWiFiWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setAccessViolation:(id)a0;
- (void)setAllowedHosts:(id)a0;
- (void)setCurrentProtectionMode:(long long)a0;
- (void)setNetworkAccessRestricted:(BOOL)a0;
- (void)setTargetProtectionMode:(long long)a0;

@end
