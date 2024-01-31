@interface SGUIIconSupport : NSObject

+ (id)_spotlightDescriptorWithBorder:(BOOL)a0;
+ (id)iconForCalendarDate:(id)a0 drawBorder:(BOOL)a1;
+ (id)_imageWithIcon:(id)a0 imageDescriptor:(id)a1;
+ (id)_homeScreenDescriptorWithBorder:(BOOL)a0;
+ (id)_iconImageWithBundleIdentifier:(id)a0 imageDescriptor:(id)a1;
+ (id)homeScreenIconImageWithBundleIdentifier:(id)a0;
+ (id)homeScreenIconImageWithBundleIdentifier:(id)a0 drawBorder:(BOOL)a1;
+ (id)iconForCalendarDate:(id)a0;
+ (id)spotlightIconImageWithBundleIdentifier:(id)a0;
+ (id)spotlightIconImageWithBundleIdentifier:(id)a0 drawBorder:(BOOL)a1;

@end
