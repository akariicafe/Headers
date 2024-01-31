@class NSMutableArray;

@interface SBAtomicObjectQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_data;
}

- (id)init;
- (id)dequeue;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;

@end
