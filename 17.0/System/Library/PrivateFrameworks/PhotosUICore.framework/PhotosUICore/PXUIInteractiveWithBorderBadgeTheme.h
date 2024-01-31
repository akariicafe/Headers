@class UIColor, UIFont, CAFilter, UIBlurEffect, NSString, UIImageSymbolConfiguration;

@interface PXUIInteractiveWithBorderBadgeTheme : NSObject <PXUIBadgeTheme>

@property (readonly, nonatomic) UIImageSymbolConfiguration *imageConfiguration;
@property (readonly, nonatomic) double imageAlpha;
@property (readonly, nonatomic) UIColor *imageTintColor;
@property (readonly, nonatomic) UIColor *afterLabelImageTintColor;
@property (readonly, nonatomic) CAFilter *imageCompositingFilter;
@property (readonly, nonatomic) UIFont *labelFont;
@property (readonly, nonatomic) double labelAlpha;
@property (readonly, nonatomic) UIColor *labelTextColor;
@property (readonly, nonatomic) CAFilter *labelCompositingFilter;
@property (readonly, nonatomic) Class backgroundViewClass;
@property (readonly, nonatomic) double backgroundCornerRadius;
@property (readonly, nonatomic) double backgroundBorderWidth;
@property (readonly, nonatomic) double backgroundAlpha;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *backgroundBorderColor;
@property (readonly, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedToggledOffBadgeTheme;
+ (id)sharedToggledOffOverContentBadgeTheme;
+ (id)sharedToggledOnBadgeTheme;
+ (id)sharedToggledOnOverContentBadgeTheme;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIsToggledOn:(BOOL)a0 isOverContent:(BOOL)a1;

@end
