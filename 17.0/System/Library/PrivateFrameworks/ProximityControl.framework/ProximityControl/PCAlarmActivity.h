@interface PCAlarmActivity : NSUserActivity <PCActivity>

- (id)image;
- (id)fireDate;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (BOOL)isValid;
- (id)title;
- (BOOL)isEqual:(id)a0;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)initFromAlarm:(id)a0;

@end
