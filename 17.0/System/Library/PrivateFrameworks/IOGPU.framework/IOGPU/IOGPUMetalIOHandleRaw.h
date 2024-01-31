@class IOGPUMetalDevice;
@protocol MTLDevice;

@interface IOGPUMetalIOHandleRaw : _MTLIOHandleRaw {
    IOGPUMetalDevice<MTLDevice> *_dev;
    unsigned long long _globalTraceObjectID;
}

@property (readonly) unsigned int vnioID;

- (unsigned long long)globalTraceObjectID;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 path:(const char *)a1 error:(id *)a2 uncached:(BOOL)a3;

@end
