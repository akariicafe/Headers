@class SSPromise, NSObject;
@protocol OS_dispatch_queue;

@interface SSUniqueExecutionQueue : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callBlockQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (retain, nonatomic) SSPromise *promise;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue;

- (id)initWithBlock:(id /* block */)a0;
- (void)addCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
