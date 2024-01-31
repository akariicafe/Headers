@class NSTimer, _TVImageView, NSArray;

@interface VUIImageProxyAnimator : NSObject

@property (nonatomic) unsigned long long displayImageIndex;
@property (nonatomic) unsigned long long indexOfFetchedImage;
@property (retain, nonatomic) _TVImageView *imageView;
@property (weak, nonatomic) NSTimer *transitionTimer;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic, getter=isCachingEnabled) BOOL cachingEnabled;
@property (copy, nonatomic) NSArray *imageProxies;
@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double animationDuration;
@property (nonatomic) double transitionInterval;

- (id)init;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)_setImage:(id)a0 animated:(BOOL)a1;
- (void)_displayIntervalTimerFired:(id)a0;
- (void)_fetchNext;
- (void)_updateImageWithIndex:(unsigned long long)a0;
- (id)initWithImageView:(id)a0 andProxies:(id)a1;
- (void)loadImageProxy:(id)a0 withWeakObject:(id)a1 completionHandler:(id /* block */)a2;

@end
