@class MRUAsset, NSString, UIImageView, MRUVisualStylingProvider, MRUCAPackageView, UIImageSymbolConfiguration;

@interface MRUAssetView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MRUCAPackageView *packageView;
@property (retain, nonatomic) MRUAsset *asset;
@property (retain, nonatomic) NSString *glyphState;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic) double packageScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
