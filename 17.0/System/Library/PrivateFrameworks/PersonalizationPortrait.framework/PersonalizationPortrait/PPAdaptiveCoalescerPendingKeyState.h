@class NSMutableArray;

@interface PPAdaptiveCoalescerPendingKeyState : NSObject {
    id _key;
    NSMutableArray *_handlers;
    NSMutableArray *_dates;
}

- (id)init;
- (double)currentQPSForNowDate:(id)a0;
- (double)currentQPSForDateInterval:(id)a0;
- (void).cxx_destruct;
- (double)currentDelayForNowDate:(id)a0;
- (id)initWithKey:(id)a0;
- (BOOL)shouldGarbageCollectForNowDate:(id)a0;
- (void)addDate:(id)a0;

@end
