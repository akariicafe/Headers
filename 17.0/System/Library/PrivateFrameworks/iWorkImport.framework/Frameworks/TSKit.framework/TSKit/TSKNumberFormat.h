@interface TSKNumberFormat : TSKFormat <NSCopying> {
    long long _propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) BOOL usePlusSign;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asNumberFormat;
- (id)initWithFormatType:(unsigned int)a0 decimalPlaces:(unsigned long long)a1 negativeStyle:(unsigned char)a2 showSeparator:(BOOL)a3;
- (id)decimalFormatterForLocale:(id)a0;

@end
