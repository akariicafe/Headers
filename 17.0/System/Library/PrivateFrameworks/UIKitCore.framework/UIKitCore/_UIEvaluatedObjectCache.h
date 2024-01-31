@class NSString, NSMutableOrderedSet;

@interface _UIEvaluatedObjectCache : NSObject <BSDebugDescriptionProviding> {
    id /* block */ _sortComparator;
    id /* block */ _evaluationBlock;
    NSMutableOrderedSet *_sortedObjects;
    id _topEvaluatedObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
