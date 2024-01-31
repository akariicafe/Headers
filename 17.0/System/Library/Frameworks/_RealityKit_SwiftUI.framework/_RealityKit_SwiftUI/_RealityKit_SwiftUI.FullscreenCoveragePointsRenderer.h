@interface _RealityKit_SwiftUI.FullscreenCoveragePointsRenderer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ coveragePointCloud;
    void /* unknown type, empty encoding */ coveragePoints;
    void /* unknown type, empty encoding */ objectToWorld;
    void /* unknown type, empty encoding */ objectToWorldUnscaled;
    void /* unknown type, empty encoding */ viewToWorld;
    void /* unknown type, empty encoding */ projection;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ renderPrimitivePointsPipeline;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voxelRenderer;
    void /* unknown type, empty encoding */ renderStyle;
    void /* unknown type, empty encoding */ inFlightQueue;
    void /* unknown type, empty encoding */ inFlightLock;
    void /* unknown type, empty encoding */ depthStencilState;
    void /* unknown type, empty encoding */ coveragePointCloudRenderer;
    void /* unknown type, empty encoding */ viewportSize;
    void /* unknown type, empty encoding */ turnTableCameraControl;
    void /* unknown type, empty encoding */ dragGesture;
    void /* unknown type, empty encoding */ transformProvider;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ viewportFOVDegs;
    void /* unknown type, empty encoding */ sphereRadiusGain;
}

- (id)init;
- (void)dealloc;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (void).cxx_destruct;

@end
