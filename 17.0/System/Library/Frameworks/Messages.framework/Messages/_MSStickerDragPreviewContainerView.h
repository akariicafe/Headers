@class NSString, UIImage, CALayer, UIView;

@interface _MSStickerDragPreviewContainerView : UIView <_UIDragPreviewContainer>

@property (nonatomic) BOOL isDropAnimation;
@property (nonatomic) BOOL dropAnimationIsComplete;
@property (copy, nonatomic) id /* block */ clientDropCompletion;
@property (copy, nonatomic) id /* block */ finalUIKitDropCompletion;
@property (retain, nonatomic) UIView *currentDropPreviewSnapshot;
@property (retain, nonatomic) CALayer *shineLayer;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) CALayer *dropShadowLayer;
@property (retain, nonatomic) CALayer *peelLayer;
@property (retain, nonatomic) CALayer *meshLayer;
@property (retain, nonatomic) CALayer *perspectiveLayer;
@property (retain, nonatomic) CALayer *peelImageLayer;
@property (retain, nonatomic) CALayer *peelMaskLayer;
@property (nonatomic) struct CGPoint { double x; double y; } originalCenter;
@property (retain, nonatomic) UIView *previewView;
@property (nonatomic) struct CGPoint { double x; double y; } meshLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } peelLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } shineLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } shadowLayerStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } dropShadowLayerStartPosition;
@property (nonatomic) BOOL defersFinalDropAnimationCompletion;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL useEmojiKeyboardMeshTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shadowPropertiesForDrag;
+ (id)springAnimationWithKeyPath:(id)a0 speed:(float)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })targetPreviewTransform;
+ (id)meshTransformWithContentScale:(double)a0;

- (void).cxx_destruct;
- (void)_animateDropAlongsideAnimator:(id)a0 completion:(id /* block */)a1;
- (void)_animateLiftAlongsideAnimator:(id)a0 completion:(id /* block */)a1;
- (void)_animateLiftCancellationAlongsideAnimator:(id)a0 completion:(id /* block */)a1;
- (void)_preparePreviewContainerWithPreview:(id)a0 source:(id)a1 initialTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)initWithIsDropAnimation:(BOOL)a0;
- (struct CGSize { double x0; double x1; })initialSize;
- (double)dragViewScaleUp;
- (double)dragViewScale;
- (id)peelMaskImageFromImage:(id)a0;
- (void)performAfterDropAnimation:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })rasterizedImageSize;
- (void)reversePeelAnimationToPoint:(struct CGPoint { double x0; double x1; })a0 forPlacement:(BOOL)a1 shouldShrink:(BOOL)a2 completionBlock:(id /* block */)a3;
- (BOOL)showDebugBorders;
- (void)finalizeDropIfNecessary;

@end
