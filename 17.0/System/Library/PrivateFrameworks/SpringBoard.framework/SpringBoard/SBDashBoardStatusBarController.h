@class SBWindowSceneStatusBarManager, NSString, SBWindowSceneStatusBarSettingsAssertion, NSMutableSet, NSMapTable, NSNumber, _UILegibilitySettings;

@interface SBDashBoardStatusBarController : NSObject <CSStatusBarControlling> {
    NSMutableSet *_statusBarHiddenReasons;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarParametersAssertion;
    SBWindowSceneStatusBarManager *_windowSceneStatusBarManager;
    NSMutableSet *_statusBars;
    NSMapTable *_statusBarsToVisbilityAssertions;
}

@property (readonly, nonatomic) NSNumber *statusBarAlpha;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) _UILegibilitySettings *statusBarLegibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_enumerateStatusBarsAndPartAssertions:(id /* block */)a0;
- (void)clearStatusBarParameters;
- (void)setStatusBarAlpha:(id)a0 style:(long long)a1 legibilitySettings:(id)a2;
- (id)initWithWindowSceneStatusBarManager:(id)a0;
- (void).cxx_destruct;
- (void)destroyFakeStatusBar:(id)a0;
- (void)setStatusBarHidden:(BOOL)a0 forReason:(id)a1;
- (id)createFakeStatusBarWithReason:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setStatusBarPart:(unsigned long long)a0 hidden:(BOOL)a1 animationDuration:(double)a2;
- (id)effectiveStatusBarStyleRequestForAlpha:(id)a0 style:(long long)a1 legibilitySettings:(id)a2;

@end
