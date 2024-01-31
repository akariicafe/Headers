@class NSSet, NSString, NSPredicate, NSHashTable, FBKQuestionDependencyGraph, NSNumber;

@interface FBKQuestionDependencyNode : NSObject

@property (retain) NSHashTable *dependencyChildren;
@property (retain) NSSet *dependencyTats;
@property (retain) NSPredicate *visibilityPredicateTemplate;
@property (weak) FBKQuestionDependencyGraph *graph;
@property (readonly) NSNumber *questionID;
@property (readonly) NSString *tat;
@property (readonly) NSSet *dependentChildren;

- (void).cxx_destruct;
- (id)_predicateFromLeafArray:(id)a0;
- (id)_substitutionFromToken:(id)a0;
- (id)dependentTatsForConditions:(id)a0;
- (id)initWithQuestion:(id)a0;
- (BOOL)isVisibleInFormResponse:(id)a0;
- (id)predicateForConditions:(id)a0;
- (void)registerDependentChild:(id)a0;

@end
