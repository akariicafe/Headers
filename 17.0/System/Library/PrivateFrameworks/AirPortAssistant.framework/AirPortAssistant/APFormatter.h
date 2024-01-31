@class NSCharacterSet;

@interface APFormatter : NSFormatter {
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
}

@property (nonatomic) unsigned long long maxLength;

+ (id)romanFormatter:(unsigned long long)a0;
+ (id)asciiFormatter:(unsigned long long)a0;
+ (id)pogoPasswordSet;
+ (id)asciiSet;
+ (id)formatterForBSFormatter:(int)a0 withMaxLen:(long long)a1;
+ (id)hexFormatter:(unsigned long long)a0;
+ (id)hexSet;
+ (id)ipFormatter:(unsigned long long)a0;
+ (id)ipOctetFormatter:(unsigned long long)a0;
+ (id)ipv4AddressSet;
+ (id)ipv4AddressWithPrefixSet;
+ (id)ipv6AddressSet;
+ (id)maxLengthFormatter:(unsigned long long)a0;
+ (id)multipleIPFormatter:(unsigned long long)a0;
+ (id)multipleIpAddressesSet;
+ (id)nonZeroNumberOnly:(unsigned long long)a0;
+ (id)numberOnlyFormatter:(unsigned long long)a0;
+ (id)phoneNumberFormatter:(unsigned long long)a0;
+ (id)phoneNumberSet;
+ (id)portRangeFormatter:(unsigned long long)a0;
+ (id)portRangeSet;
+ (id)romanSet;
+ (id)sharedIPFormatter;
+ (id)sharedIPv4PrefixFormatter;
+ (id)sharedIPv6Formatter;
+ (id)sharedMultipleIPFormatter;
+ (id)sharedPhoneNumberFormatter;

- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void)setCharacterSet:(id)a0;
- (id)characterSet;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)initWithCharacterSet:(id)a0 withMaxLength:(unsigned long long)a1;
- (id)initWithMaxLength:(unsigned long long)a0;
- (id)initWithStringOfValidCharacters:(id)a0 withMaxLength:(unsigned long long)a1;
- (id)invertedCharacterSet;
- (void)setInvertedCharacterSet:(id)a0;

@end
