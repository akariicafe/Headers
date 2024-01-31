@class UIView, NSString, UIFontDescriptor, CLKSymbolImageProvider, CLKImageProvider, UIImageView, UILabel, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKPeopleComplicationImageView : UIView <CDComplicationImageView, CLKFullColorImageView> {
    UILabel *_nameLabel;
    UIImageView *_profileImageView;
    UIView *_ringView;
    double _monochromeTintAmount;
    BOOL _usingPersonSymbol;
    CLKSymbolImageProvider *_personSymbolImageProvider;
}

@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)_profileImageFilterStyle;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
