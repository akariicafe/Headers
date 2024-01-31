@class NSObject, ARGPUCubemapHistogram, ARGPUCubemapProjector, ARGPUCubemapConverter, ARGPUWarper;
@protocol OS_dispatch_queue;

@interface ARCubemapGenerator : NSObject {
    ARGPUCubemapProjector *_cubemapProjector;
    ARGPUCubemapConverter *_cubemapConverter;
    ARGPUCubemapHistogram *_cubemapHistogram;
    ARGPUWarper *_gpuWarper;
    NSObject<OS_dispatch_queue> *_cubemapQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)cubemapWithTransform:(SEL)a0 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 lastHistogram:(struct ARLabHistogram { float x0; float x1[4][8][8]; })a2 fromMeshes:(id)a3 cameraImage:(struct __CVBuffer { } *)a4 cameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a6 cameraExposure:(double)a7 cameraExposureOffset:(float)a8 completionHandler:(id /* block */)a9;

@end
