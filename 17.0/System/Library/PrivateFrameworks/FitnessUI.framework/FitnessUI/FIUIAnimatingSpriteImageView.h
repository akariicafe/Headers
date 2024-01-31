@class UIImage, CALayer;

@interface FIUIAnimatingSpriteImageView : UIView {
    CALayer *_imageLayer;
    BOOL _shouldResumeAnimating;
}

@property (retain, nonatomic) UIImage *spriteImage;
@property (nonatomic) long long spriteFrameCount;
@property (nonatomic) long long spriteColumnCount;
@property (nonatomic) unsigned long long framesPerSecond;

+ (void)_pauseLayer:(id)a0;
+ (void)_resumeLayer:(id)a0;
+ (id)_createNewSpriteArray:(id)a0 currentFrame:(unsigned long long)a1 arraySize:(unsigned long long)a2 interrupted:(BOOL)a3;
+ (unsigned long long)_findSpriteIndex:(struct CGPoint { double x0; double x1; })a0 centerPoints:(id)a1;
+ (void)_resetLayer:(id)a0;

- (void)willMoveToWindow:(id)a0;
- (void)startAnimating;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)resumeAnimating;
- (void)_addAnimation:(id)a0 forKey:(id)a1;
- (id)_centerPointValues;
- (struct CGSize { double x0; double x1; })_spriteFrameSize;
- (void)animateOnce;
- (void)pauseAnimating;
- (void)stopAnimatingFinishingCycle:(BOOL)a0;

@end
