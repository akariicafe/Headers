@class UIView, UILabel, PKDiscoveryCallToActionFooterView, UITapGestureRecognizer, PKDiscoveryCardViewTemplateInformation, UIImageView, PKContinuousButton, PKDiscoveryMedia, PKDiscoveryCard, PKMiniDiscoveryCard, PKDiscoveryArticleLayout, UIColor;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCardView : UIView {
    PKDiscoveryCard *_card;
    PKMiniDiscoveryCard *_miniCard;
    PKDiscoveryMedia *_largeCardMedia;
    PKDiscoveryMedia *_miniCardMedia;
    UIImageView *_backgroundImageView;
    UIView *_miniCardBackgroundColorView;
    UIColor *_backgroundColor;
    UILabel *_headingLabel;
    UILabel *_titleLabel;
    UIImageView *_shadowView;
    UIImageView *_maskImageView;
    PKDiscoveryCallToActionFooterView *_ctaFooterView;
    UITapGestureRecognizer *_tapRecognizer;
    PKContinuousButton *_dismissButton;
    BOOL _shouldDisplayAsLarge;
    long long _displayType;
    long long _currentCardSize;
    long long _largeCardTemplate;
    long long _miniCardTemplate;
}

@property (retain, nonatomic) PKDiscoveryArticleLayout *articleLayout;
@property (readonly, nonatomic) long long priority;
@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate;
@property (nonatomic, getter=isRemoving) BOOL removing;
@property (retain, nonatomic) PKDiscoveryCardViewTemplateInformation *cardTemplateInformation;
@property (nonatomic) BOOL hasSafeAreaInsetOverride;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaOverrideInsets;
@property (copy, nonatomic) id /* block */ callToActionTappedOverride;
@property (copy, nonatomic) id /* block */ dismissAction;

+ (double)cornerRadius;
+ (double)expandedWidth;
+ (struct CGSize { double x0; double x1; })expandedSize;
+ (double)expandedHeight;
+ (struct CGSize { double x0; double x1; })compressedSize;
+ (double)compressedWidth;
+ (double)compressedHeight;
+ (struct CGSize { double x0; double x1; })miniCompressedSize;

- (id)_titleLabelFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDisplayType:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tapGestureRecognized:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_currentContentInsets;
- (void)_dismissButtonPressed:(id)a0;
- (id)_dismissButtonTintColor;
- (id)_headingLabelFont;
- (id)_headingLabelTextColor;
- (struct CGSize { double x0; double x1; })_miniCardImageSize;
- (id)_titleLabelTextColor;
- (void)_updateForDisplayType;
- (double)_yOffsetToHeadingLabel;
- (id)initWithArticleLayout:(id)a0 dismissImage:(id)a1 cardTemplateInformation:(id)a2;
- (id)initWithArticleLayout:(id)a0 dismissImage:(id)a1 cardTemplateInformation:(id)a2 callToActionTappedOverride:(id /* block */)a3;
- (void)loadAndUploadImageData;
- (void)setCardSize:(long long)a0;

@end
