@class NSString, NSAttributedString, NSDictionary;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {
    NSAttributedString *_original;
    NSString *_apparentString;
    NSDictionary *_formatConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (struct __CFString { } *)copyStringWithMarkdown:(struct __CFString { } *)a0 formatConfiguration:(struct __CFDictionary { } *)a1 bundle:(struct __CFBundle { } *)a2 tableURL:(struct __CFURL { } *)a3;
+ (struct __CFString { } *)createStringRequiringInflectionWithFormat:(struct __CFString { } *)a0 formatOptions:(struct __CFDictionary { } *)a1 arguments:(char *)a2;
+ (id)stringEncapsulatingBaseAttributedString:(id)a0;

- (void)dealloc;
- (unsigned long long)length;
- (void)encodeWithCoder:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)isEqualToString:(id)a0;
- (Class)classForCoder;
- (id)substringToIndex:(unsigned long long)a0;
- (id)substringFromIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (const unsigned short *)_fastCharacterContents;
- (id)formatConfiguration;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__baseAttributedString;
- (id)_initWithAttributedString:(id)a0;
- (id)initWithAttributedStringMarkdown:(id)a0 formatConfiguration:(id)a1 bundle:(struct __CFBundle { } *)a2 tableURL:(id)a3;

@end
