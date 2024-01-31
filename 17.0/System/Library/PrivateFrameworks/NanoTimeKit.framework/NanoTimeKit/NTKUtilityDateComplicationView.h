@class CLKFont, NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView {
    NTKDateComplicationLabel *_label;
}

@property (readonly, nonatomic) unsigned long long dateStyle;
@property (retain, nonatomic) CLKFont *font;

- (id)foregroundColor;
- (void)setForegroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)accentColor;
- (void)layoutSubviews;
- (void)setFont:(id)a0;
- (void)_invalidateLabelSize;
- (void)setAccentColor:(id)a0;
- (double)_widthThatFits;
- (void)setDateComplicationText:(id)a0 withDayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forDateStyle:(unsigned long long)a2;

@end
