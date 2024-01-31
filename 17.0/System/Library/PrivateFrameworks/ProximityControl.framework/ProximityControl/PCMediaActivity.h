@interface PCMediaActivity : NSUserActivity <PCActivity>

+ (id)titleForContentItem:(id)a0;
+ (id)userActivityInfoFor:(id)a0 inContext:(id)a1;

- (long long)direction;
- (id)image;
- (id)shortDescription;
- (unsigned int)playbackState;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (BOOL)isValid;
- (long long)mediaType;
- (BOOL)isEqual:(id)a0;
- (long long)behavior;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)artWork;
- (id)initWithDisplayContext:(id)a0 response:(id)a1;

@end
