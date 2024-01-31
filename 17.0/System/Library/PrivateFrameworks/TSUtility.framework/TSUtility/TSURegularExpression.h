@class NSString;

@interface TSURegularExpression : NSObject <NSCopying, NSCoding> {
    NSString *_expressionString;
    void *_reserved;
}

+ (void)initialize;
+ (id)regularExpressionWithString:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)expressionString;
- (const char *)getBytesForString:(id)a0 lossByte:(unsigned char)a1;
- (id)initWithExpressionString:(id)a0;
- (id)initWithExpressionString:(id)a0 options:(unsigned int)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchedRangeForCString:(const char *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 subexpressionRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 count:(unsigned int)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchedRangeForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 subexpressionRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 count:(unsigned int)a3;
- (unsigned long long)numberOfSubexpressions;

@end
