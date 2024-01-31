@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {
    unsigned long long _options;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}

- (id)appLayoutsToResignActive;
- (double)homeScreenAlpha;
- (BOOL)_shouldSimplifyForOpenFolder;
- (id)initWithSimplificationOptions:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (double)homeScreenScale;
- (BOOL)_shouldResignActiveAppsUnderFloatingApp;
- (double)wallpaperScale;
- (BOOL)_shouldSimplifyForWidgetCenterAndLibrary;
- (id)handleTransitionEvent:(id)a0;

@end
