@protocol STSetupAssistantViewControllerDelegate;

@interface STSetupAssistantViewController : OBWelcomeController

@property (readonly) long long state;
@property (readonly) BOOL hasRestrictionsPasscode;
@property (weak) id<STSetupAssistantViewControllerDelegate> delegate;

+ (id)new;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_continue:(id)a0;
- (void)_setUpLater:(id)a0;
- (id)initWithScreenTimeState:(long long)a0 passcode:(BOOL)a1;

@end
