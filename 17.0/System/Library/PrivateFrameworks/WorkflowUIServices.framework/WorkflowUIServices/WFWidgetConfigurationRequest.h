@class INIntent, NSString, NSSecurityScopedURLWrapper, UIColor, WFImage;

@interface WFWidgetConfigurationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSSecurityScopedURLWrapper *intentLocalizationTableBundleURL;
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *widgetBundleScopedURL;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) unsigned long long widgetConfigurationStyle;
@property (readonly, nonatomic) unsigned long long resolvedWidgetConfigurationStyle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultCardSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialCardFrame;
@property (readonly, copy, nonatomic) NSString *widgetDisplayName;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, nonatomic, getter=isWidgetExtensionInformationLoaded) BOOL widgetExtensionInformationLoaded;
@property (readonly, nonatomic) UIColor *widgetPrimaryColor;
@property (readonly, nonatomic) UIColor *widgetTintColor;
@property (readonly, nonatomic) BOOL usesWidgetAccentColor;
@property (readonly, copy, nonatomic) NSString *remoteDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *remoteAppLocalizedName;
@property (readonly, copy, nonatomic) WFImage *remoteAppIcon;
@property (retain, nonatomic) INIntent *remoteLocalizedIntent;
@property (copy, nonatomic) NSString *remoteLanguageCode;

- (void)dealloc;
- (id)appBundleIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0 bundleIdentifier:(id)a1 intentLocalizationTableBundleURL:(id)a2 widgetBundleScopedURL:(id)a3 family:(long long)a4 widgetConfigurationStyle:(unsigned long long)a5 defaultCardSize:(struct CGSize { double x0; double x1; })a6 initialCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 widgetDisplayName:(id)a8 widgetDescription:(id)a9 usesWidgetAccentColor:(BOOL)a10 remoteDeviceIdentifier:(id)a11 remoteAppLocalizedName:(id)a12 remoteAppIcon:(id)a13;
- (id)initWithIntent:(id)a0 bundleIdentifier:(id)a1 intentLocalizationTableBundleURL:(id)a2 widgetBundleScopedURL:(id)a3 family:(long long)a4 widgetConfigurationStyle:(unsigned long long)a5 defaultCardSize:(struct CGSize { double x0; double x1; })a6 initialCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 widgetDisplayName:(id)a8 widgetDescription:(id)a9 widgetPrimaryColor:(id)a10 widgetTintColor:(id)a11 usesWidgetAccentColor:(BOOL)a12 remoteDeviceIdentifier:(id)a13 remoteAppLocalizedName:(id)a14 remoteAppIcon:(id)a15;
- (void)loadWidgetExtensionInformationWithCompletion:(id /* block */)a0;
- (void)startAccessingSecurityScopedBundleResource;

@end
