@class MRUShadowView, NSString, UILabel, UIImage, MRUVisualStylingProvider, UIImageView, BSUIEmojiLabelView, MRUArtworkView, UIActivityIndicatorView;

@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) MRUArtworkView *artworkView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MRUShadowView *iconShadowView;
@property (retain, nonatomic) UIActivityIndicatorView *activityView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BSUIEmojiLabelView *subtitleLabel;
@property (copy, nonatomic) NSString *suggestionIdentifier;
@property (retain, nonatomic) UIImage *artworkImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentSizeCategory;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)updateVisiblity;
- (void)updateIconView;

@end
