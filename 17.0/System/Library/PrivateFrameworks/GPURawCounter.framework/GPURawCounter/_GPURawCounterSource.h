@class NSString, NSDictionary;
@protocol GPURawCounterSourceGroup;

@interface _GPURawCounterSource : NSObject <GPURawCounterSource>

@property (readonly) NSString *name;
@property (readonly) id<GPURawCounterSourceGroup> sourceGroup;
@property (copy) NSDictionary *options;
@property (readonly, copy) NSDictionary *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)availableCounters;
- (BOOL)postProcessRawDataWithRingBufferIndex:(unsigned int)a0 source:(char *)a1 sourceSize:(unsigned long long)a2 sourceRead:(unsigned long long *)a3 sourceWrite:(unsigned long long)a4 output:(char *)a5 outputSize:(unsigned long long)a6 outputRead:(unsigned long long)a7 outputWrite:(unsigned long long *)a8 isLast:(BOOL)a9;
- (id)availableTriggers;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)a0 dataSize:(unsigned int)a1;
- (void)flushRingBuffers;
- (id)initWithSourceGroup:(id)a0 name:(id)a1;
- (BOOL)pollCountersAtBufferIndex:(unsigned int)a0 withBlock:(id /* block */)a1;
- (BOOL)postProcessRawDataWithRingBufferSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 sourceWrite:(unsigned long long)a3 output:(char *)a4 outputSize:(unsigned long long)a5 outputRead:(unsigned long long)a6 outputWrite:(unsigned long long *)a7 isLast:(BOOL)a8;
- (BOOL)postProcessRawDataWithSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 output:(char *)a3 outputSize:(unsigned long long)a4 outputWritten:(unsigned long long *)a5 isLast:(BOOL)a6;
- (BOOL)requestCounters:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (BOOL)requestTriggers:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (void)resetRawDataPostProcessor;
- (BOOL)ringBufferInfoAtIndex:(unsigned int)a0 base:(char **)a1 size:(unsigned int *)a2 dataOffset:(unsigned int *)a3 dataSize:(unsigned int *)a4;
- (unsigned int)ringBufferNum;
- (id)selectedCounters;
- (id)selectedTriggers;

@end
