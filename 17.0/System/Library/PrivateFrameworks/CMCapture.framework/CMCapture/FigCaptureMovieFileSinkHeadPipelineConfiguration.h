@class FigCaptureMovieFileSinkPipelineConfiguration, BWPipelineStage;

@interface FigCaptureMovieFileSinkHeadPipelineConfiguration : NSObject

@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage;
@property (retain, nonatomic) BWPipelineStage *transferPipelineStage;
@property (nonatomic) int visMotionMetadataPreloadingMode;

- (void)dealloc;

@end
