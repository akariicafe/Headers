@protocol STRestrictionsPINControllerDelegate;

@interface STRestrictionsPINController : PSRestrictionsPINController

@property (weak, nonatomic) id<STRestrictionsPINControllerDelegate> pinDelegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)setPIN:(id)a0;
- (BOOL)validatePIN:(id)a0;
- (id)pinInstructionsPrompt;
- (void)_setOptionsTitle:(id)a0 optionsHandler:(id /* block */)a1;
- (void)recoveryAuthenticationFailed:(id)a0;
- (void)recoveryAuthenticationSucceededForPasscode:(id)a0;

@end
