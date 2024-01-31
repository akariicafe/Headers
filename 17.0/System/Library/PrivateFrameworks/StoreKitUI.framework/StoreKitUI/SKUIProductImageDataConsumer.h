@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } iconSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

+ (id)updatesConsumer;
+ (id)cardConsumer;
+ (id)chartsConsumer;
+ (id)consumerWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)giftComposeConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemeConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemePosterConsumer;
+ (id)gridConsumer;
+ (id)lockupConsumerWithSize:(long long)a0 itemKind:(long long)a1;
+ (id)productPageConsumer;
+ (id)purchasedConsumer;
+ (id)smartBannerConsumer;
+ (id)swooshConsumer;
+ (id)wishlistConsumer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageForColor:(id)a0;
- (id)imageForColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageForImage:(id)a0;

@end
