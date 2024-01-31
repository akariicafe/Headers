@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString *depthNormalization;
@property int subdivisionSteps;
@property BOOL replicatesEdges;

+ (id)meshTransform;

- (void)addFace:(struct CAMeshFace { unsigned int x0[4]; float x1[4]; })a0;
- (void)removeVertexAtIndex:(unsigned long long)a0;
- (id)init;
- (void)removeFaceAtIndex:(unsigned long long)a0;
- (void)replaceFaceAtIndex:(unsigned long long)a0 withFace:(struct CAMeshFace { unsigned int x0[4]; float x1[4]; })a1;
- (void)replaceVertexAtIndex:(unsigned long long)a0 withVertex:(struct CAMeshVertex { struct CGPoint { double x0; double x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; })a1;
- (void)addVertex:(struct CAMeshVertex { struct CGPoint { double x0; double x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
