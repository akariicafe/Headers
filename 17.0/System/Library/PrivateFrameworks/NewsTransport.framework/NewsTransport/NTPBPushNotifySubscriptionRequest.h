@class NSString, NTPBDeviceInfo, NSMutableArray;

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasNotificationUserId;
@property (retain, nonatomic) NSString *notificationUserId;
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSMutableArray *notificationEntitys;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (retain, nonatomic) NSMutableArray *topicsFolloweds;

+ (Class)notificationEntityType;
+ (Class)topicsFollowedType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addNotificationEntity:(id)a0;
- (void)addTopicsFollowed:(id)a0;
- (void)clearNotificationEntitys;
- (void)clearTopicsFolloweds;
- (id)notificationEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationEntitysCount;
- (id)topicsFollowedAtIndex:(unsigned long long)a0;
- (unsigned long long)topicsFollowedsCount;

@end
