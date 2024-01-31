@protocol MTLComputePipelineState, MTLDevice, MTLBuffer, MTLLibrary, MTLCommandQueue, MTLFunction;

@interface MetalRANSACDispatcher : NSObject

@property (retain, nonatomic) id<MTLDevice> m_metalDevice;
@property (retain, nonatomic) id<MTLLibrary> m_metalLibrary;
@property (retain, nonatomic) id<MTLCommandQueue> m_metalCommandQueue;
@property (retain, nonatomic) id<MTLFunction> m_metalKernelFunction;
@property (retain, nonatomic) id<MTLComputePipelineState> m_metalPipeline;
@property (nonatomic) unsigned long long m_numThreadsPerGroup;
@property (nonatomic) unsigned long long m_maxCorrespondences;
@property (retain, nonatomic) id<MTLBuffer> m_mX;
@property (retain, nonatomic) id<MTLBuffer> m_mXhat;
@property (retain, nonatomic) id<MTLBuffer> m_ScoreBuffer;
@property (retain, nonatomic) id<MTLBuffer> m_RansacParams;
@property (retain, nonatomic) id<MTLBuffer> m_RansacHomographies;
@property (retain, nonatomic) id<MTLBuffer> m_ModelScores;
@property (nonatomic) float inlierLimit;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;

- (void).cxx_destruct;
- (void)assureSizeAndCopyToMetalBuffer:(id *)a0 fromData:(const void *)a1 dataSize:(unsigned long long)a2 metalResourceOptions:(unsigned long long)a3;
- (id)initWithMaxCorrespondences:(unsigned long long)a0;
- (void)performRansacOnData:(unsigned int)a0 firstPointSet:(const float *)a1 secondPointSet:(const float *)a2 pointWeights:(const float *)a3 homographies:(const struct ransac_homography_record { float x0[9]; } *)a4 numHomographies:(unsigned int)a5 homScores:(float *)a6;

@end
