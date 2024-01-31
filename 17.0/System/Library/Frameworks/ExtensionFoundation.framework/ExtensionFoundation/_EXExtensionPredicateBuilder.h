@class NSDictionary;

@interface _EXExtensionPredicateBuilder : NSObject

@property (readonly) unsigned long long version;
@property (readonly) BOOL strictMatchingSpecified;
@property (readonly) BOOL usesStrictMatching;
@property (readonly) NSDictionary *predicateDictionary;
@property (readonly) struct _EXExtensionActivationRules { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; } *activationRules;

- (id)makePredicate;
- (id)applyRuleWithRuleName:(id)a0 acceptRule:(id)a1 rejectRule:(id)a2 types:(id)a3 exceptTypes:(id)a4 parentType:(id)a5 children:(id)a6 parentAccepted:(BOOL)a7 accepted:(BOOL *)a8 acceptedTypesInSubtree:(id *)a9 exceptTypesInSubtree:(id *)a10;
- (id)predicateForRejectExceptOtherTypesRule:(id)a0 type:(id)a1 otherTypes:(id)a2;
- (id)predicateForCountingRule:(id)a0 type:(id)a1 exceptTypes:(id)a2 specifiedCount:(int)a3;
- (id)initWithActivationRules:(struct _EXExtensionActivationRules { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; } *)a0 predicateDictionary:(id)a1;
- (id)gatherChildrenPredicateWithRuleDictionary:(id)a0 parentType:(id)a1 parentAccepted:(BOOL)a2 acceptedChildTypes:(id *)a3 exceptChildTypes:(id *)a4;
- (void).cxx_destruct;

@end
