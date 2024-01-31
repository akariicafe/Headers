@interface AXAttributedString : NSMutableString <NSCopying> {
    struct __CFAttributedString { } *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)a0;

- (void)setAttributes:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)coalescedAttributes;
- (void)dealloc;
- (BOOL)isAXAttributedString;
- (id)initWithCFAttributedString:(struct __CFAttributedString { } *)a0;
- (id)stringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)removeAttributes:(id)a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)lowercaseString;
- (void)setAttribute:(id)a0 forKey:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned long long)length;
- (void)appendStringOrAXAttributedString:(id)a0;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)a0;
- (void)appendString:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)attributedString;
- (void)convertAttachmentsWithBlock:(id /* block */)a0;
- (id)coalescedFontAttributes;
- (void)replaceString:(struct __CFString { } *)a0;
- (id)attributesAtIndex:(long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)axStringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (Class)classForCoder;
- (id)axAttributedStringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1;
- (id)string;
- (id)description;
- (BOOL)hasAttributes;
- (id)stringByTrimmingCharactersInSet:(id)a0;
- (id)substringFromIndex:(unsigned long long)a0;
- (id)uppercaseString;
- (id)attributeValueForKey:(id)a0;
- (BOOL)hasAttribute:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)initWithStringOrAttributedString:(id)a0;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)appendFormat:(id)a0;
- (id)initWithString:(id)a0;
- (void)setAttributes:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)enumerateAttributesUsingBlock:(id /* block */)a0;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct __CFAttributedString { } *)cfAttributedString;
- (id)axAttributedStringDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendAXAttributedString:(id)a0;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)a0;

@end
