@class SBLockScreenPluginAction, NSString, SBLockScreenPluginAppearanceContext, _UILegibilitySettings, CSAppearance, SBLockOverlayContext, CSBehavior, UIViewController, BSPluginBundle, NSMutableArray, FBProcess;
@protocol SBLockScreenPluginViewController, SBLockScreenPluginController, SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginDelegate;

@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController> {
    BSPluginBundle *_bundle;
    FBProcess *_process;
    SBLockScreenPluginAppearanceContext *_appearance;
    NSMutableArray *_lifecycleObservers;
}

@property (weak, nonatomic) id<SBLockScreenPluginDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id<SBLockScreenPluginController> controller;
@property (readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *viewController;
@property (readonly, nonatomic) SBLockScreenPluginAppearanceContext *appearance;
@property (readonly, nonatomic) SBLockScreenPluginAction *unlockAction;
@property (readonly, nonatomic) CSAppearance *coverSheetAppearance;
@property (readonly, nonatomic) CSBehavior *coverSheetBehavior;
@property (retain, nonatomic) SBLockOverlayContext *overlay;
@property (copy, nonatomic) id /* block */ auxiliaryActivationAnimationBlock;
@property (copy, nonatomic) id /* block */ auxiliaryDeactivationAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBLockScreenPluginAgent> pluginAgent;
@property (readonly, nonatomic) long long pluginPriority;
@property (readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (readonly, nonatomic) id<SBLockScreenPluginAppearance> pluginAppearance;
@property (readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (id)_pluginBundleForPluginWithName:(id)a0;
+ (id)pluginWithName:(id)a0 activationContext:(id)a1;

- (void)dealloc;
- (void)pluginController:(id)a0 updateAppearance:(id)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)pluginController:(id)a0 sendAction:(id)a1;
- (void)processDidExit:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)deactivatePluginController:(id)a0;
- (void)activatePluginController:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_updateAppearance:(id)a0;
- (void)pluginDidDeactivateWithContext:(id)a0;
- (void)addLifecycleObserver:(id)a0;
- (void)enumerateLifecycleObserversUsingBlock:(id /* block */)a0;
- (BOOL)handleDashBoardEvent:(id)a0;
- (id)initWithBundle:(id)a0 activationContext:(id)a1;
- (BOOL)isCapabilityRestricted:(unsigned long long)a0;
- (BOOL)isElementHidden:(long long)a0;
- (id)overrideForElement:(long long)a0;
- (BOOL)pluginHandleEvent:(long long)a0;
- (void)pluginWillActivateWithContext:(id)a0;
- (void)removeLifecycleObserver:(id)a0;

@end
