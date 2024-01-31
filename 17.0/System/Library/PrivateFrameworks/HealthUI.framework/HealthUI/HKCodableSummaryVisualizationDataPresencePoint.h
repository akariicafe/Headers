@class HKCodableDateInterval;

@interface HKCodableSummaryVisualizationDataPresencePoint : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryVisualizationDataPresencePoint_1 { unsigned char dataPresent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (nonatomic) BOOL hasDataPresent;
@property (nonatomic) BOOL dataPresent;

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

@end
