@class NSString, SBAppClipOverlayViewController, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationAppClipOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver> {
    SBAppClipOverlayViewController *_appClipViewController;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didChangeEffectiveForegroundness:(BOOL)a1;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)dealloc;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (BOOL)wantsResignActiveAssertion;
- (void)_activateIfPossible;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)_updateOverlaySceneActivationState;
- (void).cxx_destruct;
- (void)_deactivateIfPossible;
- (id)_realOverlayViewController;

@end
