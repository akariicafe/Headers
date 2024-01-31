@class ADJasperPointCloudFilterParameters, ADAggregationParameters;

@interface ADJasperColorInFieldCalibrationPipelineParameters : ADPipelineParameters

@property (readonly, nonatomic) float colorCameraNominalEfl;
@property (readonly, nonatomic) float maxStdForValidResult;
@property (readonly, nonatomic) float coeffX;
@property (readonly, nonatomic) float coeffY;
@property (readonly, nonatomic) float coeffZ;
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilterParameters;
@property (retain, nonatomic) ADAggregationParameters *pcAggregationParameters;
@property (nonatomic) unsigned int featuresVectorAggregationSize;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
