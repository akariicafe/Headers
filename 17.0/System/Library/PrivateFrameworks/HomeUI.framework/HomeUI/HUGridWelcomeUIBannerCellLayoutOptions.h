@class UIColor;

@interface HUGridWelcomeUIBannerCellLayoutOptions : HUGridBannerCellLayoutOptions

@property (retain, nonatomic) UIColor *titleLabelColor;
@property (retain, nonatomic) UIColor *descriptionLabelColor;
@property (retain, nonatomic) UIColor *footerLabelColor;
@property (retain, nonatomic) UIColor *continueButtonColor;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
