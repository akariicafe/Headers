@class NSString, NSArray, BWFigVideoCaptureDevice, FigCaptureSourceVideoFormat, NSMutableDictionary, NSDictionary, FigCaptureSourceDepthDataFormat, BWMultiStreamCameraSourceNode, BWNodeOutput, NSMutableArray, BWDeskCamNode, BWMemoryPool;
@protocol BWCinematicFramingStatesProvider;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline <BWVISOverscanPredictionDelegate> {
    BOOL _useCaptureOutputForPreview;
    int _deviceType;
    int _devicePosition;
    NSMutableArray *_sourceNodes;
    BWMultiStreamCameraSourceNode *_sourceNode;
    BWMultiStreamCameraSourceNode *_telephotoSourceNode;
    BWMultiStreamCameraSourceNode *_superWideSourceNode;
    BWMultiStreamCameraSourceNode *_infraredSourceNode;
    BWNodeOutput *_sourceFormatReferenceOutput;
    NSMutableArray *_synchronizerNodes;
    NSArray *_previewFilters;
    NSMutableDictionary *_cinematicFramingNodesBySourceDeviceType;
    NSMutableDictionary *_backgroundBlurNodesBySourceDeviceType;
    NSDictionary *_previewOutputsBySourceDeviceType;
    NSDictionary *_stillImageOutputsByPortType;
    NSDictionary *_stillImageSensorRawOutputsByPortType;
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    NSDictionary *_numberOfFaceTrackingConnectionConfigurationsBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType[20];
    NSArray *_pointCloudOutputs;
    unsigned int _nextPointCloudOutputIndex;
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWNodeOutput *_depthOutput;
    NSMutableArray *_sourceDeviceTypesWithLightSourceMaskAndKeypointDescriptorDataEnabledOnVideoCaptureOutputs;
    NSDictionary *_semanticMasksOutputsBySourceDeviceType;
    BWFigVideoCaptureDevice *_captureDevice;
    struct OpaqueFigCaptureSource { } *_captureSource;
    FigCaptureSourceVideoFormat *_captureSourceVideoFormat;
    FigCaptureSourceDepthDataFormat *_captureSourceDepthDataFormat;
    BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
    BWMemoryPool *_memoryPool;
    BOOL _overCapturePercentage;
    int _depthType;
    BOOL _hardwareDepthFilteringEnabled;
    BOOL _videoHDRImageStatisticsEnabled;
    int _maxFrameRateClientOverride;
    id<BWCinematicFramingStatesProvider> _cinematicFramingCameraStatesProvider;
    BWDeskCamNode *_deskCamNode;
    BOOL _enableSlaveFrameSynchronizerForZoomPIPOnly;
    BOOL _powerOptimizedVISOverscanEnabled;
    int _stillImageOutputRetainedBufferCountOverride;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)visOverscanPredictor:(id)a0 allowsReducedOverscan:(BOOL)a1;

@end
