@class NSAttributedString;

@interface _NSLineMetrics : NSObject {
    double *_positions;
    BOOL *_hasAdvanceAdjustment;
    double *_initialAdvances;
    double *_finalAdvances;
    unsigned long long _terminalAdvancesCapacity;
    BOOL _terminalAdvancesValid;
    struct __CFArray { } *_runsBuf;
    struct CGSize { double x0; double x1; } *_advancesBuf;
    long long *_stringIndicesBuf;
    unsigned long long _glyphCapacity;
    struct __CFLocale { } *_locale;
    unsigned long long _hasShaping;
    BOOL _isInCalculatePositions;
}

@property (readonly) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } lineRange;
@property (readonly) struct __CTLine { } *line;
@property (nonatomic) struct __CFLocale { } *locale;

- (void)_ensureTerminalAdvancesCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 line:(struct __CTLine { } *)a2;
- (double)widthOfSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (double)_finalAdvanceForCharacterAtIndex:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)_ensureGlyphCapacity:(unsigned long long)a0;
- (void)_getInitialAdvanceForComposedCharacterInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 andFinalAdvanceForComposedCharacterInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 line:(struct __CTLine { } *)a2;
- (void)_calculatePositions;
- (void)_calculatePositions:(double *)a0 hasAdvanceAdjustment:(BOOL *)a1 withCapacity:(unsigned long long)a2 forAttributedString:(id)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 line:(struct __CTLine { } *)a5;
- (unsigned long long)suggestedLineBreakAfterIndex:(unsigned long long)a0 withWidth:(double)a1;
- (double)_initialAdvanceForCharacterAtIndex:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (double)widthOfSubstringToIndex:(unsigned long long)a0;
- (BOOL)_hasShaping;

@end
