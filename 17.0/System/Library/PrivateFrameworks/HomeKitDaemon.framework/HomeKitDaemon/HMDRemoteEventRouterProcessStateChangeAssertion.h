@class NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSObject;
@protocol HMETimerProvider, HMFCancellable, OS_dispatch_queue, HMDRemoteEventRouterProcessStateChangeAssertionDataSource;

@interface HMDRemoteEventRouterProcessStateChangeAssertion : NSObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<HMETimerProvider> timerProvider;
@property (readonly, weak, nonatomic) id<HMDRemoteEventRouterProcessStateChangeAssertionDataSource> dataSource;
@property (readonly, copy, nonatomic) NSDictionary *applicationsAndIntervals;
@property (readonly, nonatomic) NSMutableSet *foregroundProcesses;
@property (readonly, nonatomic) NSMutableDictionary *backgroundProcesses;
@property (retain, nonatomic) id<HMFCancellable> eventRouterActiveAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_backgroundTimerDidExpire:(id)a0;
- (id)_enableBackgroundTimerWithBundleIdentifier:(id)a0;
- (void)_removeBackgroundTimer:(id)a0;
- (void)foregroundStateChangedWithBundleIdentifier:(id)a0 applicationState:(unsigned long long)a1;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 applicationsAndIntervals:(id)a2 dataSource:(id)a3;

@end
