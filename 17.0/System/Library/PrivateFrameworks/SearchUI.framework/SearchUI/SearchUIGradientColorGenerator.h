@class SFGradientColor;

@interface SearchUIGradientColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFGradientColor *sfColor;

- (void)generateUIColorsIsDark:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
