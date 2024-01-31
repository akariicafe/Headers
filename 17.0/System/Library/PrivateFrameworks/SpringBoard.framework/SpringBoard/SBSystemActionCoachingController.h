@class NSString, SBSystemActionCoachingSettings, SBDoNotDisturbStateMonitor, SBHUDController, SBRingerControl, SBFlashlightActivityManager, SBApplicationController, SBFailingSystemGestureRecognizer;
@protocol SBSystemActionCoachingPolicy;

@interface SBSystemActionCoachingController : NSObject <PTSettingsKeyObserver, SBSystemActionCoachingHUDViewControllerDelegate, SBSystemGestureRecognizerDelegate, SBSystemActionPreviewCoordinatorObserving> {
    SBHUDController *_HUDController;
    SBRingerControl *_ringerControl;
    SBApplicationController *_applicationController;
    SBDoNotDisturbStateMonitor *_doNotDisturbStateMonitor;
    SBFlashlightActivityManager *_flashlightActivityManager;
    SBSystemActionCoachingSettings *_settings;
    id<SBSystemActionCoachingPolicy> _policy;
    SBFailingSystemGestureRecognizer *_dismissGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_gestureRecognizerFailed:(id)a0;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_backlightLevelChanged:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_volumeButtonPressed:(id)a0;
- (void)systemActionCoachingHUDViewController:(id)a0 didBeginTransitionToState:(long long)a1;
- (void)systemActionPreviewCoordinator:(id)a0 didBeginPreview:(id)a1 forAction:(id)a2;
- (void)systemActionPreviewCoordinator:(id)a0 didEndPreview:(id)a1 forAction:(id)a2 withResult:(unsigned long long)a3;
- (void)systemActionPreviewCoordinator:(id)a0 didInvalidateExpansionOfPreview:(id)a1 forAction:(id)a2 withResult:(unsigned long long)a3;

@end
