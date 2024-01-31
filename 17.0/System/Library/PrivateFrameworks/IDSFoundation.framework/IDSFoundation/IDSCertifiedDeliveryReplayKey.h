@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *payloadHash;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHash:(id)a0;
- (id)initWithPayload:(id)a0 legacyIdentity:(id)a1;
- (BOOL)isEqualToReplayKey:(id)a0;

@end
