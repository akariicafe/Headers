@interface PTBrightSceneDetector : NSObject {
    float _brightScene;
    float _filteredLuxLevel;
    BOOL _brightSceneState;
    float _emaFilterCoefficient;
    void /* unknown type, empty encoding */ _luxLevelThreshold;
    float _transitionTime;
}

- (void)reset;
- (void /* unknown type, empty encoding */)debugState;
- (float)brightScene;
- (id)initWithLuxLevelThreshold:(SEL)a0 emaFilterCoefficient:(float)a1 transitionTime:(float)a2;
- (void)updateWithLuxLevel:(float)a0 deltaTime:(float)a1;

@end
