@class NSString, NSData;

@interface NTPBChannelMuteUnmute : PBCodable <NSCopying> {
    struct { unsigned char previousArticlePublisherArticleVersion : 1; unsigned char feedType : 1; unsigned char feedViewPresentationReason : 1; unsigned char groupType : 1; unsigned char muteUnmuteLocation : 1; unsigned char userAction : 1; unsigned char isSearchResultArticle : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasMuteUnmuteLocation;
@property (nonatomic) int muteUnmuteLocation;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionIdDeprecated;
@property (retain, nonatomic) NSString *articleSessionIdDeprecated;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionIdDeprecated;
@property (retain, nonatomic) NSString *articleViewingSessionIdDeprecated;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasChannelMuteUnmuteFeedId;
@property (retain, nonatomic) NSString *channelMuteUnmuteFeedId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureIdDeprecated;
@property (retain, nonatomic) NSString *feedViewExposureIdDeprecated;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic) BOOL hasIsSearchResultArticle;
@property (nonatomic) BOOL isSearchResultArticle;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsFeedViewPresentationReason:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (id)feedTypeAsString:(int)a0;
- (id)feedViewPresentationReasonAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;

@end
