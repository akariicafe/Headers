@class NSString, SVXModule, SVXSpeechSynthesizer;
@protocol MDModeProviding;

@interface SVXServiceCommandHandlerUIAddViews : NSObject <SVXServiceCommandHandling> {
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXModule *_module;
    id<MDModeProviding> _modeProvider;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleAceView:(id)a0 isExpository:(BOOL)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithSpeechSynthesizer:(id)a0 module:(id)a1 modeProvider:(id)a2;
- (BOOL)isCommandUUFR:(id)a0;
- (void)prepareToHandleCommand:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldDependOnCommand:(id)a0;

@end
