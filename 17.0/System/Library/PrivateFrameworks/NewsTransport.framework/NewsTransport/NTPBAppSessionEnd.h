@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {
    struct { unsigned char appSessionDuration : 1; unsigned char appsAutoSubscribeFeedCount : 1; unsigned char channelSubscriptionCount : 1; unsigned char internalAutoSubscribeFeedCount : 1; unsigned char notificationEnabledChannelsCount : 1; unsigned char notitificationsEnabledChannelsCount : 1; unsigned char portraitAutoSubscribeFeedCount : 1; unsigned char safariAutoSubscribeFeedCount : 1; unsigned char sessionEndReason : 1; unsigned char topicSubscriptionCount : 1; unsigned char breakingNewsAvailableDuringSession : 1; unsigned char breakingNewsDismissedDuringSession : 1; unsigned char syncedOtherUserIdDuringSession : 1; } _has;
}

@property (nonatomic) BOOL hasSessionEndReason;
@property (nonatomic) int sessionEndReason;
@property (retain, nonatomic) NSMutableArray *lastVisibleViews;
@property (nonatomic) BOOL hasChannelSubscriptionCount;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic) BOOL hasTopicSubscriptionCount;
@property (nonatomic) int topicSubscriptionCount;
@property (nonatomic) BOOL hasAppSessionDuration;
@property (nonatomic) long long appSessionDuration;
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *notificationChannelIds;
@property (nonatomic) BOOL hasNotificationEnabledChannelsCount;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) BOOL hasBreakingNewsAvailableDuringSession;
@property (nonatomic) BOOL breakingNewsAvailableDuringSession;
@property (nonatomic) BOOL hasBreakingNewsDismissedDuringSession;
@property (nonatomic) BOOL breakingNewsDismissedDuringSession;
@property (retain, nonatomic) NSMutableArray *autoSubscribedFeedIds;
@property (retain, nonatomic) NSMutableArray *groupableFeedIds;
@property (nonatomic) BOOL hasPortraitAutoSubscribeFeedCount;
@property (nonatomic) int portraitAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSafariAutoSubscribeFeedCount;
@property (nonatomic) int safariAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasAppsAutoSubscribeFeedCount;
@property (nonatomic) int appsAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasInternalAutoSubscribeFeedCount;
@property (nonatomic) int internalAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSyncedOtherUserIdDuringSession;
@property (nonatomic) BOOL syncedOtherUserIdDuringSession;

+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;
+ (Class)lastVisibleViewsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
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
- (int)StringAsSessionEndReason:(id)a0;
- (void)clearPaidSubscriptionChannelIds;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (void)addAutoSubscribedFeedIds:(id)a0;
- (void)addGroupableFeedIds:(id)a0;
- (void)addLastVisibleViews:(id)a0;
- (void)addNotificationChannelIds:(id)a0;
- (void)addPaidSubscriptionChannelIds:(id)a0;
- (void)addSubscribedFeedIds:(id)a0;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (void)clearAutoSubscribedFeedIds;
- (void)clearGroupableFeedIds;
- (void)clearLastVisibleViews;
- (void)clearNotificationChannelIds;
- (void)clearSubscribedFeedIds;
- (id)groupableFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupableFeedIdsCount;
- (id)lastVisibleViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)lastVisibleViewsCount;
- (id)notificationChannelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationChannelIdsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;
- (id)sessionEndReasonAsString:(int)a0;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedFeedIdsCount;

@end
