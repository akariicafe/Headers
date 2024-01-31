@interface _UINavigationBarTitleFontProvider : NSObject

+ (void)registerProviderClass:(Class)a0 forIdiom:(long long)a1;
+ (id)providerForIdiom:(long long)a0;

- (id)defaultLargeTitleFont;
- (id)defaultInlineTitleFont;
- (id)defaultTitleFont;

@end
