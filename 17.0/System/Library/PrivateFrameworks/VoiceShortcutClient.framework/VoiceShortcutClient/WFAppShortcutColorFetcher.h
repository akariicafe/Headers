@class NSCache;

@interface WFAppShortcutColorFetcher : NSObject

@property (class, readonly, nonatomic) NSCache *colorCache;

- (id)colorsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)extractColorsForIconDictionary:(id)a0 alternateIconDictionary:(id)a1 bundle:(id)a2 colorDefaults:(id)a3;
- (id)extractTintColorForIconDictionary:(id)a0 alternateIconDictionary:(id)a1 bundle:(id)a2;
- (id)finishWithComplementingColors:(id)a0 tintColor:(id)a1 record:(id)a2 bundle:(id)a3 bundleIdentifier:(id)a4 error:(id *)a5;

@end
