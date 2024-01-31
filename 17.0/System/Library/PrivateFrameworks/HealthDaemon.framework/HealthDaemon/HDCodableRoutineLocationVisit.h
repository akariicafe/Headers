@interface HDCodableRoutineLocationVisit : PBCodable <NSCopying> {
    struct { unsigned char entryTime : 1; unsigned char exitTime : 1; } _has;
}

@property (nonatomic) BOOL hasEntryTime;
@property (nonatomic) double entryTime;
@property (nonatomic) BOOL hasExitTime;
@property (nonatomic) double exitTime;

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
