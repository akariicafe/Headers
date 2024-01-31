@class UIColor, _PRContentStyleGradientView, NSString, NSURL, BSUIVibrancyEffectView, UILabel, BSUIVibrancyConfiguration;

@interface PRPosterContentStyleVibrantContentRenderer : NSObject <PRPosterContentStyleRendererPrivate>

@property (retain, nonatomic) BSUIVibrancyConfiguration *activeVibrancyConfiguration;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) _PRContentStyleGradientView *gradientView;
@property (retain, nonatomic) NSURL *extensionBundleURL;
@property (readonly, nonatomic) BSUIVibrancyEffectView *vibrancyView;
@property (readonly, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)renderLUTStyle:(id)a0;
- (id)initWithVibrancyView:(id)a0;
- (id)initWithVibrancyView:(id)a0 label:(id)a1;
- (id)privateStyleForStyle:(id)a0;
- (void)removeGradientIfNeeded;
- (void)renderDiscreteColorStyle:(id)a0;
- (void)renderGradientStyle:(id)a0;
- (void)renderVibrantMaterialStyle:(id)a0;
- (void)renderVibrantMonochromeStyle:(id)a0;
- (void)updateForVibrantStyle:(id)a0;

@end
