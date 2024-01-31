@class NSString, SBSStatusBarStyleOverridesCoordinator, SBSStatusBarStyleOverridesAssertion;
@protocol SFMediaRecordingDocument;

@interface SFMediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
}

@property (readonly, weak, nonatomic, getter=_recordingDocument) id<SFMediaRecordingDocument> recordingDocument;
@property (readonly, nonatomic, getter=_hasStatusBarOverride) BOOL hasStatusBarOverride;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, copy, nonatomic) NSString *simplifiedURLString;
@property (readonly, copy, nonatomic) NSString *statusString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateApp;
- (void).cxx_destruct;
- (void)_didInvalidateStatusBarOverride;
- (void)_acquireStatusBarOverride;
- (void)_acquireStatusBarOverrideWithAudioOnly:(BOOL)a0;
- (void)_cleanUpStatusBarOverride;
- (void)_didAcquireStatusBarOverrideSuccessfully:(BOOL)a0;
- (void)_releaseStatusBarOverride;
- (void)cancelStatusBarOverride;
- (unsigned long long)overrideStyleForAudioOnly:(BOOL)a0;
- (void)recordingDocumentDidBeginMediaCapture:(id)a0 audioOnly:(BOOL)a1;
- (void)recordingDocumentDidEndMediaCapture:(id)a0;
- (void)setRecordingDocument:(id)a0;
- (void)statusBarCoordinator:(id)a0 invalidatedRegistrationWithError:(id)a1;
- (BOOL)statusBarCoordinator:(id)a0 receivedTapWithContext:(id)a1 completionBlock:(id /* block */)a2;

@end
