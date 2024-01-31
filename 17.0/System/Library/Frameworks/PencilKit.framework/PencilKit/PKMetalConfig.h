@class PKMetalResourceHandler, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PKMetalConfig : NSObject {
    BOOL _privateResourceHandler;
    PKMetalResourceHandler *_resourceHandler;
    NSObject<OS_dispatch_queue> *_renderQueue;
    id<MTLDevice> _device;
}

- (id)init;
- (void).cxx_destruct;

@end
