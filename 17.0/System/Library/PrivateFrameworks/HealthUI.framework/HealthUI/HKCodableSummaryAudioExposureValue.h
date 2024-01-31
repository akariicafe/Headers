@class HKCodableQuantity;

@interface HKCodableSummaryAudioExposureValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryAudioExposureValue_1 { unsigned char daysAggregated : 1; unsigned char lastUpdatedDateData : 1; unsigned char secondsListened : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLeqQuantity;
@property (retain, nonatomic) HKCodableQuantity *leqQuantity;
@property (nonatomic) BOOL hasSecondsListened;
@property (nonatomic) double secondsListened;
@property (nonatomic) BOOL hasDaysAggregated;
@property (nonatomic) long long daysAggregated;
@property (nonatomic) BOOL hasLastUpdatedDateData;
@property (nonatomic) double lastUpdatedDateData;

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
