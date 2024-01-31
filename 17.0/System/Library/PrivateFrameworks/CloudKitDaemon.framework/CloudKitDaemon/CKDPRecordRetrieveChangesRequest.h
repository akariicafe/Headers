@class CKDPAssetsToDownload, NSData, CKDPRequestedFields, CKDPRecordZoneIdentifier;

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying> {
    struct { unsigned char maxChanges : 1; unsigned char requestedChangeTypes : 1; unsigned char ignoreCallingDeviceChanges : 1; unsigned char includeMergeableDeltas : 1; unsigned char newestFirst : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (nonatomic) BOOL hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) BOOL hasRequestedChangeTypes;
@property (nonatomic) int requestedChangeTypes;
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic) BOOL hasNewestFirst;
@property (nonatomic) BOOL newestFirst;
@property (nonatomic) BOOL hasIgnoreCallingDeviceChanges;
@property (nonatomic) BOOL ignoreCallingDeviceChanges;
@property (nonatomic) BOOL hasIncludeMergeableDeltas;
@property (nonatomic) BOOL includeMergeableDeltas;

+ (id)options;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (int)StringAsRequestedChangeTypes:(id)a0;
- (void).cxx_destruct;
- (id)requestedChangeTypesAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
