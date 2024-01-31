@class NSObject, AVAudioConverter, NSMutableArray, AVAudioFormat;
@protocol OS_dispatch_queue, SFSpeechRecognitionBufferDelegate;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {
    id<SFSpeechRecognitionBufferDelegate> _bufferDelegate;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    AVAudioConverter *_converter;
    BOOL _audioEnded;
    BOOL _narrowband;
}

@property (readonly, nonatomic) AVAudioFormat *nativeAudioFormat;

- (id)init;
- (void).cxx_destruct;
- (void)endAudio;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_initWithNarrowband:(BOOL)a0;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (id)_startedLocalConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3 taskIdentifier:(id)a4;
- (void)appendAudioPCMBuffer:(id)a0;

@end
