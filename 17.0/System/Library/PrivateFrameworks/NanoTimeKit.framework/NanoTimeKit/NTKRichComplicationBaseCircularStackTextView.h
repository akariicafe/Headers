@class CLKUIColoringLabel;

@interface NTKRichComplicationBaseCircularStackTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CLKUIColoringLabel *line1Label;
@property (retain, nonatomic) CLKUIColoringLabel *line2Label;
@property (nonatomic) unsigned long long highlightMode;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (id)_createAndAddLabel;
- (id)_desiredFontForLabel:(id)a0;
- (void)_editingDidEnd;
- (long long)_line1FilterStyle;
- (long long)_line2FilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (BOOL)templateWantsPlatter;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
