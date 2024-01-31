@class UILabel, OBButtonTray, OBBoldTrayButton;

@interface OBSetupAssistantFinishedController : OBBaseWelcomeController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) OBButtonTray *buttonTray;
@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (copy, nonatomic) id /* block */ boldButtonBlock;
@property (retain, nonatomic) UILabel *instructionalLabel;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)buttonTapped:(id)a0;
- (void)viewDidLoad;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })directionalLayoutMargins;
- (void).cxx_destruct;
- (id)_headerFont;
- (id)_instructionFont;
- (void)setButtonTitle:(id)a0 action:(id /* block */)a1;
- (void)setInstructionalText:(id)a0;

@end
