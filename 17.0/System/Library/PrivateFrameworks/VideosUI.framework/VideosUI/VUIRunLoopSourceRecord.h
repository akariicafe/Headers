@class NSObject;
@protocol OS_dispatch_queue;

@interface VUIRunLoopSourceRecord : NSObject

@property (copy, nonatomic) id /* block */ evaluateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (void).cxx_destruct;
- (id)initWithEvaluateBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)initWithEvaluateBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 completionQueue:(id)a2;

@end
