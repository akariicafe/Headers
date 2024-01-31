@class AVVoiceController, NSString, NSDictionary, CKAudioAnalyzer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CKVoiceControllerDelegate;

@interface CKVoiceController : NSObject <AVVoiceControllerRecordDelegate>

@property (nonatomic, setter=_setActivationMode:) long long _activationMode;
@property (copy, nonatomic) NSDictionary *recordSettings;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerUpdateTimer;
@property (retain, nonatomic) AVVoiceController *voiceController;
@property (nonatomic) unsigned long long streamID;
@property (retain, nonatomic) CKAudioAnalyzer *audioAnalyzer;
@property (weak, nonatomic) id<CKVoiceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playAlertSoundForType:(int)a0;
- (void)setActivationMode:(long long)a0;
- (void)dealloc;
- (void)record;
- (void)cleanup;
- (float)averagePower;
- (void)stop;
- (void).cxx_destruct;
- (void)releaseAudioSession;
- (id)initWithActivationMode:(long long)a0 recordSettings:(id)a1 queue:(id)a2;
- (void)messageSent:(id)a0;
- (void)startUpdatingPower;
- (void)stopUpdatingPower;
- (void)voiceControllerAudioCallback:(id)a0 forStream:(unsigned long long)a1 buffer:(id)a2;
- (void)voiceControllerDidDetectStartpoint:(id)a0;
- (void)voiceControllerDidStartRecording:(id)a0 forStream:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)voiceControllerDidStopRecording:(id)a0 forStream:(unsigned long long)a1 forReason:(long long)a2;
- (void)voiceControllerDidStopRecordingForClientError;
- (void)voiceControllerStreamInvalidated:(id)a0 forStream:(unsigned long long)a1;

@end
