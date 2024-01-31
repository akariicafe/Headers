@class VisionCoreMetalContext;
@protocol MTLComputePipelineState, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface LKTSparseGPU : NSObject {
    VisionCoreMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[6];
    unsigned long long _maxThreadExecutionWidth;
    struct CGSize { double width; double height; } _ref_pyr_size[10];
    struct CGSize { double width; double height; } _tgt_pyr_size[10];
    id<MTLTexture> _I_tex[2][10];
    struct __CVBuffer { } *_F0_pxbuf;
    struct __CVBuffer { } *_F1_pxbuf;
    id<MTLTexture> _F0_tex[10];
    id<MTLTexture> _F1_tex[10];
    struct __CVBuffer { } *_F0_dxdy_pxbuf;
    struct __CVBuffer { } *_F1_dxdy_pxbuf;
    id<MTLTexture> _F0_dxdy_tex[10];
    id<MTLTexture> _F1_dxdy_tex[10];
    id<MTLBuffer> _kptd_buf;
    id<MTLBuffer> _status_buf;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } ref_size;
@property (readonly, nonatomic) struct CGSize { double width; double height; } tgt_size;
@property (readonly, nonatomic) int nscales;
@property (readonly, nonatomic) id<MTLBuffer> keypointsTarget;
@property (readonly, nonatomic) id<MTLBuffer> keypointsStatus;

- (void)waitUntilCompleted;
- (void)dealloc;
- (void).cxx_destruct;
- (int)_setupBuffer;
- (void)_setDefaultParameters;
- (void)_setupPipelines;
- (void)_initMemory:(int)a0 height:(int)a1 nscales:(int)a2;
- (id)initWithMetalContext:(id)a0 width:(int)a1 height:(int)a2 nscales:(int)a3;
- (int)_enqueueFeaturesDerivativesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_enqueueFeaturesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_enqueueImagePyramidWithCommandBuffer:(id)a0 inputTexture:(id)a1 index:(int)a2;
- (int)_enqueueMatchingBidirectionalWithCommandBuffer:(id)a0 in_f0_tex:(id)a1 in_f1_tex:(id)a2 in_f0_dxdy_tex:(id)a3 in_f1_dxdy_tex:(id)a4 in_kpts_buf:(id)a5 in_kptd_buf:(id)a6 out_kptd_buf:(id)a7 out_status_buf:(id)a8 bidirectional_error:(float)a9 num_keypoints:(unsigned short)a10 scale_kpts:(float)a11 scale_kptd:(float)a12;
- (int)_enqueueMatchingWithCommandBuffer:(id)a0 in_f0_tex:(id)a1 in_f1_tex:(id)a2 in_f0_dxdy_tex:(id)a3 in_kpts_buf:(id)a4 in_kptd_buf:(id)a5 out_kptd_buf:(id)a6 out_status_buf:(id)a7 num_keypoints:(unsigned short)a8 scale_kpts:(float)a9 scale_kptd:(float)a10;
- (int)computeMatchingBidirectionalFromReferenceTexture:(id)a0 targetTexture:(id)a1 kptsBuffer:(id)a2 bidirectionalError:(float)a3 numKeypoints:(unsigned short)a4;
- (int)computeMatchingFromReferenceTexture:(id)a0 targetTexture:(id)a1 kptsBuffer:(id)a2 numKeypoints:(unsigned short)a3;

@end
