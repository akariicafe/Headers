@class CKAnimatedImage, NSArray, NSString, UIImage, CKBalloonImageView;

@interface CKStickerTranscriptCell : CKAssociatedStickerTranscriptCell <CKAnimationTimerObserver>

@property (retain, nonatomic) NSArray *frames;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (nonatomic) BOOL hasCommittedFirstFrame;
@property (readonly, nonatomic) CKBalloonImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (nonatomic) BOOL userExplicitlyUnpausedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_commitFirstFrameWithAnimationTime:(double)a0;
- (BOOL)animationExplicitlyResumed;
- (void)animationTimerFired:(double)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)setSticker:(id)a0;
- (void)updateAnimationTimerObserving;

@end
