@class SCNNode, SCNGeometryWrapDeformerParameters;

@interface SCNGeometryWrapDeformer : SCNGeometryDeformer {
    SCNNode *_drivingNode0;
    SCNNode *_drivingNode1;
    SCNGeometryWrapDeformerParameters *_parameters;
}

@property (readonly, weak, nonatomic) SCNNode *drivingNode;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)supportedOutputs;
- (id)initWithCoder:(id)a0;
- (id)initWithDrivingNode:(id)a0 parameters:(id)a1;
- (BOOL)_getDeformedMeshBoundingBox:(struct { } *)a0;
- (id)dependencyNodeAtIndex:(unsigned long long)a0;
- (void)initParametersIfNeededForDeformedNode:(id)a0;
- (id)initWithDriverSandwichNode0:(id)a0 driverSandwichNode1:(id)a1 parameters:(id)a2;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
