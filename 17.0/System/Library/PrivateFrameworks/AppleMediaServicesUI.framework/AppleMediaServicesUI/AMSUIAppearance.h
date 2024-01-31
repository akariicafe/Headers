@class NSDictionary;

@interface AMSUIAppearance : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *_messageFontDictionary;
@property (retain, nonatomic) NSDictionary *_titleFontDictionary;

+ (id)_defaultSeparatorColor;
+ (id)_defaultTitleColor;
+ (id)_backgroundColorWithDictionary:(id)a0;
+ (id)_backgroundImageWithDictionary:(id)a0;
+ (id)_defaultImageViewColorForStyle:(unsigned long long)a0;
+ (id)_accessoryButtonBackgroundColorWithDictionary:(id)a0;
+ (id)_accessoryButtonColorWithDictionary:(id)a0;
+ (id)_accessoryButtonFontWithDictionary:(id)a0;
+ (id)_accessorySecondaryButtonBackgroundColorWithDictionary:(id)a0;
+ (id)_accessorySecondaryButtonColorWithDictionary:(id)a0;
+ (id)_accessorySecondaryButtonFontWithDictionary:(id)a0;
+ (id)_backgroundColorWithMetadataDictionary:(id)a0;
+ (id)_backgroundImageWithMetadataDictionary:(id)a0;
+ (id)_defaultBackgroundColorForStyle:(unsigned long long)a0 withTraitCollection:(id)a1;
+ (id)_defaultButtonContentColorForStyle:(unsigned long long)a0 isFooter:(BOOL)a1;
+ (id)_defaultButtonIconColorForStyle:(unsigned long long)a0 isFooter:(BOOL)a1;
+ (id)_defaultButtonTextColorForStyle:(unsigned long long)a0 isFooter:(BOOL)a1;
+ (id)_defaultButtonTextFontForStyle:(unsigned long long)a0 withTraitCollection:(id)a1;
+ (id)_defaultMessageColor;
+ (id)_defaultMessageFontForStyle:(unsigned long long)a0 withTraitCollection:(id)a1;
+ (id)_defaultTitleFontForStyle:(unsigned long long)a0 withTraitCollection:(id)a1;
+ (id)_footerButtonColorWithDictionary:(id)a0;
+ (id)_footerButtonFontWithDictionary:(id)a0;
+ (id)_gradientImageWithDictionary:(id)a0;
+ (id)_gradientLayerTypeForRawValue:(id)a0;
+ (long long)_iconAnimationPlayCount:(id)a0;
+ (id)_imageSymbolConfigurationWithDictionary:(id)a0;
+ (id)_imageTintColorWithDictionary:(id)a0;
+ (id)_impressionAnimationIdentifierWithDictionary:(id)a0;
+ (id)_messageFontWithDictionary:(id)a0;
+ (id)_messageTextColorWithDictionary:(id)a0;
+ (long long)_primaryImageRenderingModeWithDictionary:(id)a0;
+ (id)_separatorColorWithDictionary:(id)a0;
+ (id)_titleFontWithDictionary:(id)a0;
+ (id)_titleTextColorWithDictionary:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
