@class SUUIItemOfferButton, NSMutableArray, UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface PSUIAppInstallCell : PSTableCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *publisherLabel;
@property (retain, nonatomic) UILabel *installedLabel;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) NSLayoutConstraint *installedConstraint;
@property (retain, nonatomic) NSLayoutConstraint *availableConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelPaddingTop;
@property (retain, nonatomic) NSLayoutConstraint *labelPaddingBottom;
@property (retain, nonatomic) SUUIItemOfferButton *installButton;
@property (retain, nonatomic) NSLayoutConstraint *installButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *installButtonHeightConstraint;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (nonatomic) int installState;

+ (id)specifierForAppWithDescription:(id)a0 target:(id)a1 action:(SEL)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)getLogger;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateCellWithInstallState;

@end
