@class SBSAElementLayoutTransition;
@protocol SBSAInterfaceElementPropertyIdentifying;

@interface SBSAElementContentProvider : SBSABasePreferencesProvider {
    BOOL _sensorObscuringShadowDisappearingIfTransitioning;
    id<SBSAInterfaceElementPropertyIdentifying> _pendingSensorObscuringShadowProperty;
}

@property (readonly, nonatomic) long long transitionDirection;
@property (readonly, copy, nonatomic) SBSAElementLayoutTransition *staticLayoutTransition;

+ (id)appearanceTransitionElementContentProviderWithParentProvider:(id)a0 staticLayoutTransition:(id)a1;
+ (id)disappearanceTransitionElementContentProviderWithParentProvider:(id)a0 staticLayoutTransition:(id)a1;

- (id)defaultTransitionSettings;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithParentProvider:(id)a0 transitionDirection:(long long)a1 staticLayoutTransition:(id)a2;
- (double)_sensorObscuringShadowApexMilestone;
- (id)_updatedElementDescriptionFromDescription:(id)a0 layoutTransition:(id)a1 transitionDescriptions:(id)a2 context:(id)a3;
- (id)initWithParentProvider:(id)a0;
- (id)preferencesFromContext:(id)a0;

@end
