@class NSArray;

@interface UIMutableSceneAsynchronousRenderingOptions : UISceneAsynchronousRenderingOptions

@property (copy, nonatomic) NSArray *renderTimes;
@property (nonatomic) double renderPeriod;
@property (nonatomic) float renderMaxAPL;
@property (nonatomic) BOOL opaque;

- (void)setOpaque:(BOOL)a0;
- (void)setRenderPeriod:(double)a0;
- (void)setRenderTimes:(id)a0;
- (void)setRenderMaxAPL:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
