@class NSString, SVXSpeechSynthesisRequest, SVXSpeechSynthesizer;
@protocol SVXPerforming;

@interface SVXServiceCommandHandlerUIRepeatIt : NSObject <SVXSpeechSynthesisListening, SVXServiceCommandHandling> {
    SVXSpeechSynthesizer *_speechSynthesizer;
    id<SVXPerforming> _performer;
    SVXSpeechSynthesisRequest *_lastStartedRequest;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithSpeechSynthesizer:(id)a0 performer:(id)a1;
- (BOOL)isCommandUUFR:(id)a0;
- (BOOL)shouldDependOnCommand:(id)a0;
- (void)speechSynthesizerDidBecomeBusy;
- (void)speechSynthesizerDidBecomeIdle;
- (void)speechSynthesizerDidCancelRequest:(id)a0 taskTracker:(id)a1;
- (void)speechSynthesizerDidFailRequest:(id)a0 taskTracker:(id)a1 error:(id)a2;
- (void)speechSynthesizerDidFinishRequest:(id)a0 utteranceInfo:(id)a1 record:(id)a2 taskTracker:(id)a3;
- (void)speechSynthesizerDidInterruptRequest:(id)a0 taskTracker:(id)a1;
- (void)speechSynthesizerDidStartRequest:(id)a0 record:(id)a1 taskTracker:(id)a2;
- (void)speechSynthesizerWillEnqueueRequest:(id)a0 taskTracker:(id)a1;
- (void)speechSynthesizerWillStartRequest:(id)a0 taskTracker:(id)a1;

@end
