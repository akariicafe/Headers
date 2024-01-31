@class NSString;

@interface CTRoadsideProvider : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long providerId;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSString *bizId;
@property (nonatomic) BOOL supportsPayPerUse;
@property (nonatomic) BOOL isActive;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToProvider:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
