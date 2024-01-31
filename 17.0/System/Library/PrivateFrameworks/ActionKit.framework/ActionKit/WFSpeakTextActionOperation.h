@class WFSpeechSynthesizer, NSProgress, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WFSpeakTextActionOperation : NSObject <WFActionExtendedOperation, WFSpeechSynthesizerDelegate>

@property (weak, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) WFSpeechSynthesizer *synthesizer;
@property (readonly, nonatomic) NSMutableArray *completionHandlers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)addCompletionHandlerIfRunning:(id /* block */)a0;
- (void)callCompletionHandlersWithError:(id)a0;
- (void)cleanupSpeechSynthesizer;
- (void)speakTextUsingSynthesizer:(id)a0 voice:(id)a1 rate:(float)a2 pitch:(float)a3;
- (void)speechSynthesizer:(id)a0 didFailSpeakingUtterance:(id)a1 error:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfUtterance:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;

@end
