@class NSXPCConnection, NSString, NSError, NSUUID, MSVDefaultDictionary, NSObject, NSMutableSet, ICCloudServerListenerEndpointProvider;
@protocol OS_dispatch_source;

@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient> {
    NSXPCConnection *_cloudServiceStatusMonitorConnection;
    NSError *_cloudServiceStatusMonitorConnectionEstablishmentError;
    NSMutableSet *_activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
    ICCloudServerListenerEndpointProvider *_listenerEndpointProvider;
    long long _privacyAcknowledgementPolicy;
    unsigned long long _observingCloudServiceStatusRequestsCount;
    NSUUID *_observationToken;
    NSString *_transactionIdentifierForActiveObservationToken;
    int _cloudServerLaunchedNotifyToken;
    NSObject<OS_dispatch_source> *_cloudServerLaunchTimeoutTimer;
    unsigned long long _capabilities;
    BOOL _hasValidCapabilities;
    NSString *_storefrontCountryCode;
    NSString *_storefrontIdentifier;
    MSVDefaultDictionary *_developerTokenCompletionHandlers;
    MSVDefaultDictionary *_userTokenCompletionHandlers;
    MSVDefaultDictionary *_tokensCompletionHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property long long privacyAcknowledgementPolicy;
@property (readonly, getter=isObservingCloudServiceStatus) BOOL observingCloudServiceStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hasEntitlementForStatusAccessExemptedFromUserConsentRequirement;

- (void)_cancelCloudServerLaunchedNotifyToken;
- (void)beginObservingCloudServiceStatus;
- (BOOL)_locked_isObservingCloudServiceStatus;
- (id)init;
- (void)_updateWithStorefrontCountryCode:(id)a0 transactionIdentifier:(id)a1;
- (void)dealloc;
- (void)storefrontIdentifierDidChange:(id)a0;
- (void)requestUserTokenForDeveloperToken:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authorizationStatusForScopes:(long long)a0;
- (void)_didBeginObservingCloudServiceStatusWithToken:(id)a0 transactionIdentifier:(id)a1;
- (void)requestAuthorizationForScopes:(long long)a0 completionHandler:(id /* block */)a1;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)_invalidateCloudServerLaunchTimeoutTimer;
- (void)_didEndRequestingTokenWithTransactionIdentifier:(id)a0;
- (void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
- (void)_beginObservingCloudServiceStatus;
- (void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)a0;
- (void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
- (void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)a0;
- (void)storefrontCountryCodeDidChange:(id)a0;
- (id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)a0 error:(id *)a1;
- (void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(BOOL)a0;
- (void)_didEndObservingCloudServiceStatusWithToken:(id)a0 transactionIdentifier:(id)a1;
- (void)requestDeveloperTokenWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_requestCapabilitiesWithPrivacyPromptPolicy:(long long)a0 requestCapabilitiesWithCompletionHandler:(id /* block */)a1;
- (void)requestMusicKitTokensWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)a0;
- (void)requestUserTokenForDeveloperToken:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)activeAccountDidChange;
- (void).cxx_destruct;
- (void)_registerCloudServerLaunchedNotifyToken;
- (void)_scheduleCloudServerLaunchTimeoutTimer;
- (void)_updateWithStorefrontIdentifier:(id)a0 transactionIdentifier:(id)a1;
- (void)_cloudServiceStatusMonitorConnectionWasInterrupted;
- (void)_endObservingCloudServiceStatusWithToken:(id)a0;
- (void)_recoverObservingCloudServiceStatus;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;
- (void)_requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)revokeMusicKitUserTokensForAccountDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_performCloudServiceStatusMonitorRequestWithDescription:(id)a0 requestHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)_cloudServiceStatusMonitorConnectionWasInvalidated;
- (void)_refreshCloudServiceStatus;
- (void)endObservingCloudServiceStatus;
- (void)_updateWithCapabilities:(unsigned long long)a0 hasValidCapabilities:(BOOL)a1 transactionIdentifier:(id)a2;
- (void)_validateAuthorizationExpiryWithCompletionHandler:(id /* block */)a0;
- (void)capabilitiesDidChange:(unsigned long long)a0;
- (void)_requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;

@end
