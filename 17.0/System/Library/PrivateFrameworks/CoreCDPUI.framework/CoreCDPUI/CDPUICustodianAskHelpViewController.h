@class CDPUICustodianAskHelpViewModel, CDPContext;

@interface CDPUICustodianAskHelpViewController : OBWelcomeController {
    CDPUICustodianAskHelpViewModel *_viewModel;
    CDPContext *_cdpContext;
}

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_buttonIdentifiersJoinedByComma;
- (id)_dontAskForHelpButtonTitle;
- (id)_getHelpNowButtonTitle;
- (void)_handleAskForHelpNowAction:(id)a0;
- (void)_handleDontAskForHelpAction:(id)a0;
- (id)_makeEventForAskForHelp;
- (id)_makeEventForDontAskForHelp;
- (id)_makeViewAppearedEvent;
- (id)_makeViewWillDisappearEvent;
- (id)initWithViewModel:(id)a0 cdpContext:(id)a1;

@end
