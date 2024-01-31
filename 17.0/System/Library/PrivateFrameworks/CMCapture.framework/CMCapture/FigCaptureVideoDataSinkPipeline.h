@class BWPixelTransferNode, NSString, FigCaptureVISPipeline, BWFigVideoCaptureDevice, BWNodeOutput;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureVISPipeline *_visPipeline;
    BWPixelTransferNode *_videoDataConverterRotatorNode;
    BWNodeOutput *_faceTrackingVideoCaptureOutput;
    BWNodeOutput *_offlineVISMotionDataCaptureOutput;
    NSString *_sourceID;
    int _sourceDeviceType;
    BOOL _optimizedForPreview;
}

+ (void)initialize;

- (void)dealloc;

@end
