@class VSSetTopBoxProfile, VSIdentityProvider, NSString, NSOperationQueue, VSAnalyticsServiceConnection, VSRemoteNotifier, NSObject, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSMetricsCenter : NSObject <VSRemoteNotifierDelegate, VSManagedProfileConnectionObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSIdentityProvider *currentIdentityProvider;
@property (nonatomic) BOOL currentIdentityProviderSupportsSTB;
@property (nonatomic) BOOL currentIdentityProviderIsFullySupported;
@property (nonatomic) BOOL fetchedSetTopBoxProfile;
@property (retain, nonatomic) VSSetTopBoxProfile *stbProfile;
@property (retain, nonatomic) VSAnalyticsServiceConnection *analyticsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMetricsCenter;

- (id)userID;
- (id)init;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)accountStoreDidChange;
- (BOOL)currentProviderIsSetTopBoxProvider;
- (void)fetchSetTopBoxProfile;
- (id)flexibleBaseFields;
- (BOOL)hasSetTopBoxProfile;
- (id)mutableBaseFields;
- (void)profileConnectionProfileChanged:(id)a0;
- (void)recordClickEventWithPage:(id)a0 pageType:(id)a1 target:(id)a2;
- (void)recordEnterEventWithPage:(id)a0 pageType:(id)a1;
- (void)recordExitEventWithPage:(id)a0 pageType:(id)a1;
- (void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)a0;
- (void)recordMetadataRequestWithProviderIdentifier:(id)a0 channelAdamID:(id)a1 fulfilledByProvider:(BOOL)a2 error:(id)a3;
- (void)recordSTBOptOutEventWithError:(id)a0;
- (void)recordSignInEventWithProviderIdentifier:(id)a0 supportedProvider:(BOOL)a1 channelAdamID:(id)a2 signInType:(id)a3 error:(id)a4;
- (void)recordSignOutEventWithProviderIdentifier:(id)a0;
- (void)sendClickEventToAnalyticsServiceWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (void)sendEnterEventToAnalyticsServiceWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (void)sendExitEventToAnalyticsServiceWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (void)sendFlexibleEventToAnalyticsService:(id)a0 data:(id)a1;
- (id)underlyingErrorsArray:(id)a0;

@end
