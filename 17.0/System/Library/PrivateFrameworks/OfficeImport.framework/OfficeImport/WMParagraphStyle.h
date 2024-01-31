@class WDStyle;

@interface WMParagraphStyle : WMStyle {
    WDStyle *_baseStyle;
    BOOL _isInTextFrame;
}

+ (BOOL)isShadingNull:(id)a0;

- (void).cxx_destruct;
- (void)addParagraphPropertiesFromStyle;
- (void)addParagraphProperties:(id)a0;
- (void)addParagraphPropertiesFromStyle:(id)a0;
- (void)addParagraphStyleCharacterProperties:(id)a0;
- (id)initWithWDStyle:(id)a0 isInTextFrame:(BOOL)a1;
- (BOOL)isRTLWithOverridesFromProperties:(id)a0;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)a0;
- (void)mapBorders:(id)a0;
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)a0;

@end
