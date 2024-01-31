@interface CKDPZoneCapabilities : PBCodable <NSCopying> {
    struct { unsigned char sharingType : 1; unsigned char atomicSaves : 1; unsigned char ckql : 1; unsigned char fetchChanges : 1; unsigned char hierarchicalSharing : 1; unsigned char zoneSharing : 1; } _has;
}

@property (nonatomic) BOOL hasAtomicSaves;
@property (nonatomic) BOOL atomicSaves;
@property (nonatomic) BOOL hasFetchChanges;
@property (nonatomic) BOOL fetchChanges;
@property (nonatomic) BOOL hasCkql;
@property (nonatomic) BOOL ckql;
@property (nonatomic) BOOL hasSharingType;
@property (nonatomic) int sharingType;
@property (nonatomic) BOOL hasZoneSharing;
@property (nonatomic) BOOL zoneSharing;
@property (nonatomic) BOOL hasHierarchicalSharing;
@property (nonatomic) BOOL hierarchicalSharing;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)sharingTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (int)StringAsSharingType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
