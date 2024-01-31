@class NSSet;

@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument

@property (readonly) unsigned long long type;
@property (readonly) NSSet *personNodes;

+ (id)argumentWithPeopleType:(unsigned long long)a0;
+ (id)argumentWithPeopleType:(unsigned long long)a0 personNodes:(id)a1;

- (void).cxx_destruct;
- (id)_birthdayTitleWithMomentNodes:(id)a0;
- (id)_groupTitleWithFeature:(id)a0 graph:(id)a1 allowedGroupsFormat:(unsigned long long)a2;
- (id)_groupTitleWithMomentNodes:(id)a0 allowedGroupsFormat:(unsigned long long)a1;
- (id)_initWithPeopleType:(unsigned long long)a0 personNodes:(id)a1;
- (id)_personNodesWithMomentNodes:(id)a0;
- (id)_personTitleWithFeature:(id)a0 graph:(id)a1;
- (id)_personTitleWithMomentNodes:(id)a0;
- (id)_resolvedStringWithMomentNodes:(id)a0 argumentEvaluationContext:(id)a1;
- (id)_resolvedStringWithMomentNodes:(id)a0 features:(id)a1 argumentEvaluationContext:(id)a2;
- (id)initWithPeopleType:(unsigned long long)a0;

@end
