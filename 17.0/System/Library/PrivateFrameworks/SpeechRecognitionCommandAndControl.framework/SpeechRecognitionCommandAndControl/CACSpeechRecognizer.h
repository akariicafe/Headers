@class NSString, CACLanguageModel;

@interface CACSpeechRecognizer : NSObject {
    BOOL _waitingForResponse;
    BOOL _avoidMessagingRXDuringCancel;
    BOOL _isListening;
    BOOL _requestCloseMatchResults;
    BOOL _spellingMode;
    BOOL _numberMode;
    struct __RXRecognizer { } *_recognizer;
    CACLanguageModel *_languageModel;
    id _delegate;
}

@property unsigned long long recognizerFlags;
@property (nonatomic) BOOL preventRecognizedTextFeedback;
@property (readonly) struct __RXLanguageObject { } *rxLanguageModel;
@property (retain) NSString *name;
@property BOOL requestCloseMatchResults;
@property BOOL spellingMode;
@property BOOL numberMode;

- (BOOL)isListening;
- (void)dealloc;
- (id)languageModel;
- (void)startListening;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)stopListening;
- (void)setCommandInfo:(id)a0;
- (void)closeSpeechRecognizer;
- (BOOL)isSpeechRecognizerOpen;
- (BOOL)numberMode;
- (void)openSpeechRecognizer;
- (void)registerSpeechCorrectionFromText:(id)a0 toText:(id)a1 forIdentifier:(id)a2;
- (BOOL)requestCloseMatchResults;
- (void)setLanguageModel:(id)a0;
- (void)setNumberMode:(BOOL)a0;
- (void)setRequestCloseMatchResults:(BOOL)a0;
- (void)setSpellingMode:(BOOL)a0;
- (BOOL)spellingMode;

@end
