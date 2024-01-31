@class NSString, NSData, NSMutableArray;

@interface NTPBFeedSubscribeUnsubscribe : PBCodable <NSCopying> {
    struct { unsigned char previousArticlePublisherArticleVersion : 1; unsigned char displayRank : 1; unsigned char feedCellHostType : 1; unsigned char feedCellSection : 1; unsigned char feedSubscriptionOrigin : 1; unsigned char feedType : 1; unsigned char feedViewPresentationReason : 1; unsigned char groupType : 1; unsigned char recommendationBrickType : 1; unsigned char subscribeUnsubscribeLocation : 1; unsigned char subscribeUnsubscribeSurfaceReason : 1; unsigned char userAction : 1; unsigned char cameFromGroup : 1; unsigned char isPaidSubscriberToFeed : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) BOOL hasSubscribeUnsubscribeLocation;
@property (nonatomic) int subscribeUnsubscribeLocation;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic) BOOL hasFeedCellSection;
@property (nonatomic) int feedCellSection;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) int displayRank;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) BOOL hasCameFromGroup;
@property (nonatomic) BOOL cameFromGroup;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) BOOL hasIsPaidSubscriberToFeed;
@property (nonatomic) BOOL isPaidSubscriberToFeed;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic) BOOL hasSubscribeUnsubscribeSurfaceReason;
@property (nonatomic) int subscribeUnsubscribeSurfaceReason;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (nonatomic) BOOL hasFeedSubscriptionOrigin;
@property (nonatomic) int feedSubscriptionOrigin;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

+ (Class)subscribedFeedIdsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFeedSubscriptionOrigin:(id)a0;
- (int)StringAsFeedCellSection:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsFeedCellHostType:(id)a0;
- (int)StringAsFeedViewPresentationReason:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsRecommendationBrickType:(id)a0;
- (id)feedSubscriptionOriginAsString:(int)a0;
- (void)addSubscribedFeedIds:(id)a0;
- (void)clearSubscribedFeedIds;
- (id)feedCellHostTypeAsString:(int)a0;
- (id)feedCellSectionAsString:(int)a0;
- (id)feedTypeAsString:(int)a0;
- (id)feedViewPresentationReasonAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;
- (id)recommendationBrickTypeAsString:(int)a0;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedFeedIdsCount;

@end
