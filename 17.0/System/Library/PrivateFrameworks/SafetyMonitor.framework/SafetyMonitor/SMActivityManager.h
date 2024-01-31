@interface SMActivityManager : NSObject

+ (id)shared;
+ (void)startActivity;
+ (void)endActivities;
+ (void)updateActivityWithState:(id)a0;

@end
