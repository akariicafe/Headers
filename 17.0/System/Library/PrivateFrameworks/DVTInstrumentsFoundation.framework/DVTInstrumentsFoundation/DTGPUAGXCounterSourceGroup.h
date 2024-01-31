@class NSArray;
@protocol GPURawCounterSourceGroup;

@interface DTGPUAGXCounterSourceGroup : NSObject {
    id<GPURawCounterSourceGroup> _sourceGroup;
    NSArray *_selects;
}

@property (readonly, nonatomic) NSArray *sources;

- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithSourceGroup:(id)a0 selects:(id)a1 apsSelects:(id)a2 profile:(unsigned long long)a3;
- (BOOL)request:(unsigned long long)a0 vendorFeatures:(id)a1;
- (void)sampleAPS:(id /* block */)a0;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;

@end
