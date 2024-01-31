@class NSString;

@interface SwiftUI.NSSwiftMutableAttributedString : NSTextStorage {
    void /* unknown type, empty encoding */ _storage;
}

@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) NSString *string;

- (void)setAttributedString:(id)a0;
- (id)init;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attribute:(id)a0 atIndex:(long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)attribute:(id)a0 atIndex:(long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)attributesAtIndex:(long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (id)attributesAtIndex:(long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)initWithString:(id)a0;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (void)insertAttributedString:(id)a0 atIndex:(long long)a1;
- (void)appendAttributedString:(id)a0;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithContentsOfMarkdownFileAtURL:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithMarkdown:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithMarkdownString:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)_nsAttributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithFileURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithHTML:(id)a0 options:(id)a1 documentAttributes:(id *)a2;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
