@class UIStackView, NSArray, NSLayoutConstraint, UIView, OBPrivacyLinkController, UIViewController;

@interface AAUISignInViewControllerTableFooterView : UITableViewHeaderFooterView {
    OBPrivacyLinkController *_privacyLinkController;
    UIStackView *_mainStack;
    UIStackView *_actionButtonStackView;
    UIStackView *_continueButtonStackView;
    NSLayoutConstraint *_expandableHeight;
}

@property (retain, nonatomic) UIView *expandableView;
@property (copy, nonatomic) NSArray *privacyLinkIdentifiers;
@property (weak, nonatomic) UIViewController *parentForPrivacyController;

- (double)naturalSize;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)addActionButtonStackView:(id)a0;
- (void)addContinueButton:(id)a0;
- (void)setExpandableViewToHeight:(double)a0;

@end
