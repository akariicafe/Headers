@class UILabel, UIView, SFShareAudioViewController;

@interface SFShareAudioBaseViewController : UIViewController

@property (retain, nonatomic) SFShareAudioViewController *mainController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *cardView;
@property (nonatomic) BOOL viewActive;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
