@interface ActionButtonConfigurationUI.BCShortcutsConfigurationViewController : WFStaccatoConfigurationViewController <WFStaccatoConfigurationViewControllerDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ completionHandler;
}

- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)configurationController:(id)a0 didFinishWithAction:(id)a1 error:(id)a2;
- (id)initWithConfigurationContext:(id)a0;

@end
