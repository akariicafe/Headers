@class NSString;

@interface VUIUserEngagementSheetLauncher : NSObject <AMSUserNotificationAuthorizationDelegate>

@property (nonatomic) BOOL hasAppLostConnectivity;
@property (retain, nonatomic) NSString *lastTabIdentifier;
@property (nonatomic) unsigned long long firstPromptLaunchNumberAfterGDPR;
@property (nonatomic) unsigned long long lastPromptLaunchNumberAfterGDPR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (void)handleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (void)_deleteKeysUsedForSheetPresentation;
- (void)_handleNetworkReachabilityDidChangeNotification:(id)a0;
- (void)_handleTabBarChange:(id)a0;
- (void)_handleUserNotificationAction:(long long)a0;
- (void)_showNotificationAuthorizationSheet;
- (void)handleAMSEngagementPresentationSheet:(BOOL)a0 isRepromptSupported:(BOOL)a1;
- (BOOL)isAnotherSheetShowingToUser;

@end
