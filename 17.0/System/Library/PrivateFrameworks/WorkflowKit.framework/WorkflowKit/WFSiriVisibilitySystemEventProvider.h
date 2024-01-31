@interface WFSiriVisibilitySystemEventProvider : WFApplicationVisibilitySystemEventProvider

- (long long)applicationDidAppearEventType;
- (long long)applicationDidDisappearEventType;
- (BOOL)layoutContainsApplication:(id)a0;

@end
