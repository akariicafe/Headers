@class UIImageView, _UIUserDefaultsActivityProxy, UILabel, UIView, NSLayoutConstraint;

@interface _UIActivityUserDefaultsActivityCell : UITableViewCell {
    NSLayoutConstraint *_titleLabelHeightAnchor;
}

@property (nonatomic) unsigned long long sequence;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UILabel *activityTitleLabel;
@property (retain, nonatomic) UIView *activityImageSlotView;
@property (retain, nonatomic) UIView *activityTitleView;
@property (retain, nonatomic) _UIUserDefaultsActivityProxy *activityProxy;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;
@property (nonatomic, getter=isDisabled) BOOL disabled;

+ (id)bodyShortFont;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateImageDarkening;

@end
