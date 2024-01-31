@class NSString, SBBacklightController, BSCompoundAssertion, AMMotionDetectionTriggerManager;
@protocol SBMotionDetectionWakeControllerDelegate;

@interface SBMotionDetectionWakeController : NSObject <AMMotionDetectionTriggerManagerObserver, SBBacklightControllerObserver> {
    BSCompoundAssertion *_enablementAssertions;
    AMMotionDetectionTriggerManager *_triggerManager;
    SBBacklightController *_backlightController;
}

@property (nonatomic, getter=_isRequested, setter=_setRequested:) BOOL requested;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled;
@property (nonatomic, getter=isMotionDetected, setter=_setMotionDetected:) BOOL motionDetected;
@property (weak, nonatomic) id<SBMotionDetectionWakeControllerDelegate> delegate;
@property (nonatomic) BOOL requireScreenOff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backlightController:(id)a0 didTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_evaluateEnablement;
- (id)acquireMotionDetectionWakeAssertionForReason:(id)a0;
- (void)motionDetectionManager:(id)a0 didUpdateMotionDetectionTriggerState:(unsigned long long)a1;

@end
