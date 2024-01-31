@class CLKImageProvider, NSString, UIColor, UIImageView, UIFontDescriptor, _NTKPieChartView;
@protocol CLKMonochromeFilterProvider;

@interface NTKGreenfieldPlaceholderView : UIView <CLKFullColorImageView, CDComplicationImageView> {
    UIImageView *_iconView;
    _NTKPieChartView *_uncompletedPieChartView;
}

@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setAppIcon:(id)a0;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
