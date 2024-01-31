@interface ICAccessibility : NSObject <ICAccessibilityExtras>

+ (id)sharedInstance;

- (BOOL)needsAccessibilityElements;
- (void)postAnnouncement:(id)a0 withSender:(id)a1 priority:(long long)a2;
- (BOOL)shouldPerformLoggingForSwitchControl;
- (BOOL)shouldPerformLoggingForVoiceOver;

@end
