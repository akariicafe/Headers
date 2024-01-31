@interface OKWidgetLabelView : OKWidgetLabelViewProxy

+ (id)supportedSettings;

- (id)initWithWidget:(id)a0;
- (void)setSettingAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void)setSettingAttributedText:(id)a0;
- (void)setSettingBaselineAdjustment:(long long)a0;
- (void)setSettingFontFileName:(id)a0;
- (void)setSettingLineBreakMode:(long long)a0;
- (void)setSettingMinimumScaleFactor:(float)a0;
- (void)setSettingNumberOfLines:(long long)a0;
- (void)setSettingTextShadowColor:(id)a0;
- (void)setSettingTextShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (BOOL)settingAdjustsFontSizeToFitWidth;
- (id)settingAttributedText;
- (long long)settingBaselineAdjustment;
- (long long)settingLineBreakMode;
- (float)settingMinimumScaleFactor;
- (long long)settingNumberOfLine;
- (id)settingTextShadowColor;
- (struct CGSize { double x0; double x1; })settingTextShadowOffset;

@end
