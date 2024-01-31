@class ATXScoreDistribution, ATXCategoricalAttributeBreakdown;

@interface ATXUIFeedbackMetricsResultSection : NSObject

@property (readonly, nonatomic) ATXScoreDistribution *scoreDistribution;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *clientModelBreakdown;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *consumerSubTypeBreakdown;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *confidenceBreakdown;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *predictionReasonCodeBreakdown;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXUIFeedbackMetricsResultSection:(id)a0;

@end
