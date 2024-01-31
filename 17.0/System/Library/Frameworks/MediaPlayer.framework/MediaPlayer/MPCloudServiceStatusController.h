@class ICUserIdentity, SSVSubscriptionStatus, NSString, NSMutableDictionary, ICMusicSubscriptionStatus, SSVFairPlaySubscriptionStatus, NSObject, ICMusicSubscriptionFairPlayKeyStatus, ICMusicSubscriptionStatusMonitor;
@protocol OS_dispatch_queue, NSCopying;

@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_cloudLibraryStatusAccessQueue;
    long long _cloudLibraryStatus;
    unsigned long long _cloudLibraryObservationCount;
    BOOL _hasLoadedMatchStatus;
    BOOL _hasLoadedSubscriptionAvailability;
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;
    id<NSCopying> _subscriptionStatusObservationToken;
    unsigned long long _matchStatusObservationCount;
    unsigned long long _matchStatus;
    BOOL _observingNetworkReachability;
    BOOL _hasSubscriptionLease;
    BOOL _shouldPlaybackRequireSubscriptionLease;
    BOOL _subscriptionAvailable;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *globalSerialQueue;
@property (class, readonly, nonatomic) NSMutableDictionary *controllers;
@property (class, readonly, nonatomic) MPCloudServiceStatusController *sharedController;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property (readonly, nonatomic) ICMusicSubscriptionFairPlayKeyStatus *lastKnownSubscriptionFairPlayKeyStatus;
@property (readonly, nonatomic) unsigned long long matchStatus;
@property (readonly, nonatomic) BOOL hasLoadedSubscriptionAvailability;
@property (readonly, nonatomic, getter=isSubscriptionAvailable) BOOL subscriptionAvailable;
@property (readonly, copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus;
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatus *musicSubscriptionStatus;
@property (readonly, nonatomic) BOOL shouldPlaybackRequireSubscriptionLease;
@property (readonly, nonatomic, getter=isCloudLibraryEnabled) BOOL cloudLibraryEnabled;
@property (readonly, nonatomic, getter=isPurchaseHistoryEnabled) BOOL purchaseHistoryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cloudServiceStatusControllerWithUserIdentity:(id)a0 createIfRequired:(BOOL)a1;
+ (void)_postNotificationName:(id)a0 controller:(id)a1 userInfo:(id)a2;
+ (void)_postNotificationName:(id)a0 controller:(id)a1;
+ (id)cloudServiceStatusControllerWithUserIdentity:(id)a0;

- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)beginObservingCloudLibraryEnabled;
- (void)_copyObservationStateFrom:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_beginObservingCloudLibraryEnabled;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)_beginObservingMatchStatus;
- (void)endObservingMatchStatus;
- (void)_updateMatchStatus;
- (BOOL)_currentCloudLibraryEnabled;
- (void)_enableICMLErrorReasonChange:(id)a0;
- (void)beginObservingMatchStatus;
- (void)_endObservingCloudLibraryEnabled;
- (void)_userIdentityStoreDidChange:(id)a0;
- (void)refreshMusicSubscriptionStatus;
- (BOOL)_handlesSameAccountAs:(id)a0;
- (void)beginObservingPurchaseHistoryEnabled;
- (void).cxx_destruct;
- (void)endObservingFairPlaySubscriptionStatus;
- (BOOL)_currentPurchaseHistoryEnabled;
- (void)endObservingSubscriptionAvailability;
- (void)_cloudClientAuthenticationDidChange;
- (id)_initWithUserIdentity:(id)a0;
- (void)_endObservingMatchStatus;
- (BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(BOOL *)a0;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingCloudLibraryEnabled;
- (void)_updateSubscriptionAvailability;
- (void)_updateSubscriptionAvailabilityWithValue:(BOOL)a0;
- (void)_performBlockOnControllerHandlingTheSameAccount:(id /* block */)a0;
- (void)beginObservingSubscriptionAvailability;
- (void)_allowsMusicSubscriptionDidChange:(id)a0;

@end
