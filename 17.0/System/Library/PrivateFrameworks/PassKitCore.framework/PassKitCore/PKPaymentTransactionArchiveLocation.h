@class PKCloudStoreZone;

@interface PKPaymentTransactionArchiveLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isArchived) BOOL archived;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKCloudStoreZone *cloudStoreZone;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0 archived:(BOOL)a1 cloudStoreZone:(id)a2;
- (BOOL)isEqualToArchiveLocation:(id)a0;

@end
