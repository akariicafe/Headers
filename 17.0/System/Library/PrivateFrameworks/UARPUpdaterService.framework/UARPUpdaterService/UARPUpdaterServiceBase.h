@interface UARPUpdaterServiceBase : NSObject <UARPUpdaterService>

- (void)disabledProductIdentifiers:(id)a0;
- (id)init;
- (void)consentReceived:(id)a0;
- (void)eaRuleMatched:(id)a0;
- (void)getBSDNotificationsListWithReply:(id /* block */)a0;
- (void)standaloneDynamicAssetSolicitation:(id)a0 modelNumber:(id)a1 notifyService:(id)a2 reply:(id /* block */)a3;
- (void)getMatchingServicesListWithReply:(id /* block */)a0;
- (void)bsdNotificationReceived:(id)a0;
- (void)consentReceivedPostLogoutMode:(id)a0;
- (void)ioKitRuleMatched:(id)a0;
- (void)standaloneDynamicAssetSolicitation:(id)a0 modelNumbers:(id)a1 notifyService:(id)a2 reply:(id /* block */)a3;
- (void)getIsBusyStatusWithReply:(id /* block */)a0;
- (void)getDASActivityListWithReply:(id /* block */)a0;
- (void)dasActivityReceived:(id)a0;

@end
