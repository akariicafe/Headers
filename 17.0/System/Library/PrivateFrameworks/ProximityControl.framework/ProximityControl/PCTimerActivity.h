@interface PCTimerActivity : NSUserActivity <PCActivity>

- (id)image;
- (id)displayTitle;
- (id)fireDate;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)initFromTimer:(id)a0;
- (double)timeLeft;

@end
