@class UIFont, NSArray, UIImageView, NSString, UILabel, NSLayoutConstraint, UIImage;

@interface HUTitleDescriptionCell : HUIconCell

@property (retain, nonatomic) NSArray *verticalLabelConstraints;
@property (retain, nonatomic) NSArray *horizontalLabelConstraints;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) UIImageView *descriptionIconView;
@property (readonly, nonatomic) NSLayoutConstraint *titleTrailingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *descriptionTrailingConstraint;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL hideTitle;
@property (nonatomic) unsigned long long maxNumberOfTitleLines;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic) BOOL hideDescription;
@property (nonatomic) unsigned long long maxNumberOfDescriptionLines;
@property (retain, nonatomic) UIImage *descriptionIcon;
@property (nonatomic) BOOL hideDescriptionIcon;
@property (nonatomic) double textAlpha;
@property (nonatomic) BOOL adjustsTextColorWhenDisabled;

- (void)setDisabled:(BOOL)a0;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateTitle;
- (void)_addDescriptionIconView;
- (void)_addDescriptionLabel;
- (void)_addTitleLabel;
- (void)updateHorizontalLabelConstraints;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)updateVerticalLabelConstraints;

@end
