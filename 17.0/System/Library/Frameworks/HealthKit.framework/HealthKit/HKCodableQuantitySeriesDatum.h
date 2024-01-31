@interface HKCodableQuantitySeriesDatum : PBCodable <NSCopying> {
    struct { unsigned char timeInterval : 1; unsigned char value : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasTimeInterval;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) float duration;

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
