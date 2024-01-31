@class UILabel, CSDeviceUnblockViewModel;

@interface CSDeviceUnblockViewController : UIViewController {
    CSDeviceUnblockViewModel *_viewModel;
    UILabel *_bodyLabel;
}

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_addHeaderCancelIfNeededToStack:(id)a0;
- (id)_addLabelWithText:(id)a0 color:(id)a1 font:(id)a2 toStack:(id)a3;
- (void)_addSystemImageWithName:(id)a0 toStack:(id)a1;
- (void)setTimeoutString:(id)a0;

@end
