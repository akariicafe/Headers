@class NSString, AAUICodeEntryContext;

@interface AAUICodeEntryViewController : DevicePINController <DevicePINControllerDelegate> {
    NSString *_pinInstructions;
}

@property (retain, nonatomic) AAUICodeEntryContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (void)didCancelEnteringPIN;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)validatePIN:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)pinInstructionsPrompt;
- (id)stringsBundle;
- (BOOL)showSimplePINCancelButtonOnLeft;
- (void)setPane:(id)a0;
- (BOOL)simplePIN;
- (void)_disableUserInteractionAndStartSpinner;
- (void)_enableUserInteractionAndStopSpinner;
- (void)_showIncorrectCodeAlert;

@end
