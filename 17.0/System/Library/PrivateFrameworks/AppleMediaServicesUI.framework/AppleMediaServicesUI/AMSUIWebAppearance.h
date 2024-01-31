@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying>

@property (class, readonly, nonatomic) UIColor *systemBackgroundColor;
@property (class, readonly, nonatomic) UIColor *secondarySystemBackgroundColor;
@property (class, readonly, nonatomic) UIColor *tertiarySystemBackgroundColor;
@property (class, readonly, nonatomic) UIColor *systemGroupedBackgroundColor;
@property (class, readonly, nonatomic) UIColor *secondarySystemGroupedBackgroundColor;
@property (class, readonly, nonatomic) UIColor *tertiarySystemGroupedBackgroundColor;
@property (class, readonly, nonatomic) AMSUIWebAppearance *defaultAppearance;
@property (class, readonly, nonatomic) AMSUIWebAppearance *tableViewAppearance;

@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateBackgroundColorWithJSString:(id)a0;

@end
