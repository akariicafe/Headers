@class NSString, NSArray;
@protocol SAInvalidatable;

@interface SBSystemApertureDynamicsTestRecipe : NSObject <SBTestRecipe> {
    NSArray *_dynamicsDescriptions;
    unsigned long long _activeDynamics;
    id<SAInvalidatable> _animationAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void).cxx_destruct;
- (id)title;
- (id)_dynamicsDescriptions;

@end
