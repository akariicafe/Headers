@class NSArray, NSLock, NSObject;
@protocol OS_dispatch_source, GPURawCounterSource, OS_dispatch_queue, GPURawCounterSourceGroup;

@interface DTGPUAGXCounterSource : NSObject <DTGPUAGXCounterSourceProtocol> {
    NSObject<OS_dispatch_queue> *_pullQueue;
    NSObject<OS_dispatch_source> *_pullTimer;
    NSLock *_pullLock;
    struct vector<std::vector<unsigned char>, std::allocator<std::vector<unsigned char>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<unsigned char> *, std::allocator<std::vector<unsigned char>>> { void *__value_; } __end_cap_; } _counterBuffers;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _tmpOutBuffer;
}

@property (readonly, nonatomic) id<GPURawCounterSource> source;
@property (readonly, nonatomic) id<GPURawCounterSourceGroup> sourceGroup;
@property (readonly, nonatomic) unsigned int sourceIndex;
@property (readonly, nonatomic) NSArray *selects;

- (void)dealloc;
- (id).cxx_construct;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 sourceGroup:(id)a1 selects:(id)a2 sourceIndex:(unsigned int)a3;
- (void)pullAndDrainCounters;
- (BOOL)request:(unsigned long long)a0 vendorFeatures:(id)a1;
- (void)sampleAPS:(id /* block */)a0;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;

@end
