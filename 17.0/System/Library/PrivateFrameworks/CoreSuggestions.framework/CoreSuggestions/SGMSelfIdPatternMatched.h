@class PETScalarEventTracker;

@interface SGMSelfIdPatternMatched : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 patternType:(struct SGMSIPatternType_ { unsigned long long x0; })a1 patternHash:(id)a2 nameTokens:(unsigned long long)a3 nameClass:(struct SGMSINameClassification_ { unsigned long long x0; })a4 messageIndex:(unsigned long long)a5;

@end
