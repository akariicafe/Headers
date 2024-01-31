@interface VUIAccessibility : NSObject

+ (id)sharedInstance;
+ (BOOL)isFeatureEnabled:(long long)a0;
+ (BOOL)contentSizeCategoryIsAccessibility:(unsigned long long)a0;
+ (BOOL)isAXLargeEnabled:(unsigned long long)a0;
+ (BOOL)isAXSmallEnabled:(unsigned long long)a0;
+ (id)makeAccessibilityIdentifierString:(id)a0 additionalString:(id)a1;

- (id)init;
- (void)dealloc;
- (void)_addObserverToAccessibilityNotifications;
- (void)_didChangeAccessibilityReduceMotionStatus;
- (void)_didChangeAccessibilityVoiceOverStatus;

@end
