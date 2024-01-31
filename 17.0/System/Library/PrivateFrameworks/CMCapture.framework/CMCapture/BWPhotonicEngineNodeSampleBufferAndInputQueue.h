@class NSMutableArray;

@interface BWPhotonicEngineNodeSampleBufferAndInputQueue : NSObject {
    NSMutableArray *_sampleBufferAndInputQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sampleBufferAndInputQueueLock;
}

- (id)init;
- (void)dealloc;
- (void)enqueue:(id)a0;
- (id)newDequeuedSampleBufferAndInput;
- (id)newSampleBuffersAndInputsWithPredicate:(id)a0;

@end
