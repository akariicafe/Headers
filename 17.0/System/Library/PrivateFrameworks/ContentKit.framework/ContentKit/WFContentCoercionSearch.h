@class WFCoercionOptions, NSArray, WFType, NSMutableOrderedSet, WFContentCoercionNode, NSMutableArray;

@interface WFContentCoercionSearch : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *visitedStates;
@property (readonly, nonatomic) NSMutableArray *agenda;
@property (readonly, nonatomic) WFCoercionOptions *options;
@property (readonly, nonatomic) WFContentCoercionNode *startNode;
@property (readonly, nonatomic) NSArray *goalItemClasses;
@property (readonly, nonatomic) WFType *goalType;

+ (id)searchForCoercingItem:(id)a0 toItemClass:(Class)a1 options:(id)a2;
+ (id)searchForCoercingItem:(id)a0 toItemClasses:(id)a1 options:(id)a2;
+ (id)searchForCoercingItem:(id)a0 toType:(id)a1 options:(id)a2;

- (void).cxx_destruct;
- (id)badCoercionError;
- (id)continueCoercionWithContentItems:(id)a0 error:(id *)a1;
- (void)continueCoercionWithContentItems:(id)a0 error:(id)a1 handler:(id /* block */)a2;
- (BOOL)goalTest:(id)a0;
- (id)initWithStartNode:(id)a0 goalItemClasses:(id)a1 goalType:(id)a2 options:(id)a3;
- (BOOL)isCoercionPathAllowedForNode:(id)a0;
- (id)nextPathNode;
- (void)runCoercion:(id /* block */)a0;
- (id)runCoercionSynchronouslyWithError:(id *)a0;

@end
