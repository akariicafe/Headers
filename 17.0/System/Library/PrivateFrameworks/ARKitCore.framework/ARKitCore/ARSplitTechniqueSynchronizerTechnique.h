@class ARCircularArray, NSSet, NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARSplitTechniqueSynchronizerTechnique : ARTechnique <ARTechniqueDelegate> {
    NSMutableArray *_lastReceivedResults;
    NSObject<OS_dispatch_semaphore> *_lastReceivedResultsSemaphore;
    ARCircularArray *_contextsWaitingForSynchronizationData;
    NSMutableDictionary *_pendingResults;
}

@property (readonly, nonatomic) NSSet *synchronizedResultDataClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_recursivelyGatherData:(id)a0 fromContext:(id)a1;
- (id)initWithSynchronizedResultDataClasses:(id)a0;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)technique:(id)a0 didFailWithError:(id)a1;
- (void)technique:(id)a0 didOutputResultData:(id)a1 timestamp:(double)a2 context:(id)a3;

@end
