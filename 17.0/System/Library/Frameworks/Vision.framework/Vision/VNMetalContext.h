@class NSDictionary;
@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

@interface VNMetalContext : NSObject {
    id<MTLDevice> _device;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    NSDictionary *_wisdomParams;
}

- (void).cxx_destruct;

@end
