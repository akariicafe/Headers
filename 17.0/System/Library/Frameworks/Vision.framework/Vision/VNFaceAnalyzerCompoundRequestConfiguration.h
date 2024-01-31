@class NSString, NSMutableArray, NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {
    NSMutableDictionary *_detectorConfigurationOptions;
}

@property (readonly, nonatomic) NSMutableArray *originalRequests;
@property (copy, nonatomic) NSString *detectorType;

- (id)initWithRequestClass:(Class)a0;
- (void)setDetectorConfigurationOptions:(id)a0;
- (id)detectorConfigurationOptions;
- (void)setResolvedRevision:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
