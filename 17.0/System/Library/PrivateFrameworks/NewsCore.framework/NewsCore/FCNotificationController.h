@class NSString, FCCommandQueue, FCUserInfo;
@protocol FCCoreConfigurationManager;

@interface FCNotificationController : NSObject <FCUserInfoObserving>

@property (retain, nonatomic) FCUserInfo *userInfo;
@property (retain, nonatomic) FCCommandQueue *commandQueue;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSString *deviceToken;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic) BOOL publisherNotificationsAllowed;
@property (nonatomic) BOOL appleNewsNotificationsAllowed;
@property (nonatomic) BOOL shouldUseNewsUINotificationHandling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)registerNotificationsForTopicIDs:(id)a0 withTopicGroupingID:(id)a1 fromChannelID:(id)a2;
- (void)refreshNotificationsFromAppleNews;
- (void)setEndOfAudioTrackNotificationsEnabled:(BOOL)a0;
- (BOOL)unregisterNotificationsForChannelID:(id)a0;
- (void)userInfoDidChangeNotificationsUserID:(id)a0;
- (void)_registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (BOOL)refreshNotificationsForTopicIDs:(id)a0 withTopicGroupingID:(id)a1 fromChannelID:(id)a2;
- (BOOL)refreshNotificationsForChannelIDs:(id)a0 paidChannelIDs:(id)a1;
- (void)setSportsTopicNotificationsEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setNewIssueNotificationsEnabled:(BOOL)a0;
- (void)deviceDigestModeDidUpdateToDigestMode:(int)a0;
- (BOOL)setPuzzleNotificationsEnabled:(BOOL)a0 userTriggered:(BOOL)a1 error:(id *)a2;
- (id)initWithUserInfo:(id)a0 commandQueue:(id)a1 configurationManager:(id)a2 publisherNotificationsAllowed:(BOOL)a3 appleNewsNotificationsAllowed:(BOOL)a4;
- (void)registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (BOOL)registerNotificationsForChannelID:(id)a0 isPaid:(BOOL)a1;
- (BOOL)unregisterNotificationsForTopicIDs:(id)a0 withTopicGroupingID:(id)a1 fromChannelID:(id)a2;
- (BOOL)setMarketingNotificationsEnabled:(BOOL)a0 error:(id *)a1;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)a0;

@end
