@class NSString, ADStreamSync, ADJasperColorExecutor, ADPointCloudAggregator;

@interface ADJasperColorFlow : ADFlow <ADFlowColorConsumer, ADFlowPointCloudConsumer> {
    ADStreamSync *_streamSync;
    ADPointCloudAggregator *_pointCloudAggregator;
}

@property (readonly, retain, nonatomic) ADJasperColorExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExecutor:(id)a0;
- (void).cxx_destruct;
- (void)processIfMatch:(id)a0;
- (void)pushColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 timestamp:(double)a3;
- (void)pushPointCloud:(id)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 timestamp:(double)a3;

@end
