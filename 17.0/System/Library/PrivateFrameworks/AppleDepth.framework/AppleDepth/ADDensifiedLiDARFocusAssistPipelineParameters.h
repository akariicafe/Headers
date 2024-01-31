@class ADJasperPointCloudFilterParameters;

@interface ADDensifiedLiDARFocusAssistPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;

- (id)init;
- (void).cxx_destruct;

@end
