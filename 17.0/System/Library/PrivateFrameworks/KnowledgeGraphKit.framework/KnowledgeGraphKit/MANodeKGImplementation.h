@class NSString, MANode;

@interface MANodeKGImplementation : NSObject <MANodeImplementationProtocol> {
    MANode *_node;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)countOfEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1;
- (void)enumerateEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNeighborNodesMatchingFilter:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)memoryFootprint:(id)a0;
- (id)initWithNode:(id)a0;
- (void)enumerateEdgesOfType:(unsigned long long)a0 withNode:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)hasEdgeOfType:(unsigned long long)a0 matchingFilter:(id)a1;
- (void)enumerateNeighborEdgesAndNodesMatchingFilter:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesRelatedWithRelation:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasEdgeOfType:(unsigned long long)a0 withNode:(id)a1;
- (id)edgeIdentifiersOfType:(unsigned long long)a0 matchingFilter:(id)a1;

@end
