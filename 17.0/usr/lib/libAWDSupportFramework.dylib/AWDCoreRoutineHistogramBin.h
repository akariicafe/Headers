@interface AWDCoreRoutineHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int value;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;

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
