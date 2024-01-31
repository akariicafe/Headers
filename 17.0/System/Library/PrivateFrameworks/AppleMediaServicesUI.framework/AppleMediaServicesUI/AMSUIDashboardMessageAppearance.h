@class UIColor, UIFont, UIImage, UIImageSymbolConfiguration;

@interface AMSUIDashboardMessageAppearance : AMSUIAppearance <NSCopying>

@property (retain, nonatomic) UIColor *accessoryButtonColor;
@property (retain, nonatomic) UIFont *accessoryButtonFont;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *footerButtonColor;
@property (retain, nonatomic) UIFont *footerButtonFont;
@property (nonatomic) long long iconAnimationPlayCount;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) UIFont *messageFont;
@property (retain, nonatomic) UIColor *messageTextColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) long long primaryImageRenderingMode;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleTextColor;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
