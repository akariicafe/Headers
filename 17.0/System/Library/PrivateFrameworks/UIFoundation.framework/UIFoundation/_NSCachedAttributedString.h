@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {
    id _contents;
    NSAttributeDictionary *_baseAttributes;
    long long _length;
    unsigned long long _hashValue;
    struct { id x0; long long x1; } *_runs;
    long long _numRuns;
    long long _allocedRunsSize;
    long long _numHits;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (void)cache;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned long long)length;
- (BOOL)_isStringDrawingTextStorage;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (BOOL)_tryRetain;
- (void)finalize;
- (BOOL)_baselineMode;
- (id)initWithAttributedString:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)string;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyCachedInstance;
- (BOOL)_isDeallocating;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;

@end
