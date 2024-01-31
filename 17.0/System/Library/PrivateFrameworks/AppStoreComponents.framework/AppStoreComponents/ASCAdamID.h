@class NSString, NSNumber;

@interface ASCAdamID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCAdamID *invalidAdamID;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) long long int64value;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithInt64:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNumberValue:(id)a0;
- (id)initWithStringValue:(id)a0;

@end
