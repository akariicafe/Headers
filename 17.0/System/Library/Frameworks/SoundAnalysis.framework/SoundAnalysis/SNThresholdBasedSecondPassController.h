@class NSString;

@interface SNThresholdBasedSecondPassController : NSObject <SNSecondPassController> {
    double _secondPassBeginThreshold;
    double _secondPassEndThreshold;
    double _secondPassHangoverPeriod;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _secondPassTriggerTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstResultBelowEndThresholdStartTime;
    BOOL _secondPassIsActive;
    id /* block */ _firstPassResultToComparableFunction;
    id /* block */ _secondPassResultToComparableFunction;
}

@property (copy) id /* block */ beginSecondPassHandler;
@property (copy) id /* block */ endSecondPassHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)firstPassDidProduceResult:(id)a0;
- (void)secondPassDidProduceResult:(id)a0;

@end
