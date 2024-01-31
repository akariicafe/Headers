@class NSDecimalNumber, NSString;

@interface PKPayLaterMerchandisingConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long displayStyle;
@property (nonatomic) long long action;
@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long theme;

+ (id)_numberFormatter;

- (unsigned long long)hash;
- (BOOL)isEqualToConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)region;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)amountString;
- (id)initWithAmount:(id)a0 currency:(id)a1 displayStyle:(long long)a2 action:(long long)a3 theme:(unsigned long long)a4 environmentType:(unsigned long long)a5;
- (id)localeString;
- (id)stringValueForProperty:(unsigned long long)a0;

@end
