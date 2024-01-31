@interface FCPersonalizationFunctionProvider : NSObject <FCPersonalizationFunctionProviding>

@property (nonatomic) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;

- (id)init;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1 preselectedItems:(id)a2;
- (id)initWithAppConfiguration:(id)a0;

@end
