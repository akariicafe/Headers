@class NSURL, NSString, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemonProxy;

- (id)init;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void).cxx_destruct;
- (oneway void)setMicrophoneEnabled:(BOOL)a0;
- (oneway void)stopSystemRecordingWithURLHandler:(id /* block */)a0;
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)stopSystemRecordingWithHandler:(id /* block */)a0;
- (oneway void)stopSystemBroadcastWithHandler:(id /* block */)a0;
- (oneway void)captureHandlerWithAudioSample:(id)a0 bufferType:(long long)a1;
- (oneway void)captureHandlerWithSample:(id)a0 timingData:(id)a1;
- (oneway void)consumeSandboxExtension:(id)a0 processNewConnection:(BOOL)a1;
- (oneway void)discardInAppRecordingWithHandler:(id /* block */)a0;
- (oneway void)exportClipToURL:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (oneway void)getSystemBroadcastExtensionInfo:(id /* block */)a0;
- (oneway void)getSystemBroadcastPickerInfo:(id /* block */)a0;
- (id)issueSandboxExtensionForClientFileWrite:(id)a0;
- (void)issueSandboxExtensionForMainBundleRead;
- (oneway void)macApplicationDidBecomeActiveWithContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)macApplicationDidResignActive;
- (oneway void)openControlCenterSystemRecordingView;
- (oneway void)pauseInAppBroadcast;
- (oneway void)pauseInAppCapture;
- (oneway void)pauseInAppRecording;
- (oneway void)recordingDidPause;
- (oneway void)recordingDidStopWithError:(id)a0 movieURL:(id)a1;
- (oneway void)recordingLockInterrupted:(id)a0;
- (oneway void)recordingTimerDidUpdate:(id)a0;
- (oneway void)reportCameraUsage:(long long)a0;
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)resumeInAppClipWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)resumeSystemBroadcastWithCompletionHandler:(id /* block */)a0;
- (oneway void)resumeSystemRecordingWithCompletionHandler:(id /* block */)a0;
- (oneway void)saveClipToCameraRoll:(id)a0 handler:(id /* block */)a1;
- (oneway void)saveVideo:(id)a0 handler:(id /* block */)a1;
- (oneway void)saveVideoToCameraRoll:(id)a0 handler:(id /* block */)a1;
- (oneway void)setBroadcastPickerPreferredExt:(id)a0 showsMicButton:(BOOL)a1;
- (oneway void)setupBroadcastWithHostBundleID:(id)a0 broadcastExtensionBundleID:(id)a1 broadcastConfigurationData:(id)a2 userInfo:(id)a3 handler:(id /* block */)a4;
- (oneway void)setupSystemBroadcastWithHostBundleID:(id)a0 broadcastExtensionBundleID:(id)a1 broadcastConfigurationData:(id)a2 userInfo:(id)a3 handler:(id /* block */)a4;
- (oneway void)shouldResumeSessionType:(id)a0;
- (oneway void)startClipBufferingWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
- (oneway void)startInAppBroadcastWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 listenerEndpoint:(id)a4 withHandler:(id /* block */)a5;
- (oneway void)startInAppCaptureWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)startInAppRecordingWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)startSystemBroadcastWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 listenerEndpoint:(id)a4 withHandler:(id /* block */)a5;
- (oneway void)startSystemRecordingWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)stopAllActiveClients;
- (oneway void)stopClipBufferingWithCompletionHandler:(id /* block */)a0;
- (oneway void)stopCurrentActiveSessionWithHandler:(id /* block */)a0;
- (oneway void)stopInAppBroadcastWithHandler:(id /* block */)a0;
- (oneway void)stopInAppCaptureWithHandler:(id /* block */)a0;
- (oneway void)stopInAppRecordingWithHandler:(id /* block */)a0;
- (oneway void)stopInAppRecordingWithUrl:(id)a0 handler:(id /* block */)a1;
- (oneway void)updateBroadcastServiceInfo:(id)a0;
- (oneway void)updateBroadcastURL:(id)a0;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)a0;
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)a0;

@end
