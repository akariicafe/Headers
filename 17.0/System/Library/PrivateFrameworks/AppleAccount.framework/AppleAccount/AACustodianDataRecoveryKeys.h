@class NSData, NSUUID;

@interface AACustodianDataRecoveryKeys : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *wrappedRKC;
@property (copy, nonatomic) NSData *wrappingKey;
@property (copy, nonatomic) NSUUID *custodianUUID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWrappedRKC:(id)a0 wrappingKey:(id)a1 custodianUUID:(id)a2;

@end
