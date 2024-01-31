@class BWFigVideoCaptureDevice, NSString, NSArray, BWCompressedShotBufferNode, BWStillImageSampleBufferSinkNode, BWSISNode, BWStillImageCoordinatorNode, BWPortraitHDRStagingNode, BWDepthConverterNode, BWStillImageBravoDisparityNode;

@interface FigCaptureStillImageSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {
    BWFigVideoCaptureDevice *_captureDevice;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
    BWSISNode *_legacySISNode;
}

@property (class, readonly) NSString *pipelineBaseName;

@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) NSString *sinkID;
@property (readonly, nonatomic) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (readonly, nonatomic) BWCompressedShotBufferNode *compressedShotBufferNode;
@property (readonly, nonatomic) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (readonly, nonatomic) BWPortraitHDRStagingNode *portraitHDRStagingNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (id)initWithConfiguration:(id)a0 captureDevice:(id)a1 sourceOutputsByPortType:(id)a2 captureStatusDelegate:(id)a3 inferenceScheduler:(id)a4 graph:(id)a5 name:(id)a6;

@end
