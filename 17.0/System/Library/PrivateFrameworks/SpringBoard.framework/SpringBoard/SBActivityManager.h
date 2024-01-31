@class DMFApplicationPolicyMonitor, ACActivityProminenceListener, ACActivityCenter, SBLiveActivitySettings, SBSoundController, NSMutableDictionary, NSString, NSHashTable, ACUISActivityAlertClient, NSObject, NSMapTable;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBActivityManager : NSObject <ACUISActivityAlertClientDelegate, PTSettingsKeyPathObserver, SBActivityObservable> {
    NSMapTable *_bannerPresentableByActivityIdentifier;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_activityProminenceQueue;
}

@property (retain, nonatomic) ACActivityCenter *activityCenter;
@property (retain, nonatomic) ACUISActivityAlertClient *activityAlertClient;
@property (retain, nonatomic) id<BSInvalidatable> activitySubscription;
@property (retain, nonatomic) id<BSInvalidatable> activityExceedingReducedPushBudgetSubscription;
@property (retain, nonatomic) id<BSInvalidatable> activityAlertSubscription;
@property (retain, nonatomic) SBSoundController *soundController;
@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor;
@property (retain, nonatomic) NSMutableDictionary *itemByActivityIdentifier;
@property (retain, nonatomic) NSMutableDictionary *itemsByBundleIdentifier;
@property (retain, nonatomic) NSMutableDictionary *prominenceAssertionByActivityIdentifier;
@property (retain, nonatomic) ACActivityProminenceListener *prominenceListener;
@property (retain, nonatomic) SBLiveActivitySettings *activitySettings;
@property (nonatomic) long long environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (id)init;
- (id)activities;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_removeAllObservers;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_handleActivityExceedingReducedPushBudgetWithIdentifier:(id)a0;
- (void)_updateAllApplicationMonitoringPolicies;
- (void)_updateForScreenTimeLimitForBundleId:(id)a0 policy:(id)a1;
- (void)_activityBlocked:(BOOL)a0 item:(id)a1;
- (void)_activityDismissedWithContentUpdate:(id)a0;
- (void)_activityFinishedWithContentUpdate:(id)a0;
- (id)_activityLifecyclePayloadWithContentUpdate:(id)a0;
- (void)_activityStartedOrUpdatedWithContentUpdate:(id)a0;
- (void)_addAppActivitiesRecordForBundleId:(id)a0 item:(id)a1;
- (void)_dismissActivityAlert:(id)a0;
- (void)_handleActivityWithContentUpdate:(id)a0;
- (void)_hideAllActivities:(BOOL)a0;
- (void)_invalidateAllProminenceAssertion;
- (void)_invalidateProminenceAssertionForActivityIdenfier:(id)a0;
- (void)_presentActivityAlert:(id)a0;
- (void)_publishProminenceUpdate:(BOOL)a0 item:(id)a1;
- (void)_queue_invalidateProminenceAssertionForActivityIdenfier:(id)a0;
- (void)_removeAppActivitiesRecordForBundleId:(id)a0 item:(id)a1;
- (void)_sendAnalyticsEventWithPayloadBuilder:(id /* block */)a0;
- (void)_sendAnalyticsLifecycleEventIfNecessaryWithContentUpdate:(id)a0;
- (void)activityAlertClient:(id)a0 dismissAlertProvider:(id)a1;
- (void)activityAlertClient:(id)a0 presentAlertProvider:(id)a1 completion:(id /* block */)a2;
- (void)cancelObservingActivityUpdates;
- (id)firstPartyActivityGroupingIdentifiers;
- (BOOL)isActivitySupported;
- (void)startObservingActivityUpdates;

@end
