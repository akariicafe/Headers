@class NSMutableArray;

@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *notifications;
@property (retain, nonatomic) NSMutableArray *userInfos;
@property (retain, nonatomic) NSMutableArray *playerPaths;

+ (Class)notificationType;
+ (Class)playerPathType;
+ (Class)userInfoType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNotification:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPlayerPath:(id)a0;
- (void)addUserInfo:(id)a0;
- (void)clearNotifications;
- (void)clearPlayerPaths;
- (void)clearUserInfos;
- (id)notificationAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationsCount;
- (id)playerPathAtIndex:(unsigned long long)a0;
- (unsigned long long)playerPathsCount;
- (id)userInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)userInfosCount;

@end
