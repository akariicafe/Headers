@class UNUserNotificationCenter, IMDScreenTimeAskReponseHandler, IMDSafetyMonitorResponseHandler, NSString, IMDFamilyInviteReponseHandler, IMDAskToBuyResponseHandler;

@interface IMDNotificationResponseUtilities : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDScreenTimeAskReponseHandler *screenTimeAskReponseHandler;
@property (retain, nonatomic) IMDFamilyInviteReponseHandler *familyInviteResponseHandler;
@property (retain, nonatomic) IMDAskToBuyResponseHandler *askToBuyResponseHandler;
@property (retain, nonatomic) IMDSafetyMonitorResponseHandler *safetyMonitorResponseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)_setupNotificationCenter;
- (void)_markMessageAsRead:(id)a0 inChat:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
