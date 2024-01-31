@class KGDirectedBinaryAdjacency, MAGraphReference, MANodeCollection;

@interface MABinaryAdjacency : NSObject

@property (readonly, nonatomic) MANodeCollection *sources;
@property (readonly, nonatomic) MANodeCollection *targets;
@property (readonly, nonatomic) unsigned long long sourcesCount;
@property (readonly, nonatomic) MAGraphReference *graphReference;
@property (readonly, nonatomic) KGDirectedBinaryAdjacency *adjacency;
@property (readonly, nonatomic) Class sourcesClass;
@property (readonly, nonatomic) Class targetsClass;

+ (id)adjacencyWithSources:(id)a0 relation:(id)a1 targetsClass:(Class)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)differenceWith:(id)a0;
- (void)enumerateTargetsBySourceWithBlock:(id /* block */)a0;
- (id)initWithAdjacency:(id)a0 graph:(id)a1 sourcesClass:(Class)a2 targetsClass:(Class)a3;
- (id)initWithAdjacency:(id)a0 graphReference:(id)a1 sourcesClass:(Class)a2 targetsClass:(Class)a3;
- (id)intersectingSourcesWith:(id)a0;
- (id)intersectingTargetsWith:(id)a0;
- (BOOL)isEqualToAdjacency:(id)a0;
- (id)subtractingSourcesWith:(id)a0;
- (id)subtractingTargetsWith:(id)a0;
- (id)targetsForSourceIdentifier:(unsigned long long)a0;
- (id)targetsForSources:(id)a0;
- (id)targetsWithMinimumCount:(unsigned long long)a0;
- (id)transposed;

@end
