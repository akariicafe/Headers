@class NSString, FBSSceneLayer, CAContext, FBSSceneIdentityToken, NSDictionary, UIScreen, _UIContextBinder, FBSScene;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject> {
    NSDictionary *_perScreenOptions;
    UIScreen *_intendedScreen;
    BOOL _arePlaceholdersInitialised;
    FBSSceneLayer *_keyboardSceneLayer;
    FBSScene *_activeScene;
    BOOL _resetRequired;
}

@property (readonly, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;
@property (readonly, nonatomic) struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } _bindingDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;

+ (BOOL)_isHostedInAnotherProcess;
+ (id)remoteKeyboardWindowForScreen:(id)a0 create:(BOOL)a1;

- (void)_resetScene;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (void)setWindowLevel:(double)a0;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_isAlwaysKeyboardWindow;
- (BOOL)_wantsSceneAssociation;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_alwaysGetsContexts;
- (void)dealloc;
- (BOOL)_isFullscreen;
- (BOOL)isInternalWindow;
- (BOOL)_canIgnoreInteractionEvents;
- (void)_setRotatableClient:(id)a0 toOrientation:(long long)a1 updateStatusBar:(BOOL)a2 duration:(double)a3 force:(BOOL)a4 isRotating:(BOOL)a5;
- (BOOL)_matchingOptions:(id)a0;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (long long)_orientationForClassicPresentation;
- (BOOL)_isRemoteKeyboardWindow;
- (BOOL)_isEligibleForFocusOcclusion;
- (id)_layerForCoordinateSpaceConversion;
- (void)_configureAlphaIfNecessary;
- (void)invalidate;
- (id)_initBasicWithScreen:(id)a0 options:(id)a1;
- (void)detachBindable;
- (BOOL)shouldAttachBindable;
- (BOOL)isTransparentFocusItem;
- (void).cxx_destruct;
- (void)resetScene;
- (void)endDisablingInterfaceAutorotation;
- (id)_initWithScreen:(id)a0 options:(id)a1;
- (void)attachBindable;
- (long long)_orientationInSceneSpace;
- (BOOL)shouldDetachBindable;

@end
