@class MARelation;

@interface MATransitiveClosureRelation : MARelation

@property (readonly, nonatomic) MARelation *base;

+ (id)scanRelationWithScanner:(id)a0;

- (id)inverse;
- (id)initWithBase:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (BOOL)isTransitive;
- (id)transitiveClosure;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;
- (id)visualString;

@end
