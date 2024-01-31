@interface PRUISwitcherSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

+ (id)diffInspectorForObservingDiffContext;

- (void)_observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeTrailingTopButtonFrameWithBlock:(id /* block */)a0;
- (void)observeLockPosterLiveContentLayerWithBlock:(id /* block */)a0;
- (void)observeVibrancyConfigurationWithBlock:(id /* block */)a0;
- (void)observeLockPosterFloatingLayerInlinedWithBlock:(id /* block */)a0;
- (void)observeLeadingTopButtonFrameWithBlock:(id /* block */)a0;
- (void)observeLockPosterLiveFloatingLayerWithBlock:(id /* block */)a0;
- (void)observeLockPosterOverlayLayerWithBlock:(id /* block */)a0;
- (void)observePreferredSwitcherLayoutModeWithBlock:(id /* block */)a0;
- (void)observeLockPosterComplicationRowHiddenWithBlock:(id /* block */)a0;

@end
