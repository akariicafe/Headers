@interface GKClampNoiseModifier : GKNoiseModifier {
    double _lowerBound;
    double _upperBound;
}

- (id)init;
- (id)initWithLowerBound:(double)a0 upperBound:(double)a1;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (int)requiredInputModuleCount;

@end
