@class UIButton, UIButtonConfiguration;

@interface HKInfographicButtonCell : UITableViewCell

@property (copy, nonatomic) UIButtonConfiguration *configuration;
@property (copy, nonatomic) id /* block */ buttonTapHandler;
@property (retain, nonatomic) UIButton *button;

- (void).cxx_destruct;
- (void)_constrainButton;
- (void)_didTapButton;
- (void)setConfiguration:(id)a0 buttonTapHandler:(id /* block */)a1;

@end
