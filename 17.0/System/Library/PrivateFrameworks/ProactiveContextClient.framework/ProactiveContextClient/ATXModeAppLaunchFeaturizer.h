@class NSString, BPSSink, _PASSimpleCoalescingTimer, BMBiomeScheduler, NSObject, ATXFrontBoardLayoutAggregator;
@protocol OS_dispatch_queue, ATXModeFeaturizerDelegate;

@interface ATXModeAppLaunchFeaturizer : NSObject <ATXModeFeaturizer> {
    _PASSimpleCoalescingTimer *_cooldownTimer;
    _PASSimpleCoalescingTimer *_easeInTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    ATXFrontBoardLayoutAggregator *_frontBoardLayoutAggregator;
}

@property long long state;
@property (nonatomic) BOOL easeInTimerIsEnabled;
@property (nonatomic) BOOL cooldownTimerIsEnabled;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (int)modeFeatureType;
- (id)additionalAllowedBundleIds;
- (void)beginListening;
- (id)provideFeatures;
- (unsigned long long)expectedGenreId;
- (id)registrationId;
- (void)stopListening;
- (void)_actuallyEndMode;
- (void)_actuallyStartMode;
- (id)_latestAppLaunchBundleIds;
- (void)_processActiveApps:(id)a0;
- (id)_provideFeaturesWithBundleIds:(id)a0;

@end
