@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CFXCameraStreamBufferQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableArray *outputBuffers;
@property (nonatomic) unsigned long long maxCapacity;

- (id)dequeue;
- (BOOL)enqueue:(id)a0;
- (unsigned long long)count;
- (id)initWithMaxCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)headBufferTimestamp;

@end
