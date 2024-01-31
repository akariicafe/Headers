@protocol MTLBuffer;

@interface ARSCNFaceGeometry : SCNGeometry

@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (retain, nonatomic) id<MTLBuffer> normalBuffer;
@property (retain, nonatomic) id<MTLBuffer> textureBuffer;

+ (id)faceGeometryWithDevice:(id)a0 fillMesh:(BOOL)a1;
+ (id)faceGeometryWithDevice:(id)a0;
+ (id)faceGeometryWithDevice:(id)a0 eyesFilled:(BOOL)a1 mouthFilled:(BOOL)a2;

- (void).cxx_destruct;
- (void)updateFromFaceGeometry:(id)a0;

@end
