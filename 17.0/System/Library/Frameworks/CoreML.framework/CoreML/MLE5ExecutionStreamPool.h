@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MLE5ExecutionStreamPool : NSObject

@property (readonly) NSMutableSet *pool;
@property (readonly, nonatomic) NSMutableSet *allStreams;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long modelSignpostId;

- (void)enableInstrumentsTracing;
- (void).cxx_destruct;
- (id)takeOut;
- (void)_emitMappingTracepointForStream:(id)a0;
- (id)initWithModelSignpostId:(unsigned long long)a0;
- (void)putBack:(id)a0;

@end
