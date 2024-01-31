@class NSArray, DTGPUAPSConfig, NSObject, NSLock;
@protocol OS_dispatch_source, GPURawCounterSource, OS_dispatch_queue, GPURawCounterSourceGroup;

@interface DTGPUAPSCounterSource : NSObject <DTGPUAGXCounterSourceProtocol> {
    NSObject<OS_dispatch_queue> *_pullQueue;
    NSObject<OS_dispatch_source> *_pullTimer;
    NSLock *_pullLock;
    struct vector<std::vector<unsigned char>, std::allocator<std::vector<unsigned char>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<unsigned char> *, std::allocator<std::vector<unsigned char>>> { void *__value_; } __end_cap_; } _counterBuffers;
    DTGPUAPSConfig *_apsConfig;
    unsigned long long _profile;
}

@property (readonly, nonatomic) id<GPURawCounterSource> source;
@property (readonly, nonatomic) id<GPURawCounterSourceGroup> sourceGroup;
@property (readonly, nonatomic) unsigned int sourceIndex;
@property (readonly, nonatomic) NSArray *selects;
@property (readonly, nonatomic) DTGPUAPSConfig *apsConfig;

- (void)dealloc;
- (id).cxx_construct;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 sourceGroup:(id)a1 selects:(id)a2 sourceIndex:(unsigned int)a3 profile:(unsigned long long)a4;
- (void)pullAndDrainCounters;
- (BOOL)request:(unsigned long long)a0 vendorFeatures:(id)a1;
- (void)sampleAPS:(id /* block */)a0;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;

@end
