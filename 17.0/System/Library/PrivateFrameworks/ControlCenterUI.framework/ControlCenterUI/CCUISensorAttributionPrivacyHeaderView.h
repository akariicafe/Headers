@class UIImageView, UILabel;

@interface CCUISensorAttributionPrivacyHeaderView : SBFView <CCUISensorAttributionViewAnimating>

@property (retain, nonatomic) UIImageView *handImageView;
@property (retain, nonatomic) UILabel *staticPrivacyHeaderLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedExpandedRect;

- (id)init;
- (id)_imageSymbolConfiguration;
- (void)sizeToFit;
- (void).cxx_destruct;
- (void)setBlurRadius:(double)a0;
- (id)_filledPrivacyHandImage;

@end
