@class BWVideoOrientationTimeMachine, NSObject;
@protocol OS_dispatch_queue;

@interface BWVideoOrientationMetadataNode : BWNode {
    struct OpaqueCMClock { } *_clock;
    struct OpaqueCMClock { } *_masterClock;
    int _videoOrientation;
    BOOL _videoMirrored;
    int _sourcePosition;
    int _sourceDeviceType;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    unsigned int _localIDOfOrientationMetadata;
    BOOL _recordVideoOrientationAndMirroringChanges;
    BOOL _physicalMirroringForMovieRecordingEnabled;
    BOOL _flipMetadataHorizontally;
    BOOL _recording;
    int _exifOrientation;
    struct OpaqueCMBlockBuffer *_bbufCache[8];
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property (readonly, nonatomic) BWVideoOrientationTimeMachine *videoOrientationTimeMachine;

+ (void)initialize;

- (id)init;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (int)sourceDeviceType;
- (void)dealloc;
- (struct OpaqueCMClock { } *)masterClock;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (BOOL)physicalMirroringForMovieRecordingEnabled;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)a0;
- (void)updateVideoMirrored:(BOOL)a0;
- (void)setSourceDeviceType:(int)a0;
- (int)sourcePosition;
- (void)setSourcePosition:(int)a0;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (void)updateVideoOrientation:(int)a0;

@end
