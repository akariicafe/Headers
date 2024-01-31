@class NSData;

@interface NMSMediaSyncServiceModelObject : PBCodable <NSCopying> {
    struct { unsigned char containerType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDataMultiverseID;
@property (retain, nonatomic) NSData *dataMultiverseID;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;

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
- (int)StringAsContainerType:(id)a0;
- (id)containerTypeAsString:(int)a0;

@end
