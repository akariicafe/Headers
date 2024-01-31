@class NSString, CPLEngineScheduler;

@interface CPLEngineSchedulerBlocker : NSObject {
    BOOL _blocking;
}

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) CPLEngineScheduler *scheduler;

- (void)dealloc;
- (void)unblock;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 scheduler:(id)a1;

@end
