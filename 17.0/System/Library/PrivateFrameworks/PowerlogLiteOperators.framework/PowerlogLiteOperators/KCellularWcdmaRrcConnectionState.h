@interface KCellularWcdmaRrcConnectionState : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char establishmentCause : 1; unsigned char releaseCause : 1; unsigned char state : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasEstablishmentCause;
@property (nonatomic) int establishmentCause;
@property (nonatomic) BOOL hasReleaseCause;
@property (nonatomic) int releaseCause;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)stateAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsState:(id)a0;
- (int)StringAsReleaseCause:(id)a0;
- (int)StringAsEstablishmentCause:(id)a0;
- (id)establishmentCauseAsString:(int)a0;
- (id)releaseCauseAsString:(int)a0;

@end
