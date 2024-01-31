@interface AWDWiFiMetricsManagerP2pLegacyUsageReport : PBCodable <NSCopying> {
    struct { unsigned char longestActiveDurationSinceLastReport : 1; unsigned char shortestActiveDurationSinceLastReport : 1; unsigned char timestamp : 1; unsigned char totalActiveDurationSinceLastReport : 1; unsigned char activationsSinceLastReport : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasActivationsSinceLastReport;
@property (nonatomic) unsigned int activationsSinceLastReport;
@property (nonatomic) BOOL hasTotalActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long totalActiveDurationSinceLastReport;
@property (nonatomic) BOOL hasLongestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long longestActiveDurationSinceLastReport;
@property (nonatomic) BOOL hasShortestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long shortestActiveDurationSinceLastReport;

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
