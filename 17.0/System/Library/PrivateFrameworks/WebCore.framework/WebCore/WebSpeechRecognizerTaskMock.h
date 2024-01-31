@interface WebSpeechRecognizerTaskMock : WebSpeechRecognizerTask {
    struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } _identifier;
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> { id /* block */ m_block; } _delegateCallback;
    BOOL _doMultipleRecognitions;
    BOOL _hasSentSpeechStart;
    BOOL _hasSentSpeechEnd;
    BOOL _completed;
}

- (void)abort;
- (id).cxx_construct;
- (void)stop;
- (void).cxx_destruct;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithIdentifier:(struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; })a0 locale:(id)a1 doMultipleRecognitions:(BOOL)a2 reportInterimResults:(BOOL)a3 maxAlternatives:(unsigned long long)a4 delegateCallback:(id /* block */)a5;

@end
