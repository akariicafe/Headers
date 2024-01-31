@class NSDictionary;

@interface _LTMultilingualSpeechRecognizer : NSObject {
    NSDictionary *_recognizers;
}

- (void).cxx_destruct;
- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;
- (void)cancelRecognition;
- (id)initWithModelURLs:(id)a0 modelVersions:(id)a1;
- (void)setLanguagesRecognized:(id)a0;
- (void)startRecognitionForLocale:(id)a0 autoEndpoint:(BOOL)a1 resultHandler:(id /* block */)a2;

@end
