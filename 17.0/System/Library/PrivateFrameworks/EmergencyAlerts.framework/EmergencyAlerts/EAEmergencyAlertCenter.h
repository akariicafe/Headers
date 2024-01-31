@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}

- (id)init;
- (unsigned long long)currentAudioAndVideoCallCount;
- (id)getUpdatedNotificationForAppleSafetyAlert:(id)a0 withMessageDictionary:(id)a1;
- (void)replaceContentForRequestWithRequestID:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)handleCellBroadcastMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithUserNotificationCenter:(id)a0;
- (void).cxx_destruct;
- (void)handleRawCellBroadcastMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)handleAppleSafetyAlertMessage:(id)a0;

@end
