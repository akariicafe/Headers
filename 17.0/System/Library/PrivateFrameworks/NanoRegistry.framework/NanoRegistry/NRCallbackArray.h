@class NSMutableArray;

@interface NRCallbackArray : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_callbacks;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id /* block */)a0;
- (void)sweepWithCollection:(id)a0;

@end
