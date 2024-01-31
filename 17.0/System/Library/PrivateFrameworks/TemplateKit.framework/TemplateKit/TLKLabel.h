@class UIFont, TLKMultilineText, UILabel, TLKRichText, TLKFormattedText;

@interface TLKLabel : UILabel

@property (retain, nonatomic) UILabel *overlayLabelForNonColoredGlyphs;
@property (retain) UIFont *originalFont;
@property BOOL hasCustomTextColor;
@property BOOL attributedTextExplicitelySet;
@property BOOL attributedTextUpdateDisabled;
@property BOOL attributedTextUpdateSkipped;
@property unsigned long long adjustedProminence;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (retain, nonatomic) TLKRichText *richText;
@property (retain, nonatomic) TLKFormattedText *formattedText;
@property (nonatomic) BOOL supportsColorGlyphs;
@property (nonatomic) BOOL autoHideIfNoContent;

+ (id)secondaryLabel;
+ (id)primaryLabel;
+ (id)tertiaryLabel;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)initWithProminence:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setLineBreakMode:(long long)a0;
- (void)setAttributedText:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)setStringValue:(id)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)updateWithAttributedString:(id)a0;
- (void)loadInlineImages;
- (void)setText:(id)a0;
- (void)updateAdjustedProminence;
- (void).cxx_destruct;
- (void)setAttributedStringValue:(id)a0;
- (void)layoutSubviews;
- (void)updateAttributedText;
- (void)updateWithString:(id)a0;
- (void)setTextColor:(id)a0;
- (BOOL)hasEmphasizedFormattingInRichText;
- (void)setFont:(id)a0 keepOriginal:(BOOL)a1;
- (void)setFont:(id)a0;
- (void)didMoveToWindow;

@end
