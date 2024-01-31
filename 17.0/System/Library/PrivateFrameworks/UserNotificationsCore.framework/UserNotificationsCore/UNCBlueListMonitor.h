@class NSObject, _CDContextualKeyPath;
@protocol UNCBlueListMonitorDelegate, _CDContext, OS_dispatch_queue;

@interface UNCBlueListMonitor : NSObject {
    BOOL _budgetExhausted;
    id<_CDContext> _context;
    _CDContextualKeyPath *_blueListKeyPath;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<UNCBlueListMonitorDelegate> delegate;

- (void)_startMonitoring;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldBoostOpportunisticTopicsToEnabled;

@end
