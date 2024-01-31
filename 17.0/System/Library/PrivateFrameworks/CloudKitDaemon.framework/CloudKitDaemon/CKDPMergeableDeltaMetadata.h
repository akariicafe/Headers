@class NSString, CKDPProtectionInfo, NSData, CKDPDistributedTimestamps, NSMutableArray;

@interface CKDPMergeableDeltaMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasEncryptedTimestamps;
@property (retain, nonatomic) NSData *encryptedTimestamps;
@property (readonly, nonatomic) BOOL hasTimestamps;
@property (retain, nonatomic) CKDPDistributedTimestamps *timestamps;
@property (readonly, nonatomic) BOOL hasTimestampsAuthTag;
@property (retain, nonatomic) NSData *timestampsAuthTag;
@property (retain, nonatomic) NSMutableArray *replacedDeltaIdentifiers;

+ (Class)replacedDeltaIdentifiersType;

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
- (void)addReplacedDeltaIdentifiers:(id)a0;
- (void)clearReplacedDeltaIdentifiers;
- (id)replacedDeltaIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)replacedDeltaIdentifiersCount;

@end
