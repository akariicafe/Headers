@interface _SFPerSitePreferenceNotifyingListController : PSListController

- (id)init;
- (void)dealloc;
- (void)perSitePreferenceValueDidChange;
- (void)_didUpdatePerSitePreferenceNotificationReceived:(id)a0;
- (void)_didUpdatePerSitePreferenceRemotely:(id)a0;
- (void)notifyPerSitePreferenceValueDidChange;

@end
