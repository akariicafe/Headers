@class UIColor, NSString, UIFont, SBUILegibilityView, UILabel, NSAttributedString, _UILegibilitySettings;
@protocol SBUILegibilityEngine;

@interface SBUILegibilityLabel : UIView <SBUILegibility, SBUILegibilityEngineProviding> {
    UILabel *_lookasideLabel;
    SBUILegibilityView *_legibilityView;
    BOOL _isDirty;
    UIColor *_textColorOverride;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) float hyphenationFactor;
@property (nonatomic) long long options;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } characterOverflowInsets;
@property (readonly, nonatomic) double firstBaselineOffsetFromBottom;
@property (readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property (readonly, nonatomic) double baselineOffset;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<SBUILegibilityEngine> legibilityEngine;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (float)hyphenationFactor;
- (BOOL)usesColorFilters;
- (id)viewForLastBaselineLayout;
- (id)drawingColor;
- (BOOL)usesSecondaryColor;
- (double)minimumScaleFactor;
- (long long)lineBreakMode;
- (void)setLegibilityEngine:(id)a0;
- (id)legibilityEngine;
- (id)viewForFirstBaselineLayout;
- (void)setMinimumScaleFactor:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setLineBreakMode:(long long)a0;
- (BOOL)adjustsFontSizeToFitWidth;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (id)shadowColor;
- (void)setTextAlignment:(long long)a0;
- (void)_markOurselfDirty;
- (void)_updateLegibilityView;
- (void)setNumberOfLines:(long long)a0;
- (long long)numberOfLines;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHyphenationFactor:(float)a0;
- (void)_updateLabelColor;
- (id)initWithSettings:(id)a0 strength:(double)a1 string:(id)a2 font:(id)a3;
- (long long)textAlignment;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLabelForLegibilitySettings;
- (id)initWithSettings:(id)a0 strength:(double)a1;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 strength:(double)a1 string:(id)a2 font:(id)a3 options:(long long)a4;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
