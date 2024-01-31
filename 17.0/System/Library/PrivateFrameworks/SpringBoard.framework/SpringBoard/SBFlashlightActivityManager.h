@class SBFlashlightAlertElement, NSString, SBSystemActionCompoundPreviewAssertion, SBFlashlightActivityElement, SBUIFlashlightController, SBWindowScene;
@protocol SAInvalidatable;

@interface SBFlashlightActivityManager : NSObject <SBUIFlashlightObserver, SBFlashlightActivityElementDelegate> {
    SBFlashlightActivityElement *_flashlightActivityElement;
    SBFlashlightAlertElement *_flashlightUnavailableAlertElement;
    SBSystemActionCompoundPreviewAssertion *_compoundPreviewAssertion;
    id<SAInvalidatable> _flashlightActivityAssertion;
    id<SAInvalidatable> _flashlightUnavailableAlertAssertion;
    BOOL _shouldShowUIForFlashlightLevel;
    SBWindowScene *_windowScene;
    SBUIFlashlightController *_flashlightController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (void)flashlightOverheatedDidChange:(BOOL)a0;
- (void)flashlightActivityElementRequestsTogglingFlashlight:(id)a0;

@end
