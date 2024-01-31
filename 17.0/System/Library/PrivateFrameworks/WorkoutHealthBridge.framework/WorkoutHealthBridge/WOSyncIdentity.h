@class NSUUID, NSString;

@interface WOSyncIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *hardwareIdentifier;
@property (readonly, copy, nonatomic) NSUUID *databaseIdentifier;
@property (readonly, copy, nonatomic) NSString *instanceDiscriminator;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHardwareIdentifier:(id)a0 databaseIdentifier:(id)a1 instanceDiscriminator:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
