@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {
    long long _slot;
}

@property (readonly) NSString *digits;
@property (readonly) NSString *countryCode;
@property BOOL isShortCode;

+ (BOOL)isValidPhoneNumber:(id)a0;
+ (BOOL)isValidPhoneNumberChar:(unsigned short)a0;
+ (id)phoneNumberWithDigits:(id)a0 countryCode:(id)a1;
+ (id)phoneNumberWithDigits:(long long)a0 digits:(id)a1 countryCode:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)canonicalFormat;
- (id)encodedString;
- (id)formatForCallingCountry:(id)a0;
- (id)initWithDigits:(id)a0 countryCode:(id)a1;
- (id)initWithDigits:(long long)a0 digits:(id)a1 countryCode:(id)a2;
- (long long)numberOfDigitsForShortCodeNumber;
- (long long)numberOfDigitsForShortCodeNumber:(long long)a0;

@end
