@class NSSet;

@interface HRERecommendableObjectTypeListRule : HRERecommendableObjectRule

@property (readonly, nonatomic) NSSet *typesSatisfyingRequirement;

+ (id)ruleRequiringOneOfTypes:(id)a0;

- (void).cxx_destruct;
- (id)initWithRequiredTypeGroup:(id)a0;
- (BOOL)passesWithHomeObjects:(id)a0;

@end
