@class NSSet, HREActionVarianceCollection, NSMutableSet, HFTriggerBuilder, NSString;
@protocol HFIconDescriptor;

@interface HRETriggerRecommendation : HRERecommendation <HREActionRecommendation>

@property (retain, nonatomic) NSMutableSet *mutableTriggerBuilders;
@property (retain, nonatomic) HFTriggerBuilder *selectedTriggerBuilder;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) NSSet *triggerBuilders;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSSet *addedActions;
@property (retain, nonatomic) HREActionVarianceCollection *allowedVariance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeActions:(id)a0;
- (void)addAction:(id)a0;
- (void)addActions:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilder;
- (void)removeAction:(id)a0;
- (void)addAction:(id)a0 allowEditingExistingActions:(BOOL)a1;
- (void)addActions:(id)a0 allowEditingExistingActions:(BOOL)a1;
- (id)compareForMatchingToTrigger:(id)a0;
- (BOOL)containsMeaningfulChanges;
- (id)existingActionBuilder:(id)a0 inSet:(id)a1;
- (id)involvedObjects;
- (id)changedInvolvedObjects;
- (BOOL)containsRecommendableContent;
- (BOOL)includesObjects:(id)a0;
- (id)initWithHome:(id)a0 uniqueIdentifier:(id)a1;
- (void)replaceTriggerBuilder:(id)a0 withTriggerBuilder:(id)a1 allowEditingExistingActions:(BOOL)a2;

@end
