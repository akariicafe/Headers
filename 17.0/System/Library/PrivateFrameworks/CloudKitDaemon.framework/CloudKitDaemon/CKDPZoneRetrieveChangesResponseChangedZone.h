@class CKDPAnonymousZoneInfo, CKDPZoneCapabilities, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; unsigned char deleteType : 1; unsigned char isAnonymous : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (nonatomic) BOOL hasDeleteType;
@property (nonatomic) int deleteType;
@property (readonly, nonatomic) BOOL hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) BOOL hasIsAnonymous;
@property (nonatomic) BOOL isAnonymous;
@property (readonly, nonatomic) BOOL hasAnonymousZoneInfo;
@property (retain, nonatomic) CKDPAnonymousZoneInfo *anonymousZoneInfo;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsChangeType:(id)a0;
- (id)description;
- (id)changeTypeAsString:(int)a0;
- (int)StringAsDeleteType:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deleteTypeAsString:(int)a0;

@end
