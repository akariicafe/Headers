@class NSMutableSet, _UIFocusTreeLock, _UIScreenFocusSystemManager, UIWindowScene, _UIFocusActiveSceneObserver, UIView, _UIFocusDebugWindow, NSString, UIFocusSystem, _UIFocusGameControllerObserver, NSPointerArray, _UIFocusHardwareKeyboardObserver, _UIFocusScrollManager, NSArray, UIScene, UITraitCollection, _UIFocusMovementPerformer;
@protocol UIFocusEnvironment, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusBehavior, UICoordinateSpace;

@interface _UIFocusSystemSceneComponent : NSObject <_UIFocusEnvironmentInternal, _UISceneComponentProviding, _UIWindowSceneComponentProviding, _UIFocusEnvironmentPrivate, UIFocusItemContainer, _UIFocusRegionContainer> {
    NSMutableSet *_overrideFocusSystemEnablementIdentifiers;
    id<_UIFocusBehavior> _cachedFocusBehavior;
    BOOL _sceneIsValid;
}

@property (retain, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) _UIFocusHardwareKeyboardObserver *hardwareKeyboardObserver;
@property (readonly, nonatomic) _UIFocusGameControllerObserver *gameControllerObserver;
@property (readonly, nonatomic) _UIFocusDebugWindow *debugWindow;
@property (readonly, nonatomic) _UIFocusTreeLock *treeLock;
@property (readonly, nonatomic) NSPointerArray *preferredFocusEnvironmentOverride;
@property (readonly, nonatomic) _UIFocusMovementPerformer *movementPerformer;
@property (readonly, nonatomic) _UIFocusScrollManager *scrollManager;
@property (readonly, nonatomic) _UIScreenFocusSystemManager *screenManager;
@property (readonly, nonatomic) _UIFocusActiveSceneObserver *activeSceneObserver;
@property (readonly, nonatomic) id<_UIFocusBehavior> currentFocusBehavior;
@property (readonly, nonatomic, getter=_windowScene) UIWindowScene *windowScene;
@property (readonly, nonatomic) BOOL isOverrideFocusSystemEnabled;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;

+ (BOOL)__applicationIsSpringBoard;
+ (BOOL)needsFocusSystem;
+ (id)sceneComponentForFocusSystem:(id)a0;
+ (id)_screenForScene:(id)a0;
+ (id)sceneComponentForEnvironment:(id)a0;
+ (BOOL)_supportsInvalidatingFocusCache;

- (void)_windowHostingScene:(id)a0 didMoveFromScreen:(id)a1 toScreen:(id)a2;
- (id)_overridingPreferredFocusEnvironment;
- (void)_lockEnvironment:(id)a0;
- (void)setNeedsFocusUpdate;
- (void)_sceneWillInvalidate:(id)a0;
- (void)_focusBehaviorDidChange:(id)a0;
- (void)_updateWantsTreeLocking;
- (void)_resetFocusEventRecognizers;
- (void)setOverrideFocusSystemEnabled:(BOOL)a0 withIdentifier:(id)a1;
- (id)initWithScene:(id)a0;
- (void)updateFocusIfNeeded;
- (void)_setNeedsNonDeferredFocusUpdate;
- (id)_currentFocusBehaviorRespectingApplicationOverride:(BOOL)a0;
- (BOOL)_focusSystemExplicitlyDisabledForBehavior:(id)a0;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_notifyDidPerformFocusSystemInitialSetup;
- (BOOL)_isSceneActive;
- (void)pushPreferredFocusEnvironmentOverride:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippingRectInCoordinateSpace:(id)a0;
- (void)_tearDownFocusSystem;
- (void)removePreferredFocusEnvironmentOverride:(id)a0;
- (void)_updateFocusSystemState;
- (void)_updateDeviceCapabilityObserver;
- (void)_adjustFocusSystemAvailabilityUpdatingTraits:(BOOL)a0;
- (void)_setupFocusSystem;
- (void).cxx_destruct;
- (void)_windowHostingScene:(id)a0 willMoveFromScreen:(id)a1 toScreen:(id)a2;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)_windowsForFocusSearch;
- (BOOL)_isEnvironmentLocked:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_unlockEnvironment:(id)a0;
- (void)_updateFocusSystemCapabilities;
- (void)_focusSystemEnabledStateDidChange:(id)a0;
- (void)_delayedSetupFocusDebugWindow;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)_adjustFocusSystemAvailability;

@end
