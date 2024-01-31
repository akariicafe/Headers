@interface SCNGeometryVariableTopologySampleDeformer : SCNGeometryDeformer

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)supportedOutputs;
- (id)initWithCoder:(id)a0;
- (unsigned long long)requiredOutputs;
- (BOOL)deformedMeshReliesOnTransforms;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
