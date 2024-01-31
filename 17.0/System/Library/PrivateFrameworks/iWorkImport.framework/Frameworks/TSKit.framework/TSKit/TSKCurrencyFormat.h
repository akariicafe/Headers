@class NSString;

@interface TSKCurrencyFormat : TSKFormat <NSCopying> {
    long long _propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) unsigned long long currencyCodeIndex;
@property (readonly, nonatomic) BOOL accountingStyle;
@property (readonly, nonatomic) BOOL usePlusSign;

+ (id)defaultCurrencyFormatWithCurrencyCode:(id)a0;

- (unsigned long long)hash;
- (id)initWithLocale:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asCurrencyFormat;
- (id)initWithDecimalPlaces:(unsigned long long)a0 negativeStyle:(unsigned char)a1 showSeparator:(BOOL)a2 accountingStyle:(BOOL)a3 currencyCode:(id)a4;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)decimalFormatterForLocale:(id)a0;

@end
