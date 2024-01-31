@class SFAppColor;

@interface SearchUIAppColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFAppColor *sfColor;

- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
