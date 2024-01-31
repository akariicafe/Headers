@interface IMDExposureNotificationManager : NSObject

+ (id)sharedInstance;

- (id)_enManager;
- (BOOL)_isMessageItemEligibleForEN:(id)a0;
- (id)_enTextMessageForMessageBody:(id)a0;
- (id)_allowedDomains;
- (BOOL)_bagDisabled;
- (void)processMessageItemForENURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_enURLsForMessageBody:(id)a0;

@end
