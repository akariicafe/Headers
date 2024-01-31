@class NSString, HDCodableSyncIdentity;

@interface HDCloudSyncCodableRegisteredStore : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOwnerIdentifier;
@property (retain, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) BOOL hasStoreIdentifier;
@property (retain, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
