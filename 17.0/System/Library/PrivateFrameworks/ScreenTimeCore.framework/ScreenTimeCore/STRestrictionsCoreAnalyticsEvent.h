@class NSString, NSDictionary;

@interface STRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL contentAndPrivacyRestrictionsEnabled;
@property (readonly) BOOL mediaAndAppleMusicIsRestricted;
@property (readonly) BOOL gameCenterMultiplayerGamesIsRestricted;
@property (readonly) BOOL gameCenterAddingFriendsIsRestricted;
@property (readonly) BOOL gameCenterConnectWithFriendsIsRestricted;
@property (readonly) BOOL gameCenterScreenRecordingIsRestricted;
@property (readonly) BOOL gameCenterNearbyMultiplayerIsRestricted;
@property (readonly) BOOL gameCenterPrivateMessagingIsRestricted;
@property (readonly) BOOL gameCenterProfilePrivacyChangesIsRestricted;
@property (readonly) BOOL gameCenterAvatarAndNicknameChangesIsRestricted;
@property (readonly) long long userAgeGroup;
@property (readonly) BOOL userIsManaged;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
