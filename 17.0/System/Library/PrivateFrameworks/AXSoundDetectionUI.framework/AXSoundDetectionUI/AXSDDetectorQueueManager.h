@class NSString, NSMutableSet;
@protocol AXSDDetectorQueueManagerDelegate;

@interface AXSDDetectorQueueManager : NSObject <AXSDDetectorStoreDelegate>

@property BOOL ready;
@property (retain, nonatomic) NSMutableSet *detectorQueue;
@property (weak, nonatomic) id<AXSDDetectorQueueManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)stopListening;
- (void)detectorsReadyForDetectorStore:(id)a0;
- (void)removeDetector:(id)a0;
- (BOOL)prepareToListen;
- (void)_dequeueListenType:(id)a0;
- (void)_queueListenType:(id)a0;
- (void)addDetector:(id)a0;
- (void)addListenType:(id)a0;
- (id)currentDetectionTypes;
- (void)detectorStore:(id)a0 detectorsNeedUpdate:(id)a1 toDetectors:(id)a2;
- (void)removeAllListenTypes;
- (void)removeListenType:(id)a0;

@end
