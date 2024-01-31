@protocol MTLBuffer;

@interface ARSCNPlaneGeometry : SCNGeometry {
    id<MTLBuffer> _vertexBuffer;
    id<MTLBuffer> _textureCoordinateBuffer;
}

+ (id)planeGeometryWithDevice:(id)a0;

- (void).cxx_destruct;
- (void)updateFromPlaneGeometry:(id)a0;

@end
