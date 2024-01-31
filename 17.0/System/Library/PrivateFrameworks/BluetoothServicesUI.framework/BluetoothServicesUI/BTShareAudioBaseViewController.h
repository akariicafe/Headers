@class UILabel, BTShareAudioViewController, UIView;

@interface BTShareAudioBaseViewController : UIViewController

@property (retain, nonatomic) BTShareAudioViewController *mainController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *cardView;
@property (nonatomic) BOOL viewActive;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleMenuButton:(id)a0;

@end
