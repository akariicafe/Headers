@class NSString, SBApplication, NSDate;
@protocol BSTimerScheduleQuerying, SBApplicationWakeLifecycleHandling, BSInvalidatable;

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable> {
    id<SBApplicationWakeLifecycleHandling> _lifecycleTracker;
    SBApplication *_application;
    BOOL _invalidated;
}

@property (retain, nonatomic) id<BSTimerScheduleQuerying, BSInvalidatable> wakeTimer;
@property (readonly, nonatomic) NSDate *scheduledDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)unschedule;
- (void)_applicationProcessStateDidChange:(id)a0;
- (void)wakeImmediately;
- (id)_expectedFireDateForTimer:(id)a0;
- (void)_forceInvalidate;
- (id)_initWithLifecycleTracker:(id)a0 forApplication:(id)a1;
- (void)endResumeIfAwoken;
- (void)scheduleWakeForDate:(id)a0;

@end
