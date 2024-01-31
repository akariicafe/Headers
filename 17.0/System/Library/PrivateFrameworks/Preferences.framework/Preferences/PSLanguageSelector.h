@interface PSLanguageSelector : NSObject

- (id)preferredLanguages;
- (id)systemLanguages;
- (id)deviceLanguageIdentifier;
- (void)setLanguage:(id)a0 fallback:(id)a1;

@end
