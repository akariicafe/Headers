@class VKCImageAnalysisInteraction, UIImageView, UIBezierPath, UIVisualEffectView, UIImage, UIView;
@protocol VKTextLiftingViewDelegate;

@interface VKTextLiftingView : UIView

@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIBezierPath *_rotatedCutoutPath;
@property (readonly, nonatomic) UIVisualEffectView *_highlightView;
@property (nonatomic, setter=_hasLifted:) BOOL _hasLifted;
@property (nonatomic, setter=_hasFadedOut:) BOOL _hasFadedOut;
@property (nonatomic, setter=_setPresentedMenuForLiftedText:) BOOL _presentedMenuForLiftedText;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIBezierPath *cutoutPath;
@property (readonly, nonatomic) double baselineAngle;
@property (retain, nonatomic) UIBezierPath *hitTestPath;
@property (nonatomic) double maxScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) VKCImageAnalysisInteraction *imageInteraction;
@property (nonatomic) BOOL presentsMenuForLiftedText;
@property (nonatomic) BOOL presentsQuickActions;
@property (nonatomic) double preferredQuickActionButtonHeight;
@property (copy, nonatomic) id /* block */ quickActionConfigurationUpdateHandler;
@property (readonly, nonatomic) UIView *actionInfoView;
@property (weak, nonatomic) id<VKTextLiftingViewDelegate> delegate;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_applyConfigurationUpdateHandlerToQuickActions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBounds;
- (id)_springAnimationForKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;
- (void)_applyInteractionToImageViewIfReady;
- (id)_gaussianBlurFilterWithRadius:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_imageTransformInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fadeOutAndRemoveFromSuperview;
- (id)initWithImage:(id)a0 cutoutPath:(id)a1;
- (id)initWithImage:(id)a0 cutoutPath:(id)a1 baselineAngle:(double)a2;
- (void)performLiftAnimation;

@end
