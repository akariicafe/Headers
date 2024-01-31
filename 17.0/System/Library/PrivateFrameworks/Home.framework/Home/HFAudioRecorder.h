@class NSNumber, NSDateFormatter, NSString, NSURL, NSObject, AVAudioRecorder;
@protocol OS_dispatch_source, HFAudioRecorderDelegate;

@interface HFAudioRecorder : NSObject <AVAudioRecorderDelegate>

@property (weak, nonatomic) id<HFAudioRecorderDelegate> audioRecorderDelegate;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerMeteringTimer;
@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionIsActive;
@property (retain, nonatomic) AVAudioRecorder *audioRecorder;
@property (nonatomic) double recordingStartTimeInterval;
@property (nonatomic) double recordingStopTimeInterval;
@property (nonatomic) struct OpaqueAudioFileID { } *recordingAudiofileID;
@property (retain, nonatomic) NSURL *recordingAudiofileURL;
@property (nonatomic) long long totalPacketsCount;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) unsigned int soundIDForRecordBegin;
@property (nonatomic) unsigned int soundIDForRecordEnd;
@property (nonatomic) unsigned long long recordingStopSource;
@property (retain, nonatomic) NSNumber *routeChangeReason;
@property (nonatomic) double recordingDurationLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecording;
- (void)startRecording;
- (void)_cleanup;
- (void)dealloc;
- (void).cxx_destruct;
- (void)audioSessionMediaServicesWereLost:(id)a0;
- (void)audioSessionMediaServicesWereReset:(id)a0;
- (void)audioRecorderDidFinishRecording:(id)a0 successfully:(BOOL)a1;
- (double)currentRecordedDuration;
- (id)initWithAudioRecorderDelegate:(id)a0;
- (void)playAlertSoundForType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)prepareRecording;
- (void)_activateRecordingAudioSession;
- (id)_audioRecorderSettings;
- (void)_createSystemSounds;
- (void)_deactivateRecordingAudioSession;
- (void)_deregisterAudioSessionObservers;
- (BOOL)_isPowerMeteringTimerValid;
- (void)_playStartRecordingToneWithCompletion:(id /* block */)a0;
- (void)_playStopRecordingToneWithCompletion:(id /* block */)a0;
- (void)_registerAudioSessionObservers;
- (void)_setupAudioFileForRecording;
- (void)_startPowerMeteringTimer;
- (void)_stopPowerMeteringTimer;
- (void)audioSessionDidInterrupt:(id)a0;
- (void)audioSessionRouteChanged:(id)a0;
- (id)initWithActivationMode:(long long)a0 delegate:(id)a1;

@end
