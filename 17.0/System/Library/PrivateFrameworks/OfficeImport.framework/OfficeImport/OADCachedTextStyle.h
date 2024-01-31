@interface OADCachedTextStyle : NSObject {
    struct OADCachedTextStyleData { unsigned char verticalAlign : 3; short lineSpacing; short beforeSpacing; short afterSpacing; short leftMargin; short rightMargin; short indent; short defaultTab; unsigned char horizontalAlign : 4; unsigned short fontFaceIndex; short fontSize; unsigned short fontColorIndex; unsigned char bold : 1; unsigned char italic : 1; unsigned char underline : 5; unsigned char format : 2; unsigned char kerning : 2; unsigned char strikethrough : 2; unsigned char caps : 2; } mData;
    unsigned long long mHash;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)applyToParagraphProperties:(id)a0 graphicStyleCache:(id)a1;
- (void)applyToTextBodyProperties:(id)a0 graphicStyleCache:(id)a1;
- (id)initWithTextBodyProperties:(id)a0 paragraphProperties:(id)a1 characterProperties:(id)a2 colorContext:(id)a3 graphicStyleCache:(id)a4;

@end
