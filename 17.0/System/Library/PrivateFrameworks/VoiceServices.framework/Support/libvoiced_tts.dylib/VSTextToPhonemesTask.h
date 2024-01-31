@interface VSTextToPhonemesTask : VSSpeechSpeakTask

@property (nonatomic) long long phonemeSystem;
@property (copy, nonatomic) id /* block */ reply;

- (void)main;
- (BOOL)isSpeaking;
- (void).cxx_destruct;

@end
