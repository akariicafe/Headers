@class ADConfidenceLevelRanges, ADJasperPointCloudFilterParameters, ADAggregationParameters;

@interface ADJasperColorPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (retain, nonatomic) ADAggregationParameters *aggregationParameters;
@property (nonatomic) unsigned long long confidenceUnits;
@property (nonatomic) float confidenceBucketingLowThreshold;
@property (nonatomic) float confidenceBucketingHighThreshold;
@property (retain, nonatomic) ADConfidenceLevelRanges *confidenceLevelRanges;
@property (nonatomic) float defaultAlphaForDepthWarping;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
