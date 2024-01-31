@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *normalizedValue;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)normalizedGenericHandleForValue:(id)a0;
+ (id)normalizedPhoneNumberHandleForValue:(id)a0 isoCountryCode:(id)a1;
+ (id)normalizedEmailAddressHandleForValue:(id)a0;
+ (long long)handleTypeForValue:(id)a0;

- (id)initWithHandle:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 value:(id)a1 normalizedValue:(id)a2;
- (id)initWithType:(long long)a0 value:(id)a1;
- (BOOL)isTemporary;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToHandle:(id)a0;
- (BOOL)isPseudonym;

@end
