@interface MSVABTestGenerator : NSObject

@property (readonly, nonatomic) float probabilityForOutcomeA;
@property (readonly, nonatomic) long long totalExperiments;
@property (readonly, nonatomic) long long totalForOutcomeA;
@property (readonly, nonatomic) long long totalForOutcomeB;

- (id)description;
- (id)initWithProbabilityForOutcomeA:(float)a0;
- (long long)lastOutcome;
- (long long)nextOutcome;
- (void)updateProbabilityForOutcomeA:(float)a0;

@end
