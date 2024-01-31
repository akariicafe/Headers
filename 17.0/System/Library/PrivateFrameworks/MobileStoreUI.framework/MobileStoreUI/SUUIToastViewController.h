@class NSString, SUUIToastPresentationWindow, UIImageView, UILabel, UIVisualEffectView;

@interface SUUIToastViewController : UIViewController

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) SUUIToastPresentationWindow *presentationWindow;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIVisualEffectView *toastView;
@property (copy, nonatomic) id /* block */ completion;

+ (id)_secondaryLabelFont;
+ (id)_fontWithSize:(double)a0 textStyleAttribute:(struct __CFString { } *)a1;
+ (id)_primaryLabelFont;

- (void)viewWillAppear:(BOOL)a0;
- (void)present;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_dismissWithDelay:(double)a0;
- (id)initWithDialogTemplate:(id)a0;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2;
- (void)presentFromViewController:(id)a0 completion:(id /* block */)a1;

@end
