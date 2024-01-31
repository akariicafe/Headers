@interface BLSHLocalOnlyServiceConfiguration : NSObject

@property (readonly, nonatomic) double fadeInDuration;
@property (readonly, nonatomic) double fadeOutDuration;
@property (readonly, nonatomic) double dimmingDuration;
@property (readonly, nonatomic) float dimmedFactor;

+ (id)configurationWithFadeInDuration:(double)a0 fadeOutDuration:(double)a1;
+ (id)configurationWithFadeInDuration:(double)a0 fadeOutDuration:(double)a1 dimmingDuration:(double)a2 dimmedFactor:(float)a3;

- (id)init;
- (id)initWithFadeInDuration:(double)a0 fadeOutDuration:(double)a1 dimmingDuration:(double)a2 dimmedFactor:(float)a3;

@end
