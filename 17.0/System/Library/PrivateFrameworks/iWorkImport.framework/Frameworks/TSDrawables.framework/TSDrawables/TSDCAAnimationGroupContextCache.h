@class NSArray;

@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache

@property (readonly, nonatomic) NSArray *animations;
@property (readonly, nonatomic) NSArray *animationContextCaches;

+ (id)p_flattenedBestAnimationContextCachesForKeyPath:(id)a0 atTime:(double)a1 inContextCaches:(id)a2;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0;
- (id)p_bestAnimationContextCachesForKeyPath:(id)a0 atTime:(double)a1;
- (double)p_groupTimingFactorAtTime:(double)a0;
- (id)valueForKeyPath:(id)a0 atTime:(double)a1 animationCache:(id)a2;

@end
