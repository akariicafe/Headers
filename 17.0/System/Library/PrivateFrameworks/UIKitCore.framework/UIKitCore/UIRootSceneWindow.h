@class NSString, FBSDisplayConfiguration, UIMutableTransformer, UIView;

@interface UIRootSceneWindow : _UIRootWindow <UIMutableTransformerDelegate>

@property (readonly, nonatomic) UIView *_sceneContainerView;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) UIMutableTransformer *sceneTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecure;

- (BOOL)canBecomeKeyWindow;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_appearsInLoupe;
- (void)dealloc;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)initWithDisplayConfiguration:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_focusResponder;
- (id)initWithDisplay:(id)a0;
- (void)_updateTransforms;
- (void)transformsDidChange:(id)a0;

@end
