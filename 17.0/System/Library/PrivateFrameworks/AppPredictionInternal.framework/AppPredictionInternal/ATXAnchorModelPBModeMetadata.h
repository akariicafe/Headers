@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBModeMetadata : PBCodable <NSCopying> {
    struct { unsigned char relativeTimeSinceAnchorInSeconds : 1; unsigned char isStart : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasModeId;
@property (retain, nonatomic) NSString *modeId;
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL hasModeHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *modeHistory;
@property (nonatomic) BOOL hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;

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
