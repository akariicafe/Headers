@class NSString, LAPSPasscodeOptionsViewControllerConfiguration;
@protocol LAPSPasscodeOptionsViewControllerDelegate;

@interface LAPSPasscodeOptionsAlertViewController : UIAlertController <LAPSPasscodeOptionsViewController> {
    LAPSPasscodeOptionsViewControllerConfiguration *_config;
}

@property (weak, nonatomic) id<LAPSPasscodeOptionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setup;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_addActionForPasscodeType:(id)a0;
- (void)_addActionForRecoveryEnabled:(BOOL)a0 restricted:(BOOL)a1;
- (void)_addActionWithTitle:(id)a0 style:(long long)a1 completion:(id /* block */)a2;
- (void)_setActionWithTitle:(id)a0 enabled:(BOOL)a1;

@end
