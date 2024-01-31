@class UIImageView, ICTextBackgroundView, UILabel, ICNote, UIButton;

@interface ICPasswordEntryViewController : UIViewController

@property (weak, nonatomic) ICTextBackgroundView *backgroundView;
@property (weak, nonatomic) UIImageView *lockImage;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UIButton *unlockButton;
@property (weak, nonatomic) UIButton *largeUnlockButton;
@property (nonatomic) unsigned long long intent;
@property (retain, nonatomic) ICNote *note;
@property (nonatomic) BOOL isAnimatingOut;
@property (copy, nonatomic) id /* block */ passwordEntryCompletionHandler;
@property (nonatomic) unsigned long long mode;

- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)applyEntryViewMode;
- (void)beginAuthentication;
- (id)initWithNibName:(id)a0 bundle:(id)a1 note:(id)a2 intent:(unsigned long long)a3;
- (void)unlockPasswordButtonPressed:(id)a0;
- (void)updateButtonConfiguration;

@end
