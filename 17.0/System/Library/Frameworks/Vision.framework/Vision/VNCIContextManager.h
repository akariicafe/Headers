@class VNCIContextsHandler, NSMutableDictionary;

@interface VNCIContextManager : NSObject {
    VNCIContextsHandler *_cpuContextsHandler;
    NSMutableDictionary *_gpuContextsHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _gpuHandlersLock;
    unsigned long long _maxContextsCount;
}

- (id)init;
- (void).cxx_destruct;

@end
