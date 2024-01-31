@class NSString, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet, NSMutableArray;

@interface SBActivitySystemApertureElementObserver : NSObject <ACUISSystemApertureSceneHandleDelegate, SBActivityObserver> {
    NSMutableDictionary *_sceneHandleByActivityIdentifier;
    NSMutableDictionary *_elementAssertionByActivityIdentifier;
    NSMutableDictionary *_elementByActivityIdentifier;
    NSMutableDictionary *_activeItemByActivityIdentifier;
    NSMutableDictionary *_contentPayloadIDsByActivityIdentifier;
    NSMutableDictionary *_prominenceStateByActivityIdentifier;
    NSMutableArray *_pendingItems;
    NSMutableSet *_activeWidgetActivitiesWithSceneHandles;
    NSMutableOrderedSet *_pendingAlerts;
    NSMutableSet *_ongoingActivities;
    NSMutableDictionary *_alertingAssertionsByActivityIdentifier;
    BOOL _preparingElementForPendingAlert;
    long long _activityEnvironment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (void)_presentAlert:(id)a0;
- (void)presentAlert:(id)a0;
- (void)_unlockAndLaunchAppIfPossible:(id)a0 withAction:(id)a1;
- (void)activityDidEnd:(id)a0;
- (void)_presentPendingAlertIfNecessary;
- (void)activityProminenceChanged:(BOOL)a0 item:(id)a1;
- (BOOL)_activityAlertIsPendingForIdentifier:(id)a0;
- (BOOL)_activityIsPendingForIdentifier:(id)a0;
- (void)_addPendingItemIfNecessary:(id)a0;
- (BOOL)_canPresentAlert:(id)a0;
- (BOOL)_canRegisterElementForActivityItem:(id)a0;
- (void)_cleanUpAlertPresentation:(id)a0;
- (void)_cleanUpInvalidRegisteredElements;
- (void)_createAndActivateElementForActivityItem:(id)a0 completion:(id /* block */)a1;
- (void)_createAndActivateSystemApertureElementWithScene:(id)a0 item:(id)a1 completion:(id /* block */)a2;
- (id)_createSceneHandle:(id)a0;
- (id)_createSystemApertureSceneHandleWithItem:(id)a0;
- (BOOL)_hasValidAlertingAssertion;
- (void)_invalidateSystemApertureElementForItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isActivityOngoing:(id)a0;
- (BOOL)_isContentReadyForAlert:(id)a0;
- (id)_pendingItemForAlert:(id)a0;
- (void)_prepareAndPresentActivityAlert:(id)a0;
- (void)_prepareForAlertingActivityIfNecessary:(id)a0 completion:(id /* block */)a1;
- (void)_presentOrPendActivityAlert:(id)a0;
- (void)_presentPendingAlertIfNecessaryForActivityIdentifier:(id)a0;
- (void)_registerSystemApertureElementForPendingActivityIfNecessary;
- (BOOL)_registeredElementExistsForBundleIdentifier:(id)a0;
- (id)_registeredElementForBundleIdentifier:(id)a0;
- (void)_removePendingItem:(id)a0;
- (void)_removeSystemApertureSceneHandleWithItem:(id)a0;
- (void)_sendAnalyticsEventWithPayloadBuilder:(id /* block */)a0;
- (BOOL)_shouldSwapActivityItem:(id)a0 withOtherItem:(id)a1;
- (void)_storeSceneHandle:(id)a0 item:(id)a1;
- (void)_swapActivityItem:(id)a0 withItem:(id)a1;
- (void)_swapItemWithRegisteredItemIfNecessary:(id)a0;
- (BOOL)_systemApertureElementAssertionExistsForBundleIdentifier:(id)a0;
- (void)_updatePendingItemWithItem:(id)a0;
- (void)_updateSystemApertureElementProminence:(BOOL)a0 item:(id)a1;
- (void)activityDidDismiss:(id)a0;
- (void)activityDidStart:(id)a0;
- (void)activityDidUpdate:(id)a0;
- (void)activityEnvironmentChanged:(long long)a0;
- (void)activitySystemApertureSceneHandle:(id)a0 requestsLaunchWithAction:(id)a1;
- (void)activitySystemApertureSceneHandle:(id)a0 updatedContentPayloadID:(id)a1;
- (void)activityWasBlockedForItem:(id)a0;
- (void)activityWasUnblockedForItem:(id)a0;
- (BOOL)shouldHandleActivityItem:(id)a0;

@end
