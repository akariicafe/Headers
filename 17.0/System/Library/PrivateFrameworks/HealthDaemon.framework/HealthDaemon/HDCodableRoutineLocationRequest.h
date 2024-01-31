@interface HDCodableRoutineLocationRequest : PBRequest <NSCopying> {
    struct { unsigned char locationType : 1; } _has;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;

- (id)locationTypeAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsLocationType:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
