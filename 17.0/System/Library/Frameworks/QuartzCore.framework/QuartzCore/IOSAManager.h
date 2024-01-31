@interface IOSAManager : NSObject {
    struct __CFRunLoop { } *_msr_runloop;
    struct __CFRunLoopSource { } *_msr_runloop_source;
}

@property (readonly, nonatomic) struct __IOSurfaceAccelerator { } *msr;

- (void)dealloc;
- (id)initWithRunloop:(struct __CFRunLoop { } *)a0;

@end
