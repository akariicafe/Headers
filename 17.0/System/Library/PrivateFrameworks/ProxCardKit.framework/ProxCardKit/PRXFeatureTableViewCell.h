@class NSString, UISwitch, UILabel, NSLayoutConstraint, UIView;

@interface PRXFeatureTableViewCell : UITableViewCell

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeadingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *imageViewVerticalAnchor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIView *featureImageView;
@property (retain, nonatomic) UISwitch *switchControl;
@property (nonatomic, getter=isHidingSeparator) BOOL hidingSeparator;
@property (nonatomic) double featureImageSize;

- (void)layoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateImageViewAnchors;
- (void)_updateLabelHyphenationFactor;
- (void)_updateTitleIndent;
- (void)_updateTitleLeadingAnchor;

@end
