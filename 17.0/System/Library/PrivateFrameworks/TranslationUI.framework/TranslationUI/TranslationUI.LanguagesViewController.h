@interface TranslationUI.LanguagesViewController : UIViewController {
    void /* unknown type, empty encoding */ segmentedControl;
    void /* unknown type, empty encoding */ showsCloseButton;
    void /* unknown type, empty encoding */ requireOnDevice;
    void /* unknown type, empty encoding */ selectionModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)closeActionWithSender:(id)a0;
- (void)updateSelectedTarget;

@end
