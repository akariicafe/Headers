@class NSMutableDictionary;

@interface CRKASMAtomicRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) NSMutableDictionary *completionsByConstraint;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)beginObservingRoster;
- (id)courseWithIdentifier:(id)a0 inRoster:(id)a1;
- (id)coursesMatchingCreateProperties:(id)a0 inRoster:(id)a1 createdAfter:(id)a2;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (void)endObservingRoster;
- (void)evaluateConstraintForUnderlyingCompletion:(id)a0 error:(id)a1;
- (void)evalutateConstraintsForRosterUpdate;
- (id)initWithRosterProvider:(id)a0;
- (id)pushCompletion:(id /* block */)a0 withRosterEvaluator:(id /* block */)a1;
- (void)removeCourseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;

@end
