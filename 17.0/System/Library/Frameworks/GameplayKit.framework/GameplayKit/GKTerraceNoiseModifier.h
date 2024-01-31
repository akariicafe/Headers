@interface GKTerraceNoiseModifier : GKNoiseModifier {
    double *_controlPoints;
    int _count;
    BOOL _inverted;
}

- (id)init;
- (void)dealloc;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (id)initWithPeakInputValues:(id)a0 terracesInverted:(BOOL)a1;
- (int)requiredInputModuleCount;

@end
