@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination

@property (readonly, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (unsigned long long)hash;
- (id)initWithAlias:(id)a0 pushToken:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
