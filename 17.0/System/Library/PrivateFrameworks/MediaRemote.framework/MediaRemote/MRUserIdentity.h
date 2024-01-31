@class NSData, NSString, _MRUserIdentityProtobuf;

@interface MRUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRUserIdentityProtobuf *protobuf;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long type;

+ (id)basicIdentityWithIdentifier:(id)a0 displayName:(id)a1;
+ (id)resolvableIdentityWithIdentifier:(id)a0;
+ (id)resolvableIdentityWithIdentifier:(id)a0 displayName:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobufData:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 type:(long long)a2;

@end
