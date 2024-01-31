@class SiriTTSDaemonSession, SiriTTSSpeechRequest;

@interface _LTOfflineSpeechSynthesizer : NSObject {
    id /* block */ _completion;
    SiriTTSDaemonSession *_session;
    SiriTTSSpeechRequest *_currentRequest;
}

- (id)initWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)speak:(id)a0 withContext:(id)a1;

@end
