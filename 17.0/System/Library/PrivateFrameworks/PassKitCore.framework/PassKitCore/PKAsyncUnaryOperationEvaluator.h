@class NSString, NSMutableArray, PKAsyncOperationState;

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_operations;
    _Atomic BOOL _crashed;
    id _value;
    id /* block */ _completion;
    BOOL _started;
    BOOL _escaped;
    BOOL _canceled;
    PKAsyncOperationState *_runningOperationState;
}

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)cancelable;
- (BOOL)_performOperation;
- (void).cxx_destruct;
- (id)_initWithOperations:(id)a0 input:(id)a1;
- (void)cancel;
- (id)evaluateWithCompletion:(id /* block */)a0;

@end
