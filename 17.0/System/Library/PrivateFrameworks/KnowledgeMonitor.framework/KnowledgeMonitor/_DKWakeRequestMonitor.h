@class NSString, NSObject, NSDate;
@protocol OS_dispatch_source;

@interface _DKWakeRequestMonitor : _DKMonitor {
    BOOL _updateTimerResumed;
}

@property (retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate;
@property (retain, nonatomic) NSString *nextUserVisibleWakeRequestor;
@property (nonatomic) int wakeRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;

+ (id)eventStream;
+ (id)entitlements;

- (id)loadState;
- (void)saveState;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)obtainNextUserVisibleWakeRequest;
- (void).cxx_destruct;
- (void)deactivate;

@end
