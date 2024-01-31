@interface STEyeReliefIntroHowItWorksViewController : OBWelcomeController

@property (copy) id /* block */ completionHandler;
@property BOOL forChecklistFlow;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_enable;
- (id)initForChecklistFlow:(BOOL)a0 withCompletionHandler:(id /* block */)a1;

@end
