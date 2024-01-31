@protocol MTLCommandQueue, MTLDevice, MTLCommandQueueSPI;

@interface BWMetalInferenceContext : NSObject {
    BOOL _prepared;
    id<MTLCommandQueueSPI> _commandQueueSPI;
}

@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLDevice> device;

- (void)dealloc;
- (id)initWithScheduler:(id)a0 priority:(unsigned int)a1;

@end
