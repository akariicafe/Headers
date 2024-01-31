@class BWVideoCompressorNode, BWQuickTimeMovieFileSinkNode, BWPixelTransferNode, FigCaptureVISPipeline, BWBackPressureNode;
@protocol BWMRCSceneObserver, BWNodeBackPressureSource;

@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline {
    BWPixelTransferNode *_scalerNode;
    BWVideoCompressorNode *_depthCompressorNode;
    BWBackPressureNode *_irisIntermediateJPEGDecompressionBackPressureNode;
    BWBackPressureNode *_visBackPressureNode;
    BWBackPressureNode *_scalerBackPressureNode;
    BWBackPressureNode *_irisSDOFVISBackPressureNode;
    id<BWNodeBackPressureSource> _visBackPressureSourceNode;
    unsigned long long _tailIndex;
    int _visBackPressureExtraRetainedBufferCount;
    int _videoStabilizationType;
    BOOL _offlineVISEnabled;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (readonly, nonatomic) BWQuickTimeMovieFileSinkNode *movieFileSinkNode;
@property (readonly, nonatomic) BWVideoCompressorNode *videoCompressorNode;
@property (readonly, nonatomic) BWVideoCompressorNode *sdofCompressorNode;
@property (readonly, nonatomic) FigCaptureVISPipeline *visPipeline;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } irisVISCleanOutputRectForCLAP;
@property (readonly, nonatomic) struct { int x0; int x1; } offlineVISDimensions;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL sceneClassifierSuspended;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0 tailIndex:(unsigned long long)a1 numTailPipelines:(unsigned long long)a2 graph:(id)a3 parentPipeline:(id)a4 captureDevice:(id)a5 inferenceScheduler:(id)a6 recordingStatusDelegate:(id)a7 workgroup:(id)a8;

@end
