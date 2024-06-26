@class NSParagraphStyle;

@interface NSTypesetter : NSObject {
    void *_reserved;
    NSParagraphStyle *_defaultParagraphStyle;
}

+ (void)initialize;
+ (id)sharedSystemTypesetterForBehavior:(long long)a0;
+ (unsigned long long)defaultLineBreakStrategy;
+ (long long)defaultStringDrawingTypesetterBehavior;
+ (long long)defaultTypesetterBehavior;
+ (id)sharedSystemTypesetter;
+ (BOOL)_usesATSTypesetter;

- (float)hyphenationFactor;
- (id)layoutManager;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })glyphRangeForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setAttributedString:(id)a0;
- (id)textTabForGlyphLocation:(double)a0 writingDirection:(long long)a1 maxLocation:(double)a2;
- (void)dealloc;
- (void)setDefaultParagraphStyle:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragraphSeparatorCharacterRange;
- (void)setTightenThresholdForTruncation:(float)a0;
- (void)beginParagraph;
- (long long)typesetterBehavior;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 glyphs:(unsigned short *)a1 properties:(long long *)a2 characterIndexes:(unsigned long long *)a3 bidiLevels:(char *)a4;
- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)a0 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (union { struct { double x0; double x1; double x2; long long x3; } x0; struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } x1; } *)_lineFragmentRectForProposedRectArgs;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)a0 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateParagraphStyleCache:(id)a0;
- (BOOL)bidiProcessingEnabled;
- (struct { struct *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; void /* function */ *x5; void /* function */ *x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 2; unsigned char x11 : 1; unsigned char x12 : 3; unsigned char x13 : 7; } x19; void *x20[0]; } *)_getAuxData;
- (void)setUsesFontLeading:(BOOL)a0;
- (id)_ellipsisFontForFont:(id)a0;
- (id)attributedString;
- (void)setLocation:(struct CGPoint { double x0; double x1; })a0 withAdvancements:(const double *)a1 forStartOfGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_forceOriginalFontBaseline;
- (BOOL)usesFontLeading;
- (double)baselineOffsetInLayoutManager:(id)a0 glyphIndex:(unsigned long long)a1;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)finalize;
- (id)currentParagraphStyle;
- (id)substituteFontForFont:(id)a0;
- (void)setDrawsOutsideLineFragment:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setHyphenationFactor:(float)a0;
- (void)setHardInvalidation:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 andParagraphSeparatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 charactarIndex:(unsigned long long)a2 layoutManager:(id)a3 string:(id)a4;
- (void)setTypesetterBehavior:(long long)a0;
- (BOOL)finalizeLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 baselineOffset:(inout double *)a2 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)endParagraph;
- (id)attributesForExtraLineFragment;
- (float)tightenThresholdForTruncation;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 forStartingGlyphAtIndex:(unsigned long long)a3 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 lineSpacing:(double)a5 paragraphSpacingBefore:(double)a6 paragraphSpacingAfter:(double)a7;
- (long long)_baseWritingDirection;
- (void)setApplicationFrameworkContext:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragraphCharacterRange;
- (void)layoutGlyphsInLayoutManager:(id)a0 startingAtGlyphIndex:(unsigned long long)a1 maxNumberOfLineFragments:(unsigned long long)a2 nextGlyphIndex:(unsigned long long *)a3;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 baselineOffset:(double)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragraphSeparatorGlyphRange;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 glyphs:(unsigned int *)a1 characterIndexes:(unsigned long long *)a2 glyphInscriptions:(unsigned long long *)a3 elasticBits:(BOOL *)a4 bidiLevels:(char *)a5;
- (long long)applicationFrameworkContext;
- (BOOL)_isLineBreakModeOverridden;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withGlyphs:(unsigned int *)a1;
- (void)setParagraphGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 separatorGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)lineFragmentPadding;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)a0 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setLineBreakModeOverridden:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })layoutCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forLayoutManager:(id)a1 maximumNumberOfLineFragments:(unsigned long long)a2;
- (void)insertGlyph:(unsigned int)a0 atGlyphIndex:(unsigned long long)a1 characterIndex:(unsigned long long)a2;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragraphGlyphRange;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)defaultParagraphStyle;
- (void)_setForceOriginalFontBaseline:(BOOL)a0;
- (void)setNotShownAttribute:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_layoutGlyphsInLayoutManager:(id)a0 startingAtGlyphIndex:(unsigned long long)a1 maxNumberOfLineFragments:(unsigned long long)a2 maxCharacterIndex:(unsigned long long)a3 nextGlyphIndex:(unsigned long long *)a4 nextCharacterIndex:(unsigned long long *)a5;
- (id)textContainers;
- (void)setAttachmentSize:(struct CGSize { double x0; double x1; })a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (id)currentTextContainer;
- (void)setBidiProcessingEnabled:(BOOL)a0;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forParagraphSeparatorGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 atProposedOrigin:(struct CGPoint { double x0; double x1; })a3;
- (struct { struct *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; void /* function */ *x5; void /* function */ *x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 2; unsigned char x11 : 1; unsigned char x12 : 3; unsigned char x13 : 7; } x19; void *x20[0]; } *)_allocateAuxData;
- (void)setBidiLevels:(const char *)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setLineFragmentPadding:(double)a0;

@end
