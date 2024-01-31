@class FigDepthDataCaptureConnectionConfiguration, NSString, BWFigVideoCaptureDevice, BWDepthRotatorNode, NSDictionary, BWPointCloudDensificationNode, BWVideoPointCloudSynchronizerNode, BWNodeOutput;

@interface FigCaptureLiDARDepthPipeline : FigCapturePipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    NSDictionary *_cameraInfoByPortType;
    NSDictionary *_sensorIDStringsByPortType;
    FigDepthDataCaptureConnectionConfiguration *_depthDataCaptureConnectionConfiguration;
    int _rgbCameraHorizontalSensorBinningFactor;
    int _rgbCameraVerticalSensorBinningFactor;
    unsigned int _depthPixelFormat;
    BOOL _depthDataFilteringEnabled;
    struct { int width; int height; } _depthOutputDimensions;
    BWVideoPointCloudSynchronizerNode *_synchronizerNode;
    BWPointCloudDensificationNode *_pointCloudDensificationNode;
    BWDepthRotatorNode *_depthRotatorNode;
}

@property (readonly, nonatomic) BWNodeOutput *depthDataSinkOutput;
@property (readonly, nonatomic) NSString *rgbCameraSourceID;

+ (void)initialize;

- (void)dealloc;
- (int)_buildLiDARDepthPipelineWithVideoSourceCaptureOutput:(id)a0 pointCloudOutput:(id)a1 graph:(id)a2 videoInputDimensions:(struct { int x0; int x1; })a3 timeOfFlightCameraType:(int)a4;
- (id)initWithCaptureDevice:(id)a0 cameraInfoByPortType:(id)a1 sensorIDStringsByPortType:(id)a2 timeOfFlightCameraType:(int)a3 depthDataCaptureConnectionConfiguration:(id)a4 videoSourceCaptureOutput:(id)a5 pointCloudOutput:(id)a6 graph:(id)a7 name:(id)a8 rgbCameraSourceID:(id)a9 errorOut:(int *)a10;

@end
