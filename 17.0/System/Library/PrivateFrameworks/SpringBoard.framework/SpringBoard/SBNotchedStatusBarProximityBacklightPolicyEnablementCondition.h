@class NSString, NSSet, SpringBoard, SBMainDisplaySceneManager, SBWindowSceneStatusBarManager, SBWindowSceneStatusBarAssertionManager, UIStatusBarServer, UIApplicationSceneSettingsDiffInspector;
@protocol SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate;

@interface SBNotchedStatusBarProximityBacklightPolicyEnablementCondition : NSObject <SBWindowSceneStatusBarAssertionManagerObserver, SBMainDisplaySceneManagerObserver, SBDeviceApplicationSceneHandleObserver, UIStatusBarServerClient, SBUIActiveOrientationObserver, BSInvalidatable> {
    SpringBoard *_orientationProvider;
    UIStatusBarServer *_statusBarConnection;
    SBWindowSceneStatusBarManager *_windowSceneStatusBarManager;
    SBWindowSceneStatusBarAssertionManager *_statusBarAssertionManager;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    UIApplicationSceneSettingsDiffInspector *_applicationSceneSettingsDiffInspector;
    NSSet *_currentBackgroundActivityIdentifiers;
    BOOL _invalidated;
}

@property (weak, nonatomic) id<SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> delegate;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) double enabledStatusBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)statusBarServer:(id)a0 didReceiveStatusBarData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a1 withActions:(int)a2;
- (id)init;
- (void)dealloc;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)invalidate;
- (void)statusBarServer:(id)a0 didReceiveStyleOverrides:(unsigned long long)a1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void).cxx_destruct;
- (void)statusBarServer:(id)a0 didReceiveDoubleHeightStatusString:(id)a1 forStyle:(long long)a2;
- (void)statusBarServer:(id)a0 didReceiveGlowAnimationState:(BOOL)a1 forStyle:(long long)a2;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_evaluateEnablement;
- (void)_setEnabled:(BOOL)a0 statusBarHeight:(double)a1;
- (id)initWithMainDisplaySceneManager:(id)a0 windowSceneStatusBarManager:(id)a1 statusBarServer:(id)a2 orientationProvider:(id)a3;
- (void)statusBarAssertionManager:(id)a0 statusBarSettingsDidChange:(id)a1;

@end
