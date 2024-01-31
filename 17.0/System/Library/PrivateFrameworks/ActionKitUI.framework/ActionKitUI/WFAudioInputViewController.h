@class UILabel, UIView;

@interface WFAudioInputViewController : UIViewController

@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UIView *contentView;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformMagicTap;
- (void)handleTap;

@end
