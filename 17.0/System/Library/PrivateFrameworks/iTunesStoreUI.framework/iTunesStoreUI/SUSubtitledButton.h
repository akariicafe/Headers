@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton {
    struct __CFDictionary { } *_subtitleContentLookup;
    UILabel *_subtitleView;
}

@property (readonly, retain, nonatomic) NSString *currentSubtitle;
@property (readonly, retain, nonatomic) UIColor *currentSubtitleColor;
@property (readonly, retain, nonatomic) UIColor *currentSubtitleShadowColor;
@property (readonly, retain, nonatomic) UILabel *subtitleLabel;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_subtitleFont;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupSubtitleView;
- (long long)_subtitleLineBreakMode;
- (id)_subtitledContentForState:(unsigned long long)a0;
- (void)configureFromScriptButton:(id)a0;
- (void)setSubtitle:(id)a0 forState:(unsigned long long)a1;
- (void)setSubtitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)setSubtitleShadowColor:(id)a0 forState:(unsigned long long)a1;
- (id)subtitleColorForState:(unsigned long long)a0;
- (id)subtitleForState:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)subtitleShadowColorForState:(unsigned long long)a0;

@end
