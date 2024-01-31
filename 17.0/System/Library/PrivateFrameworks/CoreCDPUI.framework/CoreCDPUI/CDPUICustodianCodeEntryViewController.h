@class NSString, CDPUICodeEntryViewModel, CDPContext;

@interface CDPUICustodianCodeEntryViewController : DevicePINController <DevicePINControllerDelegate> {
    CDPUICodeEntryViewModel *_viewModel;
    NSString *_pinInstructions;
    CDPContext *_cdpContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
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
- (id)_makeViewDidAppearEvent;
- (id)initWithViewModel:(id)a0 cdpContext:(id)a1;

@end
