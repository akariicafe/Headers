@class UIStackView, NSString, VUITextBadge, UIImage, UILabel, VUIAppInstallView;

@interface VUIAppInstallLockup : UIView {
    VUIAppInstallView *_iconView;
    UILabel *_nameLabel;
    UILabel *_iAPLabel;
    UILabel *_subtitleLabel;
    UIStackView *_nameAndRatingStack;
    UIStackView *_containerStack;
}

@property (retain, nonatomic) VUITextBadge *ageRatingBadge;
@property (retain, nonatomic) UILabel *ageRatingLabel;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ageRating;
@property (copy, nonatomic) NSString *iAP;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) VUIAppInstallView *installView;
@property (retain, nonatomic) UIStackView *metadataStackView;
@property (nonatomic) BOOL canFocus;

- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureLabels;
- (void)_configureAgeRatingBadge;
- (void)_layoutForIos;
- (void)_layoutForTvos;
- (id)_textColorForDarkMode;

@end
