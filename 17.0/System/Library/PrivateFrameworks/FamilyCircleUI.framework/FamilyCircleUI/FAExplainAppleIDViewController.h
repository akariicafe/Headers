@class UIButton, UIScrollView, UILabel, UIView;

@interface FAExplainAppleIDViewController : UIViewController {
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_goToSettingsButton;
}

@property (nonatomic) BOOL shouldShowInviteeInstructions;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_updateFonts;
- (void)loadView;
- (void).cxx_destruct;
- (double)_heightForText:(id)a0 constrainedToWidth:(double)a1;

@end
