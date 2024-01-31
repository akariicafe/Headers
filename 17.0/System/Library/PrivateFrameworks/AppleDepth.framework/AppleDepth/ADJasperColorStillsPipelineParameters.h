@class ADJasperPointCloudFilterParameters;

@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilterForTransformCorrection;

- (id)init;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
