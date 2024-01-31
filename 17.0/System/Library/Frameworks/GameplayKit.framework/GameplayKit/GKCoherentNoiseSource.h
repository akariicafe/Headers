@interface GKCoherentNoiseSource : GKNoiseSource

@property (nonatomic) double frequency;
@property (nonatomic) long long octaveCount;
@property (nonatomic) double lacunarity;
@property (nonatomic) int seed;

- (double)valueAt:(SEL)a0;
- (id)cloneModule;

@end
