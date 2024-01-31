@class _DASScheduler, _CDContextualKeyPath, NSObject;
@protocol OS_os_log, _DKKnowledgeSaving, OS_dispatch_queue, _CDLocalContext;

@interface _DASWidgetRefreshScheduler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _DASScheduler *dasScheduler;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_DKKnowledgeSaving> store;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) _CDContextualKeyPath *widgetOverrideKeypath;

+ (id)sharedScheduler;

- (id)init;
- (void)recordWidgetViews:(id)a0;
- (void)setSystemAddedWidgetBudgetIDs:(id)a0;
- (void)submitRefreshActivity:(id)a0;
- (void)setOverridesForWidgetBudgetIDs:(id)a0;
- (void)createRateLimitConfigurationWithName:(id)a0 rateLimits:(id)a1;
- (id)createRefreshActivityWithWidgetParameters:(id)a0 withRefreshHandler:(id /* block */)a1;
- (id)createRefreshActivityWithRateLimitConfigurationName:(id)a0 forWidgetBudgetID:(id)a1 withRemoteDeviceID:(id)a2 containingAppID:(id)a3 refreshAfter:(id)a4 refreshBefore:(id)a5 widgetInfo:(id)a6 refreshHandler:(id /* block */)a7;
- (id)createRefreshActivityForWidgetID:(id)a0 containingAppID:(id)a1 refreshAfter:(id)a2 refreshBefore:(id)a3 widgetInfo:(id)a4 refreshHandler:(id /* block */)a5;
- (id)createRefreshActivityForWidgetBudgetID:(id)a0 containingAppID:(id)a1 refreshAfter:(id)a2 refreshBefore:(id)a3 widgetInfo:(id)a4 refreshHandler:(id /* block */)a5;
- (void)setBudget:(id)a0;
- (void)recordWidgetRefreshes:(id)a0;
- (void)cancelActivity:(id)a0;
- (void).cxx_destruct;
- (id)createRefreshActivityWithWidgetParameters:(id)a0 refreshHandler:(id /* block */)a1;
- (void)setOverridesForWidgetIDs:(id)a0;
- (id)decrementBudgetForWidgetID:(id)a0 by:(double)a1;
- (id)createRefreshActivityWithWidgetParameters:(id)a0;

@end
