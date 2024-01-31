@class NSString, UIFont, UIColor;

@interface SBMutableIconLabelImageParameters : SBIconLabelImageParameters

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGSize { double x0; double x1; } maxSize;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double scale;
@property (nonatomic) BOOL containsEmoji;
@property (nonatomic) BOOL canTruncate;
@property (nonatomic) BOOL canTighten;
@property (nonatomic) long long legibilityStyle;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isAccessibilityReduceTransparencyEnabled) BOOL accessibilityReduceTransparencyEnabled;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) UIColor *focusHighlightColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } fontLanguageInsets;
@property (nonatomic, getter=isColorspaceGrayscale) BOOL colorspaceGrayscale;

- (void)setContentSizeCategory:(id)a0;
- (void)setMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTextInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setCanTighten:(BOOL)a0;
- (void)setColorspaceGrayscale:(BOOL)a0;
- (void)setContainsEmoji:(BOOL)a0;
- (id)copy;
- (void)setFontLanguageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setText:(id)a0;
- (void)setCanTruncate:(BOOL)a0;
- (void)setFocusHighlightColor:(id)a0;
- (void)setTextColor:(id)a0;
- (void)setAccessibilityReduceTransparencyEnabled:(BOOL)a0;
- (void)setLegibilityStyle:(long long)a0;
- (void)setFont:(id)a0;
- (void)setScale:(double)a0;

@end
