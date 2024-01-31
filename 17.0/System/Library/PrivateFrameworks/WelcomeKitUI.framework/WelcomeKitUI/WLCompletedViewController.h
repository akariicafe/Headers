@class NSString, WLContext, WLWelcomeController;

@interface WLCompletedViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
    WLContext *_context;
}

@property (copy, nonatomic) id /* block */ continueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
