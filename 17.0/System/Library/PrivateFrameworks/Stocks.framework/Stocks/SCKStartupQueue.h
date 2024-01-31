@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject

@property (retain, nonatomic) SCKAsyncSerialQueue *startupTaskQueue;

- (void)executeAfterStartup:(id /* block */)a0;
- (void)enqueueStartupBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDeferredStartup:(BOOL)a0;

@end
