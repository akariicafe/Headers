@class NSString;

@interface VSCasePreservingString : NSString {
    NSString *_underlyingString;
}

- (id)lowercaseString;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)uppercaseString;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)a0;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
