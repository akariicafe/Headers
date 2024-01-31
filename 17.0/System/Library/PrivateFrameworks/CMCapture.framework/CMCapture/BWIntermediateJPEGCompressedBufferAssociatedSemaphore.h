@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface BWIntermediateJPEGCompressedBufferAssociatedSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSString *_name;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pts;
}

- (void)dealloc;
- (id)initWithSemaphore:(id)a0 name:(id)a1 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
