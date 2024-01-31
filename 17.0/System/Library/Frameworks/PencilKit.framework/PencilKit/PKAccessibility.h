@interface PKAccessibility : NSObject <PKAccessibilityExtras>

+ (id)sharedInstance;

- (BOOL)needsAccessibilityElements;
- (void)postAnnouncement:(id)a0 withSender:(id)a1 priority:(long long)a2;

@end
