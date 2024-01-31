@interface NUFadeViewAnimator : NSObject

@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeInDelay;

- (id)init;
- (void)fadeFromView:(id)a0 toView:(id)a1 completion:(id /* block */)a2;

@end
