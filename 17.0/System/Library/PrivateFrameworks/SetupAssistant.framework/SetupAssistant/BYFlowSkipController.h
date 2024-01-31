@class FLFollowUpController;
@protocol NSObject, BYCapabilities;

@interface BYFlowSkipController : NSObject {
    FLFollowUpController *_followUpController_doNotAccessDirectly;
    id<NSObject> _wfNetworkChangeObserver;
}

@property (retain, nonatomic) id<BYCapabilities> capabilities;

+ (id)sharedInstance;
+ (id)_actionForFlowSkipIdentifiers:(id)a0;
+ (id)_actionIdentifierForFlowSkipIdentifier:(id)a0;
+ (void)_clearShouldObserveChangeFromNetworkSSID;
+ (id)_flowSkipIdentifierFromActionIdentifier:(id)a0;
+ (id)_localizedStringListingFlowSkipIdentifiers:(id)a0;
+ (void)_setShouldObserveChangeFromNetworkSSID:(id)a0;
+ (BOOL)_shouldObserveChangeFromNetworkSSID:(id *)a0;
+ (id)_supportedIdentifiers;
+ (id)flowSkipIdentifiersFromFollowUpAction:(id)a0;

- (id)init;
- (void)registerActivities;
- (id)_followUpController;
- (void).cxx_destruct;
- (void)unregisterActivities;
- (BOOL)_isPasscodeSet;
- (void)didCompleteFlow:(id)a0;
- (BOOL)_isBasicFunctionalityEnabled;
- (id)_pendingFollowUpItem;
- (void)_persistInitialNetworkSSID;
- (void)_postFollowUpItemForFlowSkipIdentifiers:(id)a0 previousFollowUpItem:(id)a1 forceNotification:(BOOL)a2;
- (void)_registerWiFiObserverActivityWithNeedsActivity:(BOOL)a0 handlerQueue:(id)a1;
- (void)_repostExistingFollowUpItemForcingNotification:(id)a0;
- (long long)_timeIntervalForFrequentNotifications;
- (long long)_timeIntervalForNotifications;
- (long long)_timeIntervalForWifiObserver;
- (long long)_timeoutForWifiObserver;
- (void)cancelPendingFlows;
- (void)didSkipFlow:(id)a0;
- (id)getFlowSkipIdentifiers;
- (void)observeFinishSetupTriggers;
- (void)passcodeDidChange;
- (void)revisePendingFollowUpsForcingRepost:(BOOL)a0;
- (void)setBasicFunctionalityEnabled:(BOOL)a0;

@end
