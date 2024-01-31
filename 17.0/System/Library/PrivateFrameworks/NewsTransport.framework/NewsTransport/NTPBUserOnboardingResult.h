@class NSString, NSMutableArray;

@interface NTPBUserOnboardingResult : PBCodable <NSCopying> {
    struct { unsigned char resultType : 1; unsigned char totalChannelSelections : 1; unsigned char totalResets : 1; unsigned char totalTopicSelections : 1; unsigned char icloudAccountMatch : 1; unsigned char sawEmailOptIn : 1; } _has;
}

@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasIcloudAccountMatch;
@property (nonatomic) BOOL icloudAccountMatch;
@property (readonly, nonatomic) BOOL hasOnboardAbandonStage;
@property (retain, nonatomic) NSString *onboardAbandonStage;
@property (nonatomic) BOOL hasTotalChannelSelections;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) BOOL hasTotalTopicSelections;
@property (nonatomic) int totalTopicSelections;
@property (retain, nonatomic) NSMutableArray *channelIds;
@property (retain, nonatomic) NSMutableArray *topicIds;
@property (nonatomic) BOOL hasTotalResets;
@property (nonatomic) int totalResets;
@property (nonatomic) BOOL hasSawEmailOptIn;
@property (nonatomic) BOOL sawEmailOptIn;

+ (Class)channelIdType;
+ (Class)topicIdType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)channelIdsCount;
- (void)clearChannelIds;
- (id)topicIdAtIndex:(unsigned long long)a0;
- (void)addChannelId:(id)a0;
- (void)addTopicId:(id)a0;
- (id)channelIdAtIndex:(unsigned long long)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;

@end
