@class NSAttributedString, NSLayoutManager, NSTextContainer;

@interface __NSImmutableTextStorage : NSTextStorage {
    NSAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

@property (readonly) NSLayoutManager *layoutManager;
@property (readonly) NSTextContainer *textContainer;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_tryRetain;
- (void)processEditing;
- (id)initWithAttributedString:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)string;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
