@interface GKRidgedNoiseSource : GKCoherentNoiseSource {
    double m_weights[30];
}

+ (id)ridgedNoiseSourceWithFrequency:(double)a0 octaveCount:(long long)a1 lacunarity:(double)a2 seed:(int)a3;

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithFrequency:(double)a0 octaveCount:(long long)a1 lacunarity:(double)a2 seed:(int)a3;

@end
