@interface MapsSuggestionsSiri : NSObject

+ (id)isAllowedOnHomeScreenCondition;
+ (BOOL)isAllowedOnLockScreen;
+ (BOOL)isEnabled;
+ (id)isEnabledCondition;
+ (id)isAllowedOnLockScreenCondition;
+ (BOOL)isAllowedOnHomeScreen;

@end
