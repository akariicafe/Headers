@class _TtC13BookDataStore23CloudSecureManagerProxy;
@protocol BDSSecureEngagementManaging, BCCloudSecureUserDataManager;

@interface BDSSecureManager : NSObject <BDSHandlesRemoteNotification>

@property (retain, nonatomic) _TtC13BookDataStore23CloudSecureManagerProxy *secureManager;
@property (readonly, nonatomic) id<BCCloudSecureUserDataManager> userDataManager;
@property (readonly, nonatomic) id<BDSSecureEngagementManaging> engagementManager;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)handleRemoteCKNotification:(id)a0;
- (void)handleRemoteNotification:(id)a0;
- (void)setEnableCloudSync:(BOOL)a0;

@end
