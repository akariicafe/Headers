@interface CoreEmbeddedSpeechAnalyzer : NSObject <CoreEmbeddedSpeechRecognizerProvider> {
    void /* unknown type, empty encoding */ isHighPriority;
    void /* unknown type, empty encoding */ operationDequeuerTask;
    void /* unknown type, empty encoding */ _instanceUUID;
    void /* unknown type, empty encoding */ _taskPriority;
    void /* unknown type, empty encoding */ _operationEnqueuer;
    void /* unknown type, empty encoding */ _audioEnqueuer;
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ transcriber;
    void /* unknown type, empty encoding */ enablesVoiceCommands;
    void /* unknown type, empty encoding */ audioFormat;
    void /* unknown type, empty encoding */ samplingRate;
    void /* unknown type, empty encoding */ timeUntilRecognitionStartInMs;
    void /* unknown type, empty encoding */ bufferedAudioDataLength;
    void /* unknown type, empty encoding */ bufferedAudioPackets;
    void /* unknown type, empty encoding */ bufferedRequestEagerResultData;
    void /* unknown type, empty encoding */ bufferedAudioEnded;
    void /* unknown type, empty encoding */ audioDurationMs;
    void /* unknown type, empty encoding */ processedAudioDuration;
    void /* unknown type, empty encoding */ finishAudioError;
    void /* unknown type, empty encoding */ recognitionBeginTime;
    void /* unknown type, empty encoding */ recognitionEndTime;
    void /* unknown type, empty encoding */ analyzerOutputHandlerTask;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithDelegate:(id)a0 instanceUUID:(char *)a1;
- (id)init;
- (void)dealloc;
- (void)resumeRecognitionWithPrefixText:(id)a0 postfixText:(id)a1 selectedText:(id)a2;
- (void)stopAudioDecoding;
- (void)pauseRecognition;
- (void)startMissingAssetDownload;
- (void)preheatSpeechRecognitionWithAssetConfig:(id)a0 preheatSource:(id)a1 modelOverrideURL:(id)a2;
- (void)invalidate;
- (void)startSpeechRecognitionWithParameters:(id)a0 didStartHandlerWithInfo:(id /* block */)a1;
- (void)addAudioPacket:(id)a0;
- (void)addAudioPacket:(id)a0 packetRecordedTime:(id)a1 packetReadyUpstreamTime:(id)a2;
- (void).cxx_destruct;
- (void)finishAudio;
- (void)requestEagerResult;

@end
