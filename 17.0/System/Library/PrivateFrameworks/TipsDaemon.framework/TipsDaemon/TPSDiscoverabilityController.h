@class NSString, NSMutableDictionary, NSDictionary, TPSEventsHistoryController, TPSTipStatusController, TPSEventsProviderManager, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate> {
    long long _overrideHintMaxDisplayedCount;
    NSMutableSet *_registeredEventIdentifiers;
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSMutableDictionary *_contextualInfoMap;
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;
    NSObject<OS_dispatch_queue> *_eventResultsProcessingQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextualInfoQueue;
@property (weak, nonatomic) id<TPSDiscoverabilityControllerDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *contextualInfoMap;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (readonly, copy, nonatomic) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextualInfoMap;
+ (void)removeContextualInfoCache;

- (id)monitoringEventsForContentID:(id)a0;
- (BOOL)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)a0;
- (id)discoverabilityTipWithMetadata:(id)a0 contentDictionary:(id)a1 preconditions:(id)a2;
- (id)init;
- (id)contextualInfoIdentifiers;
- (id)initWithTipStatusController:(id)a0;
- (void)updateIdentifier:(id)a0 withContextualInfo:(id)a1;
- (void)markHintIneligibleForIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (void)removeAllContextualInfos;
- (void)dataProviderManager:(id)a0 didFinishQueryWithResults:(id)a1 type:(long long)a2;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifiers:(id)a0;
- (void)_removeCacheData;
- (BOOL)_isConditionMet:(id)a0 hasUpdates:(BOOL *)a1 forIdentifier:(id)a2;
- (id)contextualInfoMap;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)a0 context:(id)a1;
- (BOOL)isContextualInfoExistForIdentifier:(id)a0;
- (void)updateContentViewedForIdentifier:(id)a0;
- (void)_registerWakingCallbackForContextualInfo:(id)a0;
- (void)processEventProviderQueryResults:(id)a0 type:(long long)a1;
- (void)markHintIneligibleForIdentifiers:(id)a0 context:(id)a1 reason:(long long)a2;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0 updateCache:(BOOL)a1;
- (void)removeContextualInfoForIdentifiers:(id)a0;
- (long long)customizationIDForContentID:(id)a0;
- (void).cxx_destruct;
- (id)contextualInfoForIdentifier:(id)a0;
- (void)contextualEligibilityWithTipIdentifiers:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 experimentCampChangesToAll:(BOOL)a3;
- (void)_cleanupContextualInfoMap;
- (void)updateHintDismissedForIdentifier:(id)a0 dismissType:(id)a1 context:(id)a2;
- (BOOL)_updateTriggerConditionForObserverIdentifiers:(id)a0;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0;
- (void)_updateRegisteredEventIdentifiers;
- (void)_reconcileRegisteredEvents;
- (BOOL)updateDesiredOutcomeConditionForObserverIdentifers:(id)a0;
- (void)queryCurrentEvents;
- (void)dataProviderManager:(id)a0 didReceiveCallbackWithResult:(id)a1 type:(long long)a2;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)a0 forObserverIdentifiers:(id)a1 hasUpdates:(BOOL *)a2;
- (void)_updateContextualInfoMapCache;
- (void)addHintDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)_updateCacheData;

@end
