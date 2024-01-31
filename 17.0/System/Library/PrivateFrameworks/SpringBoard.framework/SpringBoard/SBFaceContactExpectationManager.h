@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {
    SBSceneManager *_sceneManager;
    SBProximitySensorManager *_proximitySensorManager;
    BOOL _faceExpected;
}

- (id)initWithSceneManager:(id)a0 proximitySensorManager:(id)a1;
- (id)initWithSceneManager:(id)a0;
- (void)updateFaceContactExpectation;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_sceneHasBypassEntitlement:(id)a0;
- (id)_frontmostScenesExpectingFaceContactAndGetShouldDisableGracePeriod:(out BOOL *)a0;
- (id)_proximitySensorClientID;

@end
