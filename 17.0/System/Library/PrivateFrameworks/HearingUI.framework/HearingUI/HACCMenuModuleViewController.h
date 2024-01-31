@protocol HACCContentModuleDelegate;

@interface HACCMenuModuleViewController : CCUIMenuModuleViewController

@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;

@end
