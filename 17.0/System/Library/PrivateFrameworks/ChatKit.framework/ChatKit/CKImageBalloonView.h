@class CKAnimatedImage, NSArray, UIImageView, NSString, UIView, CKBalloonImageView;

@interface CKImageBalloonView : CKObscurableBalloonView <CKCustomMaskDuringPrint, CKAnimationTimerObserver>

@property (nonatomic) BOOL suppressMask;
@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UIImageView *irisBadgeView;
@property (retain, nonatomic) UIView *monoskiBadgeView;
@property (nonatomic) unsigned long long animationFrameOffset;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (retain, nonatomic) CKBalloonImageView *tailMask;
@property (retain, nonatomic) CKBalloonImageView *outlineMask;
@property (nonatomic) BOOL suppressMask;
@property (nonatomic) BOOL userExplicitlyUnpausedAnimation;
@property (nonatomic) BOOL isIrisAsset;
@property (nonatomic) BOOL isMonoskiAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addFilter:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)clearFilters;
- (id)overlayColor;
- (void)didMoveToWindow;
- (void)tapGestureRecognized:(id)a0;
- (id)_addPauseButtonToImage:(id)a0;
- (void)_animatedImagesStateChanged:(id)a0;
- (BOOL)animationExplicitlyResumed;
- (void)animationTimerFired:(double)a0;
- (void)attachInvisibleInkEffectView;
- (void)configureForComposition:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)configureForMessagePart:(id)a0;
- (void)configureForTranscriptPlugin:(id)a0;
- (void)detachInvisibleInkEffectView;
- (id)imageForInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasResumed;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasUncovered;
- (BOOL)needsGroupOpacity;
- (void)setCanUseOpaqueMask:(BOOL)a0;
- (void)setHasTail:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)updateAnimationTimerObserving;

@end
