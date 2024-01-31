@interface GKBillowNoiseSource : GKCoherentNoiseSource

@property (nonatomic) double persistence;

+ (id)billowNoiseSourceWithFrequency:(double)a0 octaveCount:(long long)a1 persistence:(double)a2 lacunarity:(double)a3 seed:(int)a4;

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithFrequency:(double)a0 octaveCount:(long long)a1 persistence:(double)a2 lacunarity:(double)a3 seed:(int)a4;

@end
