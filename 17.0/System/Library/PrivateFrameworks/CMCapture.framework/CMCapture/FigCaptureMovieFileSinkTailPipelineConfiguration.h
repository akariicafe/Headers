@class BWPhotoDecompressorNode, FigCaptureMovieFileSinkPipelineConfiguration, BWPipelineStage, NSArray, BWNodeOutput;

@interface FigCaptureMovieFileSinkTailPipelineConfiguration : NSObject

@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage;
@property (retain, nonatomic) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (retain, nonatomic) BWNodeOutput *videoSourceOutput;
@property (retain, nonatomic) BWNodeOutput *audioSourceOutput;
@property (retain, nonatomic) NSArray *metadataSourceOutputs;
@property (retain, nonatomic) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (nonatomic) int indexOfVideoOrientationInMetadataOutputs;
@property (nonatomic) BOOL vitalityScoringEnabled;
@property (nonatomic) BOOL delayedCompressorCleanupEnabled;

- (id)init;
- (void)dealloc;

@end
