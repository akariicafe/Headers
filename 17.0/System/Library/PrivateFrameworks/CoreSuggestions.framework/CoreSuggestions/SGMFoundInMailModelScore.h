@class PETScalarEventTracker;

@interface SGMFoundInMailModelScore : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 model:(struct SGMFoundInMailModelType_ { unsigned long long x0; })a1 contactDetail:(struct SGMContactDetailType_ { unsigned long long x0; })a2 result:(struct SGMTypeSafeBool_ { unsigned long long x0; })a3 correct:(struct SGMTypeSafeBool_ { unsigned long long x0; })a4 mode:(struct SGFoundInMailModelMode_ { unsigned long long x0; })a5 supervision:(struct SGMFoundInMailSupervisionType_ { unsigned long long x0; })a6;

@end
