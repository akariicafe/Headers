@class NSData, NSString, NSURL, _EARSpeechRecognitionResultPackage, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface VATSpeechRecognizer : NSObject <_EARSpeechRecognitionResultStream> {
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_buffer;
    BOOL _detectedSpeechEndpoint;
    _EARSpeechRecognitionResultPackage *_finalResult;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    double firstSampleTime;
    double firstPartialTime;
    double endAudioTime;
    double finalResultTime;
    NSString *_task;
    int _sampleRate;
}

@property (copy, nonatomic) id /* block */ recognitionHandler;
@property (retain, nonatomic) NSData *audioDataWithInjectedSilence;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSLocale *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;
- (void)cancelRecognition;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResultPackage:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;
- (void)triggerServerSideEndPointer;
- (void)_recognizedResult:(id)a0 error:(id)a1;
- (id)initWithModelURL:(id)a0 language:(id)a1 modelVersion:(id)a2;
- (void)startRecognitionWithAutoStop:(BOOL)a0 resultHandler:(id /* block */)a1;
- (id)initWithAssetPath:(id)a0 language:(id)a1;
- (void)startRecognitionWithAutoStop:(BOOL)a0 pcmBuffer:(id)a1 resultHandler:(id /* block */)a2;

@end
