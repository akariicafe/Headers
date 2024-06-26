@class NSMutableDictionary, NSUUID, CMContinuityCaptureAVCaptureVideoSession, NSDictionary, AVCaptureDevice, AVCaptureMetadataOutput, AVCStreamInput, DKNotificationAgent, AVCVideoStream, AVCaptureDeviceInput, AVCaptureVideoDataOutput, NSString, NSArray, AVCaptureDeviceFormat, AVCapturePhotoOutput, AVCaptureConnection;
@protocol ContinuityCaptureTransportDevice;

@interface CMContinuityCaptureRemoteVideoDevice : CMContinuityCaptureDeviceBase <AVCVideoStreamDelegate, AVCStreamInputDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCapturePhotoCaptureDelegate> {
    BOOL _manualFramingFeatureFlagEnabled;
    NSMutableDictionary *_photoRequests;
    AVCVideoStream *_avcVideoStream;
    AVCStreamInput *_avcStreamInput;
    NSMutableDictionary *_cmControlByName;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureDeviceInput *_videoDataInput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureDevice *_videoDevice;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureConnection *_videoDataConnection;
    NSArray *_connections;
    BOOL _avcStreamInputActive;
    id /* block */ _stopCompletionBlock;
    unsigned long long _videoBufferDropCounter;
    id<ContinuityCaptureTransportDevice> _transportDevice;
    BOOL _captureStackActive;
    NSMutableDictionary *_cmControlByNameWithPendingUpdates;
    NSUUID *_cameraCaptureStreamSessionID;
    BOOL _isUltraWideCameraSupported;
    BOOL _videoDeviceKVOsActive;
    BOOL _gazeSelectionEnabled;
    BOOL _dockedTrackingSupported;
    DKNotificationAgent *_dockKitNotificationAgent;
    BOOL _propagateCaptureSessionRestartedAttachment;
}

@property (readonly, getter=isStreamingOnSuperWide) BOOL streamingOnSuperWide;
@property BOOL faceDrivenAFActive;
@property long long deskViewCameraMode;
@property (retain) AVCaptureDeviceFormat *format;
@property unsigned int maxFrameRate;
@property unsigned int minFrameRate;
@property double videoZoomFactor;
@property BOOL centerStageEnabled;
@property (retain) NSDictionary *centerStageRectOfInterest;
@property long long centerStageFramingMode;
@property BOOL portraitEffect;
@property BOOL studioLighting;
@property BOOL reactionEffects;
@property (retain) AVCaptureDevice *videoDevice;
@property (retain) AVCaptureVideoDataOutput *videoDataOutput;
@property (retain) AVCaptureConnection *videoDataConnection;
@property (retain) AVCaptureDeviceInput *videoDataInput;
@property (retain) NSArray *connections;
@property BOOL shouldRestoreCenterStageOnWideCamera;
@property (readonly, getter=isGazeSelectionEnabled) BOOL gazeSelectionEnabled;
@property (getter=isDockedTrackingEnabled) BOOL dockedTrackingEnabled;
@property (weak) CMContinuityCaptureRemoteVideoDevice *companionDevice;
@property (readonly, retain) CMContinuityCaptureAVCaptureVideoSession *captureSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStudioLightingIntensity:(float)a0;
- (id)controls;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 didFinishCaptureForResolvedSettings:(id)a1 error:(id)a2;
- (float)reactionEffectGesturesEnabled;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (float)studioLightingIntensity;
- (void)setReactionEffectGesturesEnabled:(float)a0;
- (void)streamDidStop:(id)a0;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (void)serverDidDie;
- (void)_updateManualFramingDeviceType:(long long)a0;
- (id)_avfDeviceTypeForManualFramingDeviceType:(long long)a0;
- (BOOL)_companionConnectionsRequired;
- (void)_configureVideoEffects;
- (BOOL)_deviceFormat:(id)a0 isCompatibleWithConfiguration:(id)a1 requiringMultiCamSupport:(BOOL)a2 minFrameRate:(unsigned int)a3 maxFrameRate:(unsigned int)a4;
- (void)_disableCenterStage;
- (void)_disableManualFraming;
- (void)_enableCenterStage;
- (void)_enableManualFraming;
- (void)_forcefullyEnableCenterStageOnSuperWide;
- (BOOL)_isUltraWideCameraSupported;
- (void)_registerDockKitNotification;
- (void)_restoreStatesAfterForcefulCenterStageEnablementAndShouldReconfigureCaptureStack:(BOOL)a0;
- (id)_selectVideoDeviceForConfiguration:(id)a0;
- (BOOL)_shouldOnlyDisableVideoConnection;
- (BOOL)_shouldPrintDroppedSampleBufferLog:(long long)a0;
- (void)_stopCameraCaptureStackRemoveCaptureSessionConnectionsWithOption:(unsigned long long)a0;
- (void)_toggleBetweenCenterStageAndManualFraming;
- (void)_updateControlStatus;
- (void)_updatePhotoOutputConfigs;
- (void)addVideoDeviceKVOs;
- (void)captureStillImage:(id)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (id)compatibleDeviceFormatForMaxFrameRate:(unsigned int)a0 minFrameRate:(unsigned int)a1;
- (BOOL)configureConnections;
- (id)connectionsForConfiguration:(id)a0;
- (id)createAVCVideoStream;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)enqueueReactionEffect:(id)a0 entity:(long long)a1;
- (id)initWithCapabilities:(id)a0 compositeDelegate:(id)a1 captureSession:(id)a2;
- (id)newVideoStreamCurrentConfiguration:(long long)a0;
- (float)portraitEffectAperture;
- (void)postAVCStreamInterruption;
- (void)postActionCompletionForEventName:(id)a0 eventData:(id)a1 error:(id)a2;
- (void)postActionOfType:(unsigned long long)a0 forEvent:(id)a1 option:(unsigned long long)a2;
- (void)removeVideoDeviceKVOs;
- (void)setMinFrameDurationOverrideIfApplicable;
- (void)setPortraitEffectAperture:(float)a0;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)setupControls;
- (BOOL)startAVConferenceStack:(unsigned long long)a0;
- (BOOL)startCameraCaptureStack:(unsigned long long)a0;
- (BOOL)stopAVConferenceStack;
- (BOOL)stopCameraCaptureStack:(unsigned long long)a0;
- (void)stopCaptureStack:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)tearDownConnectionsWithVideoDataConnectionDisabled:(BOOL)a0;
- (void)terminateComplete:(id /* block */)a0;
- (unsigned int)throttledMaxFrameRate;
- (void)updateControlStatus;

@end
