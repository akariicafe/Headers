@class PETDistributionEventTracker, PETGoalConversionEventTracker;

@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_unlockTracker;
    PETDistributionEventTracker *_sessionTimeTracker;
    double _screenOnTimestamp;
    struct { BOOL usedQuickActionButton; BOOL scrolledInNotifications; BOOL longLookedNotification; BOOL interactedNotification; BOOL clearedNotifications; BOOL activatedCamera; BOOL prewarmedCameraFalsePositive; BOOL cameraSwipeFailed; BOOL activatedControlCenter; BOOL activatedSpotlight; BOOL unlockDismissed; } _sessionInteractions;
    BOOL _shouldReport;
}

- (id)init;
- (void)_trackSessionWithDuration:(double)a0;
- (BOOL)_determineIfShouldReport;
- (void)_trackUnlockOpportunity;
- (void).cxx_destruct;
- (void)_trackUnlockConversion:(BOOL)a0;

@end
