@class CKDPProtectionInfo, CKDPRecordStableUrl, CKDPShareIdentifier, CKDPStorageExpiration, CKDPRecordZoneIdentifier, NSMutableArray;

@interface CKDPZone : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo;
@property (readonly, nonatomic) BOOL hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves;
@property (readonly, nonatomic) BOOL hasStorageExpiration;
@property (retain, nonatomic) CKDPStorageExpiration *storageExpiration;

+ (Class)protectionInfoKeysToRemoveType;

- (unsigned long long)hash;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (BOOL)readFrom:(id)a0;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addProtectionInfoKeysToRemove:(id)a0;
- (id)description;
- (void)clearProtectionInfoKeysToRemoves;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
