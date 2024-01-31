@class PETScalarEventTracker;

@interface SGMEventBannerConfirmed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 app:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a1 category:(struct SGMEventCategory_ { unsigned long long x0; })a2 extracted:(struct SGMEventExtractionType_ { unsigned long long x0; })a3 state:(struct SGMEventState_ { unsigned long long x0; })a4 titleAdj:(struct SGMEventStringAdj_ { unsigned long long x0; })a5 dateAdj:(struct SGMEventDateAdj_ { unsigned long long x0; })a6 duraAdj:(struct SGMEventDurationAdj_ { unsigned long long x0; })a7;

@end
