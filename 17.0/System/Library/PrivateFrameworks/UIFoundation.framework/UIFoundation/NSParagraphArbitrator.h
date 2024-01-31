@class _NSOptimalLineBreaker, NSString, NSAttributedString, NSParagraphStyle;

@interface NSParagraphArbitrator : NSObject {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _paragraphRange;
    struct __CTLine { } *_paragraphLine;
    double _textContainerWidth;
    struct UBreakIterator { } *_breaker;
    NSString *_breakerString;
    NSString *_breakerLocale;
    unsigned long long _usesOptimalLayout;
    int _lineBreakStyle;
    BOOL _languageSupportsLineBreakStyle;
    BOOL _needsOptimalLayout;
    _NSOptimalLineBreaker *_optimalLineBreaker;
    NSParagraphStyle *_defaultParagraphStyle;
}

@property (retain) NSAttributedString *attributedString;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } paragraphRange;
@property struct __CTLine { } *paragraphLine;
@property (copy) id /* block */ lineWidth;
@property (copy) id /* block */ validateLineBreakContext;
@property unsigned long long lineBreakStrategy;
@property double hyphenationFactor;
@property BOOL hyphenatesAsLastResort;
@property long long typesetterBehavior;
@property BOOL textContainerIsSimple;
@property double textContainerWidth;
@property (copy) NSParagraphStyle *defaultParagraphStyle;
@property BOOL breaksLinesForInteractiveText;
@property struct _NSRange { unsigned long long location; unsigned long long length; } previousLineRange;
@property (copy) NSString *preferredLanguage;
@property (readonly) struct __CFStringTokenizer { } *tokenizer;
@property (readonly) BOOL mayCompressLines;
@property (readonly) NSString *debugString;

+ (void)initialize;
+ (id)paragraphArbitratorWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (int)_lineBreakStyleForFont:(id)a0;
+ (BOOL)_hyphenatesAsLastResort;

- (id)init;
- (void)reset;
- (void)dealloc;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })_optimalLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_computeOptimalLayout;
- (BOOL)prepareTokenizerForPreferredLanguage:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })lineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_attributedStringOverridesLineBreakBeforeIndex:(id)a0;
- (double)raggednessWithCharIndexAsLineBreak:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_preferredLanguageForCharacterAtIndex:(unsigned long long)a0;
- (BOOL)_shouldUseOptimalLayout;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })_firstFitLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_shouldUseCFStringTokenizerForLineBreaks;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)prepareBreakIteratorForCharacterAtIndex:(unsigned long long)a0;
- (int)_lineBreakStyle;
- (void)resetBreaker;
- (void)configureOptimalLineBreaker;
- (id)optimalLineBreaker;
- (int)_lineBreakStyleForLastResortHyphenation:(BOOL)a0;
- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)a0;

@end
