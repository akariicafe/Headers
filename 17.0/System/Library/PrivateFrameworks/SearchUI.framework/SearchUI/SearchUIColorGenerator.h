@class SFColor;

@interface SearchUIColorGenerator : NSObject

@property (retain, nonatomic) SFColor *sfColor;

- (void).cxx_destruct;
- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithSFColor:(id)a0;

@end
