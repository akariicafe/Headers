@class NSString, ARTechnique, NSHashTable;
@protocol ARTechniqueForwardingStrategy, ARMLDepthDataSourceProvider;

@interface ARPersonOcclusionParentTechnique : ARParentTechnique <ARTechniqueDelegate> {
    double _lastDetectedPersonTimeStamp;
    BOOL _detectedPerson;
    BOOL _shouldSkipFramesWhenBusy;
    ARTechnique<ARMLDepthDataSourceProvider> *_depthTechnique;
    ARTechnique *_primaryPersonDetectionTechnique;
    struct __CVBuffer { } *_placeholderDepthBuffer;
    NSHashTable *_personDetectionTechniques;
}

@property (retain, nonatomic) id<ARTechniqueForwardingStrategy> depthTechniqueProcessingStrategy;
@property (nonatomic) long long optimizationStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)updatePersonDetectionTechniques;
- (id)initWithTechniques:(id)a0 delegate:(id)a1;
- (void)reconfigureFrom:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)setTechniques:(id)a0;
- (void)technique:(id)a0 didOutputResultData:(id)a1 timestamp:(double)a2 context:(id)a3;
- (id)techniquesToRunWithForwardedDepth:(BOOL)a0;
- (void)updatePrimaryPersonDetectionTechnique;

@end
