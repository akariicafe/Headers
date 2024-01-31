@class NSNumber, CLKUIColoringImageView, CLKUIColoringLabel, UIView, CLKProgressProvider;
@protocol CDComplicationImageView;

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView {
    UIView<CDComplicationImageView> *_imageView;
    float _level;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}

@property (retain, nonatomic) CLKUIColoringImageView *stateRing;
@property (retain, nonatomic) CLKUIColoringLabel *label;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (id)supportedTemplateClasses;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_update;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateRingWithRingDescription:(id)a0;
- (void)updateRingWithProgressProvider:(id)a0;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_refreshRingImage;
- (void)_refreshRingImageWithRing:(id)a0;
- (void)setIsXL:(BOOL)a0;

@end
