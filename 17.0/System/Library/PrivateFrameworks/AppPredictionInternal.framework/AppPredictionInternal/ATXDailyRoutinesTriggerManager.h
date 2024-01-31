@class NSObject, NSDateFormatter, NSDate;
@protocol ATXCachedTransitionPredictorProtocol, ATXTransitionPredictorProtocol, ATXContextStoreWriterProtocol, OS_dispatch_queue;

@interface ATXDailyRoutinesTriggerManager : NSObject {
    NSDateFormatter *_dateFormatter;
    id<ATXCachedTransitionPredictorProtocol> _cachedPredictor;
    id<ATXTransitionPredictorProtocol> _transitionPredictor;
    id<ATXContextStoreWriterProtocol> _contextStoreWriter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSDate *now;

+ (id)sharedInstance;
+ (id)_wakeupDateForExitDate:(id)a0 fromDate:(id)a1;
+ (id)convenienceDateFormatter;

- (id)init;
- (id)currentTransition;
- (void).cxx_destruct;
- (void)_scheduleOneShotJobAfterInterval:(double)a0;
- (id)initWithCacheBasedPredictor:(id)a0 transitionPredictor:(id)a1 contextStoreWriter:(id)a2;
- (void)updateWithActivity:(id)a0;

@end
