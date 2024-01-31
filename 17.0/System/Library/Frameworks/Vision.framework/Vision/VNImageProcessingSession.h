@class VNSession;

@interface VNImageProcessingSession : NSObject <VNRequestWarming> {
    VNSession *_session;
}

- (id)init;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)detectionprintsFromRequest:(id)a0 performedOnPixelBuffer:(struct __CVBuffer { } *)a1 withAugmentations:(id)a2 error:(id *)a3;
- (id)sceneprintsFromRequest:(id)a0 performedOnPixelBuffer:(struct __CVBuffer { } *)a1 withAugmentations:(id)a2 error:(id *)a3;

@end
