@class NSNumber, NSString;

@interface CTServiceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long domain;
@property (retain, nonatomic) NSNumber *instance;
@property (readonly, nonatomic) NSString *identifier;

+ (id)descriptorWithSubscriptionContext:(id)a0;
+ (id)telephonyDescriptorWithInstance:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDomain:(long long)a0 instance:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
