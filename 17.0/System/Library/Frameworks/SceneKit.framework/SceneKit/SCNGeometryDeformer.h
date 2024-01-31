@interface SCNGeometryDeformer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)supportedOutputs;
- (id)initWithCoder:(id)a0;
- (unsigned long long)requiredOutputs;
- (void)_enumerateDependencyNodesUsingBlock:(id /* block */)a0;
- (BOOL)_getDeformedMeshBoundingBox:(struct { } *)a0;
- (BOOL)deformedMeshReliesOnFrustum;
- (BOOL)deformedMeshReliesOnTransforms;
- (id)dependencyNodeAtIndex:(unsigned long long)a0;
- (id)meshForDeformedTopology;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
