@class NSDictionary;

@interface DYShaderAnalyzerResult : NSObject

@property (nonatomic) double totalCost;
@property (retain, nonatomic) NSDictionary *drawCallCost;
@property (retain, nonatomic) NSDictionary *perFileCost;
@property (retain, nonatomic) NSDictionary *totalPerLineCost;
@property (retain, nonatomic) NSDictionary *drawCallPerLineCost;
@property (retain, nonatomic) NSDictionary *perFileLineCostDictForCI;

- (id)init;
- (void).cxx_destruct;

@end
