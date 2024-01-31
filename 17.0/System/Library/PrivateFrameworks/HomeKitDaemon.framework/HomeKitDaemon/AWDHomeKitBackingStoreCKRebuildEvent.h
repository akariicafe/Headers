@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char containerType : 1; unsigned char rebuildStatus : 1; unsigned char zoneType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRebuildStatus;
@property (nonatomic) int rebuildStatus;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;
@property (nonatomic) BOOL hasZoneType;
@property (nonatomic) int zoneType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsContainerType:(id)a0;
- (id)containerTypeAsString:(int)a0;
- (int)StringAsRebuildStatus:(id)a0;
- (int)StringAsZoneType:(id)a0;
- (id)rebuildStatusAsString:(int)a0;
- (id)zoneTypeAsString:(int)a0;

@end
