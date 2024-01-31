@class NSLock, WebScriptObject, SUScriptObject;

@interface SUScriptFunction : NSObject {
    WebScriptObject *_function;
    NSLock *_lock;
    SUScriptObject *_thisObject;
}

@property (retain) WebScriptObject *scriptObject;
@property (weak) id thisObject;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (BOOL)callWithArguments:(id)a0;
- (id)callSynchronouslyWithArguments:(id)a0;
- (id)_copyAdjustedArgumentsForArguments:(id)a0;
- (BOOL)callWithArguments:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithScriptObject:(id)a0;

@end
