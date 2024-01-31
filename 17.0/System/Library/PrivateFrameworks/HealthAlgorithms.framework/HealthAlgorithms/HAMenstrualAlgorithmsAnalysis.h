@class NSArray, HAMenstrualAlgorithmsStats, HAMenstrualAlgorithmsDeviationAnalysis;

@interface HAMenstrualAlgorithmsAnalysis : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *menstruationPredictions;
@property (retain, nonatomic) NSArray *fertilityPredictions;
@property (retain, nonatomic) HAMenstrualAlgorithmsStats *stats;
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviationAnalysis *deviationAnalysis;
@property (nonatomic) BOOL isUserInactive;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
