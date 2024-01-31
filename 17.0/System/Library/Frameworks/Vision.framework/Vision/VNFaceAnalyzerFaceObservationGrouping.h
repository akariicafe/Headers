@class NSMutableDictionary;

@interface VNFaceAnalyzerFaceObservationGrouping : NSObject {
    NSMutableDictionary *_observationGroupsToRequestMapping;
}

- (void).cxx_destruct;
- (id)addToGroupingsRequest:(id)a0 withFaceObservations:(id)a1;

@end
