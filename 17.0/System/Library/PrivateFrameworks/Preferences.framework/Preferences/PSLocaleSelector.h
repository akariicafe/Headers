@interface PSLocaleSelector : NSObject

- (id)currentLocale;
- (id)availableLocaleIdentifiers;
- (void)setLocaleFromLanguageIdentifier:(id)a0;
- (void)setLocaleFromRegionCode:(id)a0;

@end
