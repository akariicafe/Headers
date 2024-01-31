@class PRXPasscodeEntryView, PRXImageView, UIImage;

@interface PRXPasscodeEntryViewController : PRXCardContentViewController <PRXPasscodeEntryViewDelegate>

@property (readonly, nonatomic) PRXPasscodeEntryView *passcodeEntryView;
@property (nonatomic) long long numberOfDigits;
@property (nonatomic) BOOL useMonospacedFont;
@property (readonly, nonatomic) PRXImageView *imageView;
@property (copy, nonatomic) id /* block */ textChangeHandler;
@property (copy, nonatomic) id /* block */ textEntryCompletionHandler;
@property (retain, nonatomic) UIImage *image;

- (void)_textDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)textDidChange:(id)a0;
- (void)_scrollToWells;
- (void)_updatePasscodeEntryView;
- (void)didCompleteTextEntry:(id)a0;
- (void)passcodeEntryViewDidBecomeFirstResponder:(id)a0;

@end
