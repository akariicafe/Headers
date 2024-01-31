@class UILabel, NSString, UIActivityIndicatorView;

@interface FPUIAuthenticationNavigationBarTitleView : UIStackView

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (void)setActivityIndicatorHidden:(BOOL)a0;
- (void)updateForChangedTraitsAffectingFonts;

@end
