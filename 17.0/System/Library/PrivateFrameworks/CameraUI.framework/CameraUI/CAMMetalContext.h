@protocol MTLCommandQueue, MTLDevice;

@interface CAMMetalContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;

- (id)init;
- (void).cxx_destruct;

@end
