@class NSString;

@interface NTPBNotificationSubscribeUnsubscribe : PBCodable <NSCopying> {
    struct { unsigned char notificationSettingType : 1; unsigned char notificationSubscribeUnsubscribeLocation : 1; unsigned char userAction : 1; unsigned char isPaidUserOfChannel : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasNotificationSubscribeUnsubscribeLocation;
@property (nonatomic) int notificationSubscribeUnsubscribeLocation;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) BOOL hasIsPaidUserOfChannel;
@property (nonatomic) BOOL isPaidUserOfChannel;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL hasNotificationSettingType;
@property (nonatomic) int notificationSettingType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
