@class NSObject;
@protocol OS_os_activity;

@interface DEDActivity : NSObject

@property (retain) NSObject<OS_os_activity> *cleanup;

+ (id)sharedInstance;

- (id)newCleanupActivity;
- (void).cxx_destruct;
- (id)currentCleanupActivity;

@end
