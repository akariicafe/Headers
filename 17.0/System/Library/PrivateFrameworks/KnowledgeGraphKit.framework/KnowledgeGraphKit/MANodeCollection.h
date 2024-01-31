@interface MANodeCollection : MAElementCollection

+ (id)nodesMatchingFilter:(id)a0 inGraph:(id)a1;
+ (id)nodesOfEdges:(id)a0;
+ (id)nodesRelatedToNodes:(id)a0 withRelation:(id)a1;
+ (id)sourceNodesOfEdges:(id)a0;
+ (id)targetNodesOfEdges:(id)a0;

- (id)labels;
- (void)enumerateNodesSortedByStringPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)containsNode:(id)a0;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (void)enumerateNodesSortedByFloatPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithNode:(id)a0;
- (void)enumerateNodesSortedByIntegerPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (id)debugDescription;
- (id)firstNode;
- (id)anyNode;
- (void)_enumerateUsingBlock:(id /* block */)a0;
- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateNodesAsCollectionsSortedByDoublePropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNodesAsCollectionsSortedByIntegerPropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNodesAsCollectionsSortedByStringPropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNodesAsCollectionsSortedByUnsignedIntegerPropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)nodesMatchingFilter:(id)a0;
- (id)randomNode;

@end
