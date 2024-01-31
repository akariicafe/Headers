@class NSString, NSDate;

@interface IRServiceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastSeenDate;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) long long servicePackage;

+ (id)serviceDOWithLastSeenDate:(id)a0 clientIdentifier:(id)a1 serviceIdentifier:(id)a2 servicePackage:(long long)a3;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementClientIdentifier:(id)a0;
- (id)copyWithReplacementLastSeenDate:(id)a0;
- (id)copyWithReplacementServiceIdentifier:(id)a0;
- (id)copyWithReplacementServicePackage:(long long)a0;
- (id)initWithLastSeenDate:(id)a0 clientIdentifier:(id)a1 serviceIdentifier:(id)a2 servicePackage:(long long)a3;
- (BOOL)isEqualToServiceDO:(id)a0;

@end
