@class _UIPortalView, UIWindowSceneActivationConfiguration, CAMatchMoveAnimation, UIView, NSMutableArray;

@interface _UIWindowSceneActivationAnimator : NSObject

@property (retain, nonatomic) UIWindowSceneActivationConfiguration *configuration;
@property (retain, nonatomic) _UIPortalView *incomingScenePortalView;
@property (retain, nonatomic) UIView *morphContainerView;
@property (retain, nonatomic) UIView *deparentingWrapper;
@property (retain, nonatomic) UIView *deparentingPortalAlphaSourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expectedFrame;
@property (nonatomic) struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } expectedCornerRadii;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSMutableArray *alongsideAnimations;
@property (readonly, nonatomic) NSMutableArray *alongsideCompletions;
@property (retain, nonatomic) CAMatchMoveAnimation *incomingSceneAnchorAnimation;
@property (nonatomic) BOOL deparented;
@property (nonatomic) BOOL isDeallocating;

- (void)dealloc;
- (void)addCompletion:(id /* block */)a0;
- (void)addAnimations:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cleanUp;
- (void)prewarmWithCompletion:(id /* block */)a0;
- (void)_performAllAlongsideCompletions;
- (void)_performAllAlongsideAnimations:(id)a0;
- (long long)_preferredCollapsedShadowStyle;
- (id)_previewForIncomingScenePortal;
- (void)_sendBSAction:(id)a0;
- (void)_sendCompletionActionCallingAlongsideCompletions:(BOOL)a0;
- (id)_sourceViewContainer;
- (double)_startingShadowIntensity;
- (BOOL)animateWithSourcePreview:(id)a0 velocity:(double)a1;
- (void)deparent;
- (void)reparent;

@end
