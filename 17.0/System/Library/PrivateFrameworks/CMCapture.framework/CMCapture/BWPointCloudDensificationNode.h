@class ADJasperColorV2Executor, BWPointCloudDensificationNodeConfiguration;

@interface BWPointCloudDensificationNode : BWNode {
    ADJasperColorV2Executor *_executor;
    BWPointCloudDensificationNodeConfiguration *_configuration;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)initWithConfiguration:(id)a0;
- (id)_newPointCloudFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_setupPointCloudMediaConfigurationForInput:(id)a0 inputAttachedMediaKey:(id)a1;

@end
