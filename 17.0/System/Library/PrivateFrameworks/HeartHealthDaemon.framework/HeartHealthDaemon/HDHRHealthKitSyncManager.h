@class HDProfile;

@interface HDHRHealthKitSyncManager : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)triggerImmediateSyncWithReason:(id)a0 loggingCategory:(id)a1;

@end
