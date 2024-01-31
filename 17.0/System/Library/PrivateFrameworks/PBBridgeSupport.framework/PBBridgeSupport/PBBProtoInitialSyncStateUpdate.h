@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying> {
    struct { unsigned char progress : 1; unsigned char state : 1; } _has;
}

@property (nonatomic) BOOL hasProgress;
@property (nonatomic) double progress;
@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned int state;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
