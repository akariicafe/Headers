@interface AWDCoreRoutineHintSourceUsageInstance : PBCodable <NSCopying> {
    struct { unsigned char hintSource : 1; unsigned char isLOI : 1; unsigned char isVisit : 1; } _has;
}

@property (nonatomic) BOOL hasHintSource;
@property (nonatomic) int hintSource;
@property (nonatomic) BOOL hasIsLOI;
@property (nonatomic) int isLOI;
@property (nonatomic) BOOL hasIsVisit;
@property (nonatomic) int isVisit;

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
