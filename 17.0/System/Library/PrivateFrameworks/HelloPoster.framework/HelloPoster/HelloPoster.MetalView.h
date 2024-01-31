@interface HelloPoster.MetalView : MTKView {
    void /* unknown type, empty encoding */ wallpaperZoom;
    void /* unknown type, empty encoding */ wallpaperAnimationPosition;
    void /* unknown type, empty encoding */ wallpaperRotationAngle;
    void /* unknown type, empty encoding */ wallpaperRotationAngleOverride;
    void /* unknown type, empty encoding */ shareGeometryWithView;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ cursiveText;
    void /* unknown type, empty encoding */ library;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ depthStencilState;
    void /* unknown type, empty encoding */ vertexUniforms;
    void /* unknown type, empty encoding */ fragmentUniforms;
    void /* unknown type, empty encoding */ backgroundPipelineState;
    void /* unknown type, empty encoding */ backgroundVerticesBuffer;
    void /* unknown type, empty encoding */ textPipelineState;
    void /* unknown type, empty encoding */ textGeometry;
    void /* unknown type, empty encoding */ penPipelineState;
    void /* unknown type, empty encoding */ penGeometry;
    void /* unknown type, empty encoding */ cameraZNear;
    void /* unknown type, empty encoding */ cameraZFar;
    void /* unknown type, empty encoding */ cameraDefaultFieldOfView;
    void /* unknown type, empty encoding */ cameraFieldOfView;
    void /* unknown type, empty encoding */ cameraDistance;
    void /* unknown type, empty encoding */ needsSnapshot;
    void /* unknown type, empty encoding */ snapshotTexture;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
