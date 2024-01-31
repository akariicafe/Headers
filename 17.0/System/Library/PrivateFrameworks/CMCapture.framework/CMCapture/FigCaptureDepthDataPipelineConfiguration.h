@class BWPipelineStage, FigDepthDataCaptureConnectionConfiguration, NSDictionary, FigCaptureSourceVideoFormat, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureDepthDataPipelineConfiguration : NSObject {
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    BOOL _depthConvertedUpstream;
    BOOL _hardwareDepthFilteringEnabled;
    BOOL _videoAndConvertedDepthDataOutputEnabled;
    BWPipelineStage *_pipelineStage;
    struct { unsigned int val[8]; } _clientAuditToken;
    int _depthDataBaseRotationDegrees;
    NSDictionary *_cameraInfoByPortType;
    FigCaptureSourceVideoFormat *_requiredFormat;
    int _pearlModuleType;
}

- (void)dealloc;

@end
