@interface HKCodableSummaryTimePeriodValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryTimePeriodValue_1 { unsigned char dateData : 1; unsigned char timeInterval : 1; } _has;
}

@property (nonatomic) BOOL hasTimeInterval;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

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
