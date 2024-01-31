@interface HKCodableDayIndexRange : PBCodable <NSCopying> {
    struct APPLE_HKCodableDayIndexRange_1 { unsigned char dayIndex : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasDayIndex;
@property (nonatomic) long long dayIndex;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;

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
