@class SFCalendarColor;

@interface SearchUICalendarColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFCalendarColor *sfColor;

- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
