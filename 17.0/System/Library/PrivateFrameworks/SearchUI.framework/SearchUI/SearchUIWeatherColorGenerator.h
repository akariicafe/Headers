@class NSArray, SFWeatherColor;

@interface SearchUIWeatherColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFWeatherColor *sfColor;

- (int)defaultTintStyle;
- (void)generateHexColorsWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)generateUIColorsIsDark:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
