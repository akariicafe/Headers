@interface PCAnnouncementActivity : NSUserActivity <PCActivity>

- (id)init;
- (id)image;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;

@end
