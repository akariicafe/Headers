@class UIView, NSArray, UIImage, OBImageView, OBAnimationView, OBTemplateHeaderDetailLabel, OBTemplateLabel, OBHeaderAccessoryButton;

@interface OBHeaderView : UIView {
    BOOL _usingSymbolImage;
}

@property (retain, nonatomic) OBAnimationView *animationView;
@property (retain, nonatomic) OBImageView *imageView;
@property (retain, nonatomic) UIView *topAssetContainer;
@property (retain, nonatomic) NSArray *topAssetContainerConstraints;
@property (retain, nonatomic) OBTemplateLabel *headerLabel;
@property (retain, nonatomic) OBTemplateLabel *subtitleLabel;
@property (retain, nonatomic) OBTemplateHeaderDetailLabel *detailLabel;
@property (retain, nonatomic) NSArray *imageViewConstraints;
@property (retain, nonatomic) NSArray *detailLabelConstraints;
@property (retain, nonatomic) NSArray *subtitleLabelConstraints;
@property (retain, nonatomic) OBHeaderAccessoryButton *accessoryButton;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) UIImage *originalIconImage;
@property (retain, nonatomic) UIView *customIconContainerView;
@property (nonatomic) BOOL underlineLinks;
@property (nonatomic) BOOL iconInheritsTint;
@property (nonatomic) BOOL allowFullWidthIcon;

- (void)setSubtitleText:(id)a0;
- (double)topPadding;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)title;
- (void)setDetailText:(id)a0;
- (id)_subtitleFont;
- (double)bottomPadding;
- (void)setTitle:(id)a0;
- (void)setLanguage:(id)a0;
- (id)headerFont;
- (id)initWithTitle:(id)a0 icon:(id)a1;
- (id)symbolConfiguration;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (double)iconHeight;
- (void)_animateDetailLabelAlpha:(double)a0 duration:(double)a1;
- (id)_createDetailLabelIfNeeded;
- (void)_createHeaderLabelIfNeeded;
- (id)_createImageView:(id)a0;
- (id)_detailFont;
- (void)_insertAndLayoutImageViewIfNeeded;
- (void)_layoutTopAssetContainer;
- (double)_setupAssistantIconHeight;
- (id)_symbolIconForHeaderStyle:(id)a0 configuration:(id)a1;
- (void)_updateConstraintsForDetailLabel;
- (void)_updateConstraintsForSubtitle;
- (void)addAccessoryButton:(id)a0;
- (double)detailLabelToAccessoryButtonPadding;
- (void)extendedInitWithTitle:(id)a0 detailText:(id)a1;
- (double)headerLabelToDetailAndSubtitleLabelPadding;
- (double)iconToHeaderLabelPadding;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 symbolName:(id)a1;
- (void)removeAccessoryButton;
- (void)removeDetailLabel;
- (void)setDetailedTextHeader:(id)a0 detailedTextBody:(id)a1;
- (void)setIcon:(id)a0 accessibilityLabel:(id)a1;
- (void)setSymbol:(id)a0 accessibilityLabel:(id)a1;
- (void)setTitleHyphenationFactor:(float)a0;
- (void)setTitleTrailingSymbol:(id)a0;

@end
