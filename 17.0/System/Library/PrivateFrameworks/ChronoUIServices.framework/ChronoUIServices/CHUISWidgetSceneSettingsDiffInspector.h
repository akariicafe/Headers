@interface CHUISWidgetSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

- (void)observePrefersUnredactedContentInLowLuminanceEnvironmentWithBlock:(id /* block */)a0;
- (void)observeWidgetConfigurationIdentifierBlock:(id /* block */)a0;
- (void)observeShowsWidgetLabelWithBlock:(id /* block */)a0;
- (void)observeMetricsWithBlock:(id /* block */)a0;
- (void)observeVisibleEntryShouldSnapshotWithBlock:(id /* block */)a0;
- (void)observeClipBehaviorWithBlock:(id /* block */)a0;
- (void)observeWidgetPriorityWithBlock:(id /* block */)a0;
- (void)observeSupportsLowLuminanceWithBlock:(id /* block */)a0;
- (void)observeTintingParametersWithBlock:(id /* block */)a0;
- (void)observeWidgetWithBlock:(id /* block */)a0;
- (void)observeInlineTextParametersWithBlock:(id /* block */)a0;
- (void)observeContentPausedWithBlock:(id /* block */)a0;
- (void)observeRenderSchemeWithBlock:(id /* block */)a0;
- (void)observeVisibilityWithBlock:(id /* block */)a0;
- (void)observeCanAppearInSecureEnvironmentWithBlock:(id /* block */)a0;
- (void)inspectDiff:(id)a0 withContext:(id)a1;
- (void)_observerForKey:(long long)a0 observer:(id /* block */)a1;
- (void)observeColorSchemeWithBlock:(id /* block */)a0;
- (void)observeInteractionDisabledWithBlock:(id /* block */)a0;
- (void)observeContentTypeWithBlock:(id /* block */)a0;
- (void)observeAnimationsPausedWithBlock:(id /* block */)a0;

@end
