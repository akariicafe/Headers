@class UIColor;

@interface NTKMutableComplicationStyle : NTKComplicationStyle

@property (copy, nonatomic) UIColor *circularPlatterColor;
@property (nonatomic) long long fontStyle;

- (void)setFontStyle:(long long)a0;
- (void)setCircularPlatterColor:(id)a0;

@end
