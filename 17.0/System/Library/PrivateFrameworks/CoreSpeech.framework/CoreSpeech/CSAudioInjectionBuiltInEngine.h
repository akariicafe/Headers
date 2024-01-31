@class NSUUID, NSString, CSAudioInjectionDevice, CSAudioCircularBuffer, NSDictionary, NSMutableArray, NSObject, CSKeywordAnalyzerNDEAPI;
@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate;

@interface CSAudioInjectionBuiltInEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSAudioInjectionEngineDelegate> delegate;
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzer;
@property (retain, nonatomic) CSAudioCircularBuffer *circularBuffer;
@property (nonatomic) unsigned long long lastForwardedSampleCount;
@property (retain, nonatomic) NSMutableArray *hostTimeBuffer;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL voiceTriggerEnabled;
@property (weak, nonatomic) CSAudioInjectionDevice *connectedDevice;
@property (nonatomic) BOOL isForwarding;
@property (nonatomic) unsigned long long voiceTriggerSampleCount;
@property (retain, nonatomic) NSDictionary *userIntentOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRecording;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)isAlwaysOnVoiceTriggerAvailable;
- (void)setAlwaysOnVoiceTriggerEnabled:(BOOL)a0;
- (void)stopAudioStream;
- (BOOL)alwaysOnVoiceTriggerEnabled;
- (void)attachDevice:(id)a0;
- (void)audioEngineAudioChunkForTvAvailable:(id)a0 audioChunk:(id)a1;
- (void)audioEngineBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4 isFileLoadedBuffer:(BOOL)a5;
- (void)audioEngineDidStartRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)audioEngineDidStopRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 reason:(unsigned long long)a2;
- (long long)getBestSampleCountWithOption:(id)a0;
- (id)initWithStreamHandleId:(unsigned long long)a0;
- (BOOL)injectAudio:(id)a0;
- (BOOL)injectAudio:(id)a0 withScaleFactor:(float)a1 playbackStarted:(id /* block */)a2 completion:(id /* block */)a3;
- (void)startAudioStreamWithOption:(id)a0;

@end
