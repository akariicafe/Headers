@class NSString, geo_isolater;
@protocol GEOAPServiceProxy;

@interface GEOAPServiceManager : NSObject <GEOAPServiceProxy> {
    BOOL _evDirectionsFeedbackAllowed;
    BOOL _evDirectionsFeedbackAuth;
    geo_isolater *_evInfoIsolator;
    id<GEOAPServiceProxy> _proxy;
    id _evDirectionsFeedbackAllowedListener;
    id _evDirectionsFeedbackAuthListener;
}

@property (readonly, nonatomic) BOOL evDirectionsFeedbackAuth;
@property (nonatomic) BOOL evDirectionsFeedbackAllowed;
@property (nonatomic) BOOL directionsFeedbackAllowed;
@property (readonly, nonatomic) BOOL evalModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useProxyClass:(Class)a0;
+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reportDailyUsageCountType:(int)a0;
- (BOOL)AppleInternal;
- (void)flushEvalData;
- (void)logToDiagAndUsageUnderBugId:(id)a0 filePrefix:(id)a1 logData:(id)a2;
- (BOOL)platformDiagAndUsage;
- (BOOL)platformDiagAndUsageOrAppleInternal;
- (void)processMapsDeletionWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)reportCuratedCollectionWasViewedWithId:(unsigned long long)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)reportDailySettings:(id)a0;
- (void)reportDailySettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)runAggregationTasks;
- (void)setEvalMode:(BOOL)a0;
- (void)showEvalDataWithVisitorBlock:(id /* block */)a0;
- (void)toggleEVDirectionsFeedbackAllowed;
- (void)updateSharedStateType:(int)a0 state:(id)a1;
- (void)updateSharedStateType:(int)a0 state:(id)a1 completion:(id /* block */)a2 completionQueue:(id)a3;

@end
