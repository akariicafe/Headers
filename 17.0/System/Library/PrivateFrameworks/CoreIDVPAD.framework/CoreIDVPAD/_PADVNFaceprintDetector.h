@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _PADVNFaceprintDetector : PADVNSerialRequestsScheduler <PADVNFaceprintDetector> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completion;
    unsigned long long _setSize;
}

@property (retain, nonatomic) NSMutableArray *faceprints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)analyzeObservationComposite:(id)a0;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)analyzeObservationCompositeSet:(id)a0;
- (void)handleObservationCompositeError:(id)a0;
- (unsigned long long)observationCompositeSetSize;
- (void)processFrames:(id)a0 completion:(id /* block */)a1;

@end
