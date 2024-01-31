@class NSString, NSNumber;

@interface LCFELFeatureImportanceAnalysisResult : NSObject

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSNumber *featureCount;
@property (readonly, nonatomic) NSNumber *correlationCoefficient;
@property (readonly, nonatomic) NSNumber *featureImportance;

- (void).cxx_destruct;
- (id)init:(id)a0 featureCount:(id)a1 correlationCoefficient:(id)a2 featureImportance:(id)a3;

@end
