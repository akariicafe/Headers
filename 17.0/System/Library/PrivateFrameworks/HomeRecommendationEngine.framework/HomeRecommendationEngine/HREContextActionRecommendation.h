@class NSString, NSSet, NSMutableSet, HREActionVarianceCollection;
@protocol HFIconDescriptor;

@interface HREContextActionRecommendation : HRERecommendation <HREActionRecommendation>

@property (retain, nonatomic) NSMutableSet *_actions;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
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
- (BOOL)containsMeaningfulChanges;
- (id)copyWithActionFilter:(id /* block */)a0;
- (id)executeActions;
- (BOOL)containsRecommendableContent;
- (id)initWithHome:(id)a0 uniqueIdentifier:(id)a1;

@end
