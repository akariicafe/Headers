@class NSMutableArray, FigCaptureMovieFileSinkHeadPipeline, OS_os_workgroup, BWFigVideoCaptureDevice, FigCaptureMovieFileSinkMiddlePipeline;

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    FigCaptureMovieFileSinkMiddlePipeline *_middlePipeline;
    NSMutableArray *_tailPipelines;
    NSMutableArray *_movieFileSinkNodes;
    NSMutableArray *_videoCompressorNodes;
    NSMutableArray *_sdofCompressorNodes;
    BOOL _momentCaptureMovieRecordingEnabled;
    BOOL _overCaptureTailPipelineRenderingEnabled;
    BOOL _overCaptureEnabled;
    int _videoStabilizationStrength;
    OS_os_workgroup *_workgroup;
}

+ (void)initialize;

- (void)dealloc;
- (id)middlePipeline;

@end
