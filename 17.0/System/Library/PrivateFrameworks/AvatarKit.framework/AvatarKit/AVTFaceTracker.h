@class ARSession, ARConfiguration, NSPointerArray, NSURL, NSLock, AVTFaceTrackingInfo, AVDepthData;

@interface AVTFaceTracker : NSObject {
    ARSession *_arSession;
    ARConfiguration *_arConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _arSessionLock;
    NSPointerArray *_delegates;
    AVTFaceTrackingInfo *_trackingInfo;
    NSLock *_trackingDataLock;
    NSURL *_debugRecordingURL;
    BOOL _trackingIsPaused;
    BOOL _isActive;
    BOOL _shouldUseAudioData;
    BOOL _wantsPersonSegmentation;
    struct { double refTimestamp; double arDelegateTimestamp; } _perfPacket;
    double _lastARFrameTime;
    long long _frame_id;
    double _timeBetweenARFrame;
    long long _interfaceOrientation;
}

@property (class, nonatomic) BOOL usesInternalTrackingPipeline;

@property (nonatomic) BOOL shouldConstrainHeadPose;
@property (nonatomic) BOOL shouldUseAudioData;
@property (nonatomic) BOOL wantsPersonSegmentation;
@property (nonatomic, getter=faceTrackingIsPaused) BOOL faceTrackingPaused;
@property (nonatomic) BOOL skipUpdates;
@property (readonly, nonatomic) BOOL faceIsTracked;
@property (readonly, nonatomic) BOOL lowLight;
@property (readonly, nonatomic, getter=isSensorCovered) BOOL sensorCovered;
@property (readonly) double lastUpdateTimestamp;
@property (readonly) double lastUpdateWithTrackedFaceTimestamp;
@property (readonly, nonatomic) AVTFaceTrackingInfo *faceTrackingInfo;
@property (readonly, nonatomic) long long faceTrackingFrameID;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rawTransform;
@property (readonly, nonatomic) ARSession *arSession;
@property (nonatomic) BOOL directRetargetingMode;
@property (nonatomic) BOOL limitRoll;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic) struct CGSize { double width; double height; } cameraImageResolution;
@property (readonly, nonatomic) long long captureVideoOrientation;
@property (readonly, nonatomic) AVDepthData *fallBackDepthData;
@property (readonly, nonatomic) BOOL mirroredDepthData;
@property (readonly, nonatomic) double arFrameTimestamp;
@property (readonly, nonatomic) double arDelegateTimestamp;
@property (readonly, nonatomic) double arFrameDeltaTime;
@property (copy) NSURL *faceTrackingRecordingURL;

- (void)stopRecording;
- (void)startRecording;
- (id)init;
- (void)run;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)sessionInterruptionEnded:(id)a0;
- (void)stop;
- (long long)interfaceOrientation;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)setInterfaceOrientation:(long long)a0;
- (void)sessionWasInterrupted:(id)a0;
- (BOOL)isActive;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)setSensorCovered:(BOOL)a0;
- (void)setLowLight:(BOOL)a0;
- (void)session:(id)a0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)beginQuery;
- (void)decreaseFrameRate;
- (void)increaseFrameRateToMaximum;
- (void)updateWithARFrame:(id)a0 worldAlignment:(long long)a1 fallBackDepthData:(id)a2 captureOrientation:(long long)a3 interfaceOrientation:(long long)a4 constrainHeadPose:(BOOL)a5 mirroredDepthData:(BOOL)a6;
- (void)_setupARKitForDebugging:(BOOL)a0;
- (void)configurationVideoFormatDidChange:(id)a0;
- (void)copyTrackingData:(struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *)a0;
- (void)discardARFrameData;
- (void)endQuery;
- (void)enumerateDelegates:(id /* block */)a0;
- (BOOL)faceTrackingPaused;
- (struct { void /* unknown type, empty encoding */ x0[4]; })projectionMatrixForViewportSize:(struct CGSize { double x0; double x1; })a0 zNear:(double)a1 zFar:(double)a2;
- (void)setupARKit;
- (void)setupARKitForDebugging;
- (void)updateWithARFrame:(id)a0 captureOrientation:(long long)a1 interfaceOrientation:(long long)a2 constrainHeadPose:(BOOL)a3 mirroredDepthData:(BOOL)a4;

@end
