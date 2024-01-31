@class UIWindowScene, NSString, PKPaletteHostView, UIScene, PKDrawingPaletteView, UIView, NSLayoutConstraint;
@protocol PKPaletteViewInteractionDelegate;

@interface PKPaletteViewInteraction : NSObject <UIEditingOverlayInteractionWithView, PKPaletteHostingWindowScene, UIKeyboardSceneDelegateVisibilityObserver, _UISceneComponentProviding, PKPaletteTapToRadarCommandDelegate, UIInteraction> {
    UIScene *_scene;
}

@property (weak, nonatomic) UIWindowScene *windowScene;
@property (retain, nonatomic) PKPaletteHostView *paletteHostView;
@property (retain, nonatomic) PKDrawingPaletteView *paletteView;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sceneBounds;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewLeftConstraint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textEffectsWindowFrame;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<PKPaletteViewInteractionDelegate> delegate;
@property (readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paletteHostingWindowSceneBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

+ (BOOL)isHostedWindow:(id)a0;
+ (id)existingPaletteViewInteractionForWindowScene:(id)a0;
+ (id)paletteViewInteractionForCanvas:(id)a0;
+ (id)paletteViewInteractionForWindow:(id)a0 windowScene:(id)a1;

- (void)_sceneWillInvalidate:(id)a0;
- (id)initWithScene:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithWindowSize:(struct CGSize { double x0; double x1; })a0;
- (void)keyboardSceneDelegate:(id)a0 inputViewSetVisibilityDidChange:(BOOL)a1 includedReset:(BOOL)a2;
- (id)hostingWindow;
- (void)_updatePaletteUserInterfaceStyle:(long long)a0;
- (BOOL)_isCompactHostedWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sceneBoundsForUpdateWithFollowsHostingWindowOut:(BOOL *)a0;
- (void)_sceneDidActivateNotification:(id)a0;
- (void)_sceneWillEnterForegroundNotification:(id)a0;
- (void)_setPaletteVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_shouldDeferPaletteVisibilityUpdate;
- (id)_traitCollectionForHostingWindow;
- (void)_updateForRotation:(id)a0;
- (void)_updateForWillRotate:(id)a0;
- (void)_updatePaletteTraitCollection:(id)a0;
- (void)_updateSceneBounds;
- (void)_updateUIWithSceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_viewControllerForPalette;
- (void)hidePaletteViewAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)paletteTapToRadarCommandConfiguration:(id)a0;
- (void)showPaletteViewAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
