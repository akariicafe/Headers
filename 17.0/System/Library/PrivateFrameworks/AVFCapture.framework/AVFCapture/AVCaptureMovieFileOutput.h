@class NSArray, AVCaptureMovieFileOutputInternal;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
    AVCaptureMovieFileOutputInternal *_internal;
}

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } movieFragmentInterval;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic, getter=isPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled) BOOL primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
@property (readonly, nonatomic) long long primaryConstituentDeviceSwitchingBehaviorForRecording;
@property (readonly, nonatomic) unsigned long long primaryConstituentDeviceRestrictedSwitchingBehaviorConditionsForRecording;

+ (void)initialize;
+ (id)new;
+ (long long)uniqueID;
+ (BOOL)consolidateMovieFragmentsInFile:(id)a0 error:(id *)a1;
+ (BOOL)updateMovieMetadataInFile:(id)a0 withMetadata:(id)a1 error:(id *)a2;

- (void)stopRecording;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)connectionMediaTypes;
- (void)setUsesVirtualCaptureCard:(BOOL)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)isRecording;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)removeConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (void)_updateDepthDataDeliverySupportedForSourceDevice:(id)a0;
- (void)pauseRecording;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)usesVirtualCaptureCard;
- (void)resumeRecording;
- (void)_updateSupportedPropertiesForSourceDevice:(id)a0;
- (id)outputFileURL;
- (BOOL)isVirtualCaptureCardSupported;
- (int)_stopRecording;
- (id)_avErrorUserInfoDictionaryForError:(int)a0 wrapper:(id)a1 payload:(id)a2;
- (void)_propagateBravoSwitchingBehaviorWhenRecording;
- (BOOL)_recordingInProgress;
- (void)_removeRecordingDelegateWrapper:(id)a0;
- (void)_startRecording:(id)a0;
- (void)_updateAvailableVideoCodecTypesForSourceDevice:(id)a0;
- (void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_updateMovieFragmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forVideoConnection:(id)a1 dimensions:(struct CGSize { double x0; double x1; })a2;
- (id)bravoCameraSelectionBehaviorForRecording;
- (void)handleDidPauseRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidResumeRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidStartRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)a0 withPayload:(id)a1 demoof:(BOOL)a2 addMetadata:(BOOL)a3;
- (void)handleDidStopRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1 demoof:(BOOL)a2 addMetadata:(BOOL)a3;
- (BOOL)isDepthCaptureEnabled;
- (BOOL)isRecordingPaused;
- (id)outputSettingsForConnection:(id)a0;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)a0;
- (BOOL)sendsLastVideoPreviewFrame;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)a0;
- (void)setConnectionsActive:(BOOL)a0;
- (void)setDepthCaptureEnabled:(BOOL)a0;
- (void)setOutputSettings:(id)a0 forConnection:(id)a1;
- (void)setPrimaryConstituentDeviceSwitchingBehaviorForRecording:(long long)a0 restrictedSwitchingBehaviorConditions:(unsigned long long)a1;
- (void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)a0 asMetadataTrackForConnection:(id)a1;
- (void)setSendsLastVideoPreviewFrame:(BOOL)a0;
- (void)startRecordingMovieWithSettings:(id)a0 delegate:(id)a1;
- (id)supportedOutputSettingsKeysForConnection:(id)a0;

@end
