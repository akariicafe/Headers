@class NSString, AVCaptureSession, NSObject;
@protocol OS_dispatch_queue, CIDVRGBAVSessionManagerDelegate;

@interface _CIDVRGBAVSessionManagerBase : NSObject <CIDVRGBAVSessionManager>

@property (readonly, nonatomic) AVCaptureSession *session;
@property (readonly, nonatomic) BOOL isRunning;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<CIDVRGBAVSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecording;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void)stop;
- (void)pauseRecording;
- (void).cxx_destruct;
- (void)resumeRecording;
- (void)setup;
- (void)_setupAVSession;
- (void)_addAVSessionInput:(id)a0;
- (id)_buildAVCaptureInput;
- (void)_configureOutput:(id)a0;
- (void)_manageAVSessionNotification:(id)a0;
- (void)_requestAccessToAVDeviceWithCompletionHandler:(id /* block */)a0;
- (void)_startObservingAVSessionNotifications;
- (void)addAVSessionOutput:(id)a0;
- (id)buildAVSessionCaptureOutputs;
- (void)capturePhotoUsingFlashMode:(long long)a0;
- (void)configureAVSessionCaptureOutputs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentTimestamp;
- (void)invalidateAVSession;
- (void)pauseFileRecording;
- (void)restartFileRecordingWithCompletionHandler:(id /* block */)a0;
- (void)restartRecordingWithCompletionHandler:(id /* block */)a0;
- (void)resumeFileRecording;
- (void)startAVSession;
- (void)stopAVSession;
- (void)stopFileRecording;

@end
