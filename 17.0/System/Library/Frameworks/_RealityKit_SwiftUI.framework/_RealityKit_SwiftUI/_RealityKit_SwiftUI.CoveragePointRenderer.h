@interface _RealityKit_SwiftUI.CoveragePointRenderer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ coveragePointCloud;
    void /* unknown type, empty encoding */ viewToWorld;
    void /* unknown type, empty encoding */ projection;
    void /* unknown type, empty encoding */ cameraTransformProvider;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ renderPipelineState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voxelRenderer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captureCircleRenderer;
    void /* unknown type, empty encoding */ captureCircle;
    void /* unknown type, empty encoding */ localTime;
    void /* unknown type, empty encoding */ inFlightQueue;
    void /* unknown type, empty encoding */ inFlightLock;
    void /* unknown type, empty encoding */ depthStencilState;
    void /* unknown type, empty encoding */ coveragePointCloudRenderer;
    void /* unknown type, empty encoding */ reticleDeltaVector;
    void /* unknown type, empty encoding */ motionGoodness;
    void /* unknown type, empty encoding */ captureDialOpacityFloor;
    void /* unknown type, empty encoding */ viewportSize;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ renderStyle;
    void /* unknown type, empty encoding */ shouldRenderPointsWithAlphaBlend;
}

- (id)init;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (void).cxx_destruct;

@end
