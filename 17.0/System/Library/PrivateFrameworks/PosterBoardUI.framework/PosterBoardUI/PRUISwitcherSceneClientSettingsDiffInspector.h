@interface PRUISwitcherSceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector

+ (id)diffInspectorForObservingDiffContext;

- (void)_observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observePrimaryPosterOffsetWithBlock:(id /* block */)a0;
- (void)observePrimaryPosterScaleWithBlock:(id /* block */)a0;
- (void)observeSwitcherContextIDWithBlock:(id /* block */)a0;
- (void)observeSwitcherLayoutModeWithBlock:(id /* block */)a0;

@end
