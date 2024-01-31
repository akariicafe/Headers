@class NSDictionary;

@interface COClusterMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isStale) BOOL stale;
@property (readonly, copy, nonatomic) NSDictionary *deviceMetadata;
@property (readonly, nonatomic) unsigned long long memberType;

+ (id)memberForCurrentDevice;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToMember:(id)a0;
- (id)IDSIdentifier;
- (id)initWithType:(unsigned long long)a0 deviceMetadata:(id)a1;
- (BOOL)isSameDeviceAsMember:(id)a0;

@end
