@class NISession;

@interface NICarKeyEventNotifier : NSObject {
    NISession *parentSession;
}

- (void).cxx_destruct;
- (id)initWithParentSession:(id)a0;
- (void)notifyRangingIntentSentToVehicleWithReason:(long long)a0;
- (void)notifyVehicleLockedWithReason:(long long)a0;
- (void)notifyVehicleReadyToDriveWithReason:(long long)a0;
- (void)notifyVehicleTerminatedRangingSession;
- (void)notifyVehicleUnlockedWithReason:(long long)a0;

@end
