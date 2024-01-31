@class UIStackView, NSString, UIView, UILabel, UIButton;

@interface ICHintViewController : ICPillOrnamentViewController

@property (copy, nonatomic) NSString *hintTitle;
@property (copy, nonatomic) NSString *hintSubtitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIStackView *hintStackView;
@property (retain, nonatomic) UIStackView *actionButtonStackView;
@property (retain, nonatomic) UIView *actionButtonTopSpacerView;
@property (retain, nonatomic) UIView *actionButtonTrailingSpacerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *hintTitleLabel;
@property (retain, nonatomic) UILabel *hintSubtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) BOOL showsCloseButton;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0 showsCloseButton:(BOOL)a1 hintTitle:(id)a2 hintSubtitle:(id)a3 buttonTitle:(id)a4 buttonAction:(id /* block */)a5;

@end
