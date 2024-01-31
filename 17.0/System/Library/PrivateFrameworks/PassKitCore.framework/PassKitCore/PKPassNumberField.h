@class NSString;

@interface PKPassNumberField : PKPassField

@property (nonatomic) long long numberStyle;
@property (copy, nonatomic) NSString *currencyCode;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asMutableDictionary;

@end
