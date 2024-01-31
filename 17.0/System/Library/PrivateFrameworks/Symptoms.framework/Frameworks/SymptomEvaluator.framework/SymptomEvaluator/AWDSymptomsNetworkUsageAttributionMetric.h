@interface AWDSymptomsNetworkUsageAttributionMetric : PBCodable <NSCopying> {
    struct { unsigned char flowsImpactedCount : 1; unsigned char timestamp : 1; unsigned char usageBytes : 1; unsigned char networkType : 1; unsigned char usageAttributedTo : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasUsageAttributedTo;
@property (nonatomic) int usageAttributedTo;
@property (nonatomic) BOOL hasUsageBytes;
@property (nonatomic) unsigned long long usageBytes;
@property (nonatomic) BOOL hasFlowsImpactedCount;
@property (nonatomic) unsigned long long flowsImpactedCount;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (int)StringAsUsageAttributedTo:(id)a0;
- (id)usageAttributedToAsString:(int)a0;

@end
