@class BWNodeInput, NSString, BWFigVideoCaptureDevice, NSMutableArray;

@interface BWVideoPointCloudSynchronizerNode : BWNode <BWFigVideoCaptureDeviceMaxDepthFrameRateChangedDelegate> {
    BWFigVideoCaptureDevice *_captureDevice;
    float _depthMaxFrameRate;
    BOOL _depthMaxFrameRateAdjustmentPending;
    short _numberOfReceivedRGBFramesBeforeEmittingDepthFrame;
    short _numberOfReceivedRGBFramesSinceLastDepthFrameEmission;
    BOOL _shouldLetThroughFrames;
    NSMutableArray *_latestPointCloudBuffers;
    unsigned long long _numberOfReceivedPointCloudFramesBeforeEmitted;
    int _latestPointCloudBuffersCapacity;
    int _indexForLatestReceivedPointCloudFrame;
    BOOL _multiplePointCloudAttachmentsEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
}

@property (readonly, nonatomic) BWNodeInput *imageInput;
@property (readonly, nonatomic) BWNodeInput *pointCloudInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)_tryToEmitBuffersWithRGBBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_attachPointCloudDataToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_setUpPointCloudMediaConfigurationForOutput:(id)a0 inputAttachedMediaKey:(id)a1 outputAttachedMediaKey:(id)a2;
- (BOOL)_shouldEmitBuffer;
- (void)_updateNumberOfReceivedRGBFramesBeforeEmittingDepthFrameWithDepthMaxFrameRate:(float)a0 rgbMaxFrameRate:(float)a1;
- (void)didChangeDepthMaxFrameRate:(float)a0;
- (id)initWithCaptureDevice:(id)a0 timeOfFlightCameraType:(int)a1;

@end
