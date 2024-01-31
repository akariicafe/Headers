@class UIScreen, UIMutableApplicationSceneSettings, NSMutableSet;
@protocol BSInvalidatable, NSCopying;

@interface _UIScreenBasedWindowScene : UIWindowScene {
    id<NSCopying> _lookupKey;
    UIScreen *_screen;
    UIMutableApplicationSceneSettings *_synthesizedSettings;
    BOOL _invalidationEvaluatorRegistered;
    BOOL _needsInvalidation;
    id<BSInvalidatable> _screenDisconnectionPreventionAssertion;
    NSMutableSet *_autoInvalidationPreventionAssertions;
}

+ (BOOL)autoInvalidates;
+ (BOOL)alwaysKeepContexts;
+ (id)unassociationCacheAccessQueue;
+ (id)_unassociatedWindowSceneForScreen:(id)a0 create:(BOOL)a1;
+ (BOOL)shouldAllowComponents;
+ (id)unassociationCache;

- (void)_screenInterfaceOrientationChanged:(id)a0;
- (void)_addSubclassDebugDescriptionWithBuilder:(id)a0;
- (id)_displayInfoProvider;
- (void)_detachWindow:(id)a0;
- (void)_invalidate;
- (void)_openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)_synthesizedSettings;
- (void)_removeAutoInvalidationPreventionAssertion:(id)a0;
- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)a0;
- (void)_applyOverridesToHostedSceneSettings:(id)a0;
- (void)_setKeepContextAssociationInBackground:(BOOL)a0;
- (id)screen;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)a0 withAnimationDuration:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBoundsForOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)_attachWindow:(id)a0;
- (BOOL)_shouldAllowFencing;
- (void)_screenDisconnected:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)_usesMinimumSafeAreaInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;

@end
