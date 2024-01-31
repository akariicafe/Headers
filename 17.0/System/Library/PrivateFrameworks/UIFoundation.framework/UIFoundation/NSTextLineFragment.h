@class UIFont, NSAttributedString, NSTextLayoutFragment;

@interface NSTextLineFragment : NSObject <NSSecureCoding> {
    long long _applicationFrameworkContext;
    struct __CTLine { } *_lineRef;
    unsigned short *_glyphs;
    struct CGSize { double x0; double x1; } *_advances;
    long long _glyphCount;
    long long _elasticGlyphCount;
    UIFont *_font;
    struct __CTRun { } *_activeRun;
    long long _activeRunIndex;
    struct CGPoint { double x; double y; } _glyphOrigin;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _typographicBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageBounds;
    struct { unsigned char rendersTextCorrectionMarkers : 1; unsigned char isRTLLine : 1; } _flags;
    struct CGPoint { double x; double y; } _cachedPoint;
    long long _cachedCharacterIndex;
    double _cachedFractionWithinGlyph;
    NSAttributedString *_lineBadge;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double padding;
@property (weak) NSTextLayoutFragment *textLayoutFragment;
@property BOOL rendersTextCorrectionMarkers;
@property (copy) id /* block */ renderingAttributesProvider;
@property (copy) id /* block */ _renderingAttributeOverridesProvider;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } typographicBounds;
@property (readonly) struct CGPoint { double x0; double x1; } glyphOrigin;

- (void)drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x0; double x1; })a0 context:(struct CGContext { } *)a1;
- (void)invalidateCache;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsWithType:(long long)a0 options:(unsigned long long)a1;
- (struct __CTLine { } *)lineRef;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)enumerateCaretOffsetsWithTextSelectionDataSource:(id)a0 baseLocation:(id)a1 usingBlock:(id /* block */)a2;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 context:(struct CGContext { } *)a1;
- (void)dealloc;
- (void)_drawMarkedTextUnderline:(id)a0 inTextRange:(id)a1 atOrigin:(struct CGPoint { double x0; double x1; })a2 graphicsContext:(id)a3;
- (id)_defaultRenderingAttributesAtCharacterIndex:(long long)a0 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setLineRef:(struct __CTLine { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)numberOfGlyphs;
- (double)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0 fractionOfDistanceThroughGlyph:(double *)a1;
- (BOOL)_drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x0; double x1; })a0 graphicsContext:(id)a1 backgroundOnly:(BOOL)a2;
- (void)_processCaretGlyphRunForTextSelectionProvider:(id)a0 baseLocation:(id)a1 runRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 glyphOffset:(double)a3 positionsCache:(inout double **)a4 positionsCacheSize:(inout unsigned long long *)a5 stop:(inout BOOL *)a6 usingBlock:(id /* block */)a7;
- (void)_getCaretPositionsForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 positionsCache:(inout double **)a1 positionsCacheSize:(inout unsigned long long *)a2 block:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })typographicBounds;
- (void)_enumerateTextAttachmentFramesInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint { double x0; double x1; })a0 context:(struct CGContext { } *)a1;
- (void)setGlyphOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_enumerateTextSegmentsInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)description;
- (void)drawTextAttachmentsAtPoint:(struct CGPoint { double x0; double x1; })a0 graphicsContext:(id)a1;
- (void)setApplicationFrameworkContext:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })typographicUsedBounds;
- (BOOL)drawMarkedTextBackgroundAtPoint:(struct CGPoint { double x0; double x1; })a0 graphicsContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfLigatureContainingCharacterIndex:(unsigned long long)a0;
- (void)_drawMarkedTextBackground:(id)a0 inTextRange:(id)a1 atOrigin:(struct CGPoint { double x0; double x1; })a2 graphicsContext:(id)a3;
- (long long)applicationFrameworkContext;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)lineBadge;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_drawTexCorrectionMarker:(long long)a0 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 atOrigin:(struct CGPoint { double x0; double x1; })a2 graphicsContext:(id)a3;
- (struct CGPoint { double x0; double x1; })glyphOrigin;
- (void)setTypographicBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint { double x0; double x1; })a0 graphicsContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageBounds;
- (void)_setColor:(id)a0 inGraphicsContext:(id)a1;
- (void)setGlyphs:(const unsigned short *)a0 advances:(const struct CGSize { double x0; double x1; } *)a1 count:(long long)a2 elasticCount:(unsigned long long)a3 font:(id)a4;
- (void)setLineBadge:(id)a0;
- (struct CGPoint { double x0; double x1; })locationForCharacterAtIndex:(long long)a0;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 graphicsContext:(id)a1;
- (void)enumerateTextSegmentBoundsInTextRange:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithString:(id)a0 attributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithCoder:(id)a0;
- (id)textLineFragmentRange;
- (void)_setCurrentGraphicsContext:(id)a0 duringBlock:(id /* block */)a1;
- (void)drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x0; double x1; })a0 graphicsContext:(id)a1;
- (BOOL)_selectionColorShouldOverrideColor:(id)a0;
- (struct __CTRun { } *)_findRunForStringIndex:(long long)a0 runIndex:(out long long *)a1;

@end
