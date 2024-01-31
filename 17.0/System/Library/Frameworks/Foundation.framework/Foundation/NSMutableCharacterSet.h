@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)capitalizedLetterCharacterSet;
+ (id)symbolCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)illegalCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)alphanumericCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)letterCharacterSet;
+ (id)controlCharacterSet;

- (void)removeCharactersInString:(id)a0;
- (void)invert;
- (void)addCharactersInString:(id)a0;
- (BOOL)isMutable;
- (id)init;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
