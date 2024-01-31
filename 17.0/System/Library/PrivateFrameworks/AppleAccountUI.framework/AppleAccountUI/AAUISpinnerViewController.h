@class UILabel, UIActivityIndicatorView;

@interface AAUISpinnerViewController : UIViewController {
    UIActivityIndicatorView *_spinnerView;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic, getter=isSpinning) BOOL spinning;

+ (id)newSignInProgressViewWithFullName:(id)a0;
+ (id)newSignInProgressViewWithFullName:(id)a0 forAccount:(id)a1;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;

@end
