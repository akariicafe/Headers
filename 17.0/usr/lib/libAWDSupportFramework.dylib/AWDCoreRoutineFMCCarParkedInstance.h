@class NSString;

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char horizontalAccuracy : 1; unsigned char locationType : 1; unsigned char qualityIndicator : 1; unsigned char triggerTypes : 1; unsigned char userAssistanceRequired : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasParkingId;
@property (retain, nonatomic) NSString *parkingId;
@property (nonatomic) BOOL hasTriggerTypes;
@property (nonatomic) int triggerTypes;
@property (nonatomic) BOOL hasUserAssistanceRequired;
@property (nonatomic) BOOL userAssistanceRequired;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) int horizontalAccuracy;
@property (nonatomic) BOOL hasQualityIndicator;
@property (nonatomic) int qualityIndicator;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
