@class NSString, ATXPBSharedDigestEngagementTrackingMetrics, NSMutableArray, ATXPBDigestTimeline;

@interface ATXPBMissedNotificationRanking : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasRankerId;
@property (retain, nonatomic) NSString *rankerId;
@property (readonly, nonatomic) BOOL hasModeId;
@property (retain, nonatomic) NSString *modeId;
@property (retain, nonatomic) NSMutableArray *rankedGroups;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;
@property (readonly, nonatomic) BOOL hasDigestTimeline;
@property (retain, nonatomic) ATXPBDigestTimeline *digestTimeline;

+ (Class)rankedGroupsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRankedGroups:(id)a0;
- (void)clearRankedGroups;
- (id)rankedGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankedGroupsCount;

@end
