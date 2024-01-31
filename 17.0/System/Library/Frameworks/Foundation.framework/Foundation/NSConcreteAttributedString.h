@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {
    NSString *string;
    NSRLEArray *attributes;
}

- (id)init;
- (void)dealloc;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (unsigned long long)length;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)string;
- (id)initWithString:(id)a0;
- (id)_runArrayHoldingAttributes;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
