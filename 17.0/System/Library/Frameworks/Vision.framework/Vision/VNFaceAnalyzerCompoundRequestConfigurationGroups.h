@class NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)allConfigurations;
- (id)configurationForRequest:(id)a0 withObservationGroup:(id)a1 compoundRequestRevision:(unsigned long long)a2;

@end
