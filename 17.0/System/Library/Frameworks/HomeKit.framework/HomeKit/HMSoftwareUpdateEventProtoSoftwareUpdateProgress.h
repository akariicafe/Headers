@interface HMSoftwareUpdateEventProtoSoftwareUpdateProgress : PBCodable <NSCopying> {
    struct { unsigned char estimatedTimeRemaining : 1; unsigned char percentageComplete : 1; } _has;
}

@property (nonatomic) BOOL hasPercentageComplete;
@property (nonatomic) float percentageComplete;
@property (nonatomic) BOOL hasEstimatedTimeRemaining;
@property (nonatomic) double estimatedTimeRemaining;

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
