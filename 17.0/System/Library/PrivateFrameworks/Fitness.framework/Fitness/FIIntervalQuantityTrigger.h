@class FIQuantityTimeSlice, HKQuantity, NSDate, HKQuantityType;

@interface FIIntervalQuantityTrigger : NSObject {
    FIQuantityTimeSlice *_slice;
    HKQuantity *_threshold;
    BOOL _finalized;
    id /* block */ _completion;
}

@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) BOOL triggered;
@property (readonly, nonatomic) NSDate *triggeredDate;

- (BOOL)triggered;
- (id)quantityType;
- (id)description;
- (void).cxx_destruct;
- (id)_finalizedTriggerByAddingSample:(id)a0 toSlice:(id)a1 withPreviousTotal:(id)a2 threshold:(id)a3;
- (id)addingSample:(id)a0 error:(id *)a1;
- (id)initWithQuantityTimeslice:(id)a0 threshold:(id)a1 triggeredDate:(id)a2;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1 threshold:(id)a2;
- (id)settingTimeSlice:(id)a0;

@end
