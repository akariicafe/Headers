@class NSData, HDCodableSyncIdentity;

@interface HDCodableObjectAssociation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssociationUuid;
@property (retain, nonatomic) NSData *associationUuid;
@property (readonly, nonatomic) BOOL hasObjectUuids;
@property (retain, nonatomic) NSData *objectUuids;
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
- (id)decodedAssociationUUID;
- (id)initWithAssociationUUID:(id)a0;

@end
