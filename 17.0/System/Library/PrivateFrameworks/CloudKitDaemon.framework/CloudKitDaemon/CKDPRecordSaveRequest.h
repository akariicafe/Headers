@class CKDPRecordSaveRequestConflictLoserUpdate, NSString, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, CKDPRecord;

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {
    struct { unsigned char saveSemantics : 1; unsigned char merge : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) CKDPRecord *record;
@property (nonatomic) BOOL hasMerge;
@property (nonatomic) BOOL merge;
@property (retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasConflictLoserUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate;
@property (nonatomic) BOOL hasSaveSemantics;
@property (nonatomic) int saveSemantics;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfoTag;
@property (retain, nonatomic) NSString *recordProtectionInfoTag;
@property (retain, nonatomic) NSMutableArray *conflictLosersToResolves;
@property (readonly, nonatomic) BOOL hasShareEtag;
@property (retain, nonatomic) NSString *shareEtag;
@property (readonly, nonatomic) BOOL hasShareIDUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate;
@property (readonly, nonatomic) BOOL hasParentChainProtectionInfoTag;
@property (retain, nonatomic) NSString *parentChainProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;

+ (Class)fieldsToDeleteIfExistOnMergeType;
+ (Class)conflictLosersToResolveType;
+ (id)options;

- (unsigned long long)hash;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)a0;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)a0;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (void)writeTo:(id)a0;
- (int)StringAsSaveSemantics:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)saveSemanticsAsString:(int)a0;
- (void)addFieldsToDeleteIfExistOnMerge:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addConflictLosersToResolve:(id)a0;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)clearConflictLosersToResolves;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
