@class JSValue;
@protocol WBSJSCallbackHandlerErrorReporter;

@interface WBSJSCallbackHandler : NSObject {
    struct OpaqueJSValue { } *_callbackFunction;
    struct OpaqueJSValue { } *_rejectFunction;
    id<WBSJSCallbackHandlerErrorReporter> _errorReporter;
    struct JSRetainPtr<OpaqueJSContext *> { struct OpaqueJSContext *m_ptr; } _globalContext;
}

@property (readonly, nonatomic) struct OpaqueJSContext { } *globalContext;
@property (readonly, nonatomic) JSValue *jsValue;

- (void)dealloc;
- (id).cxx_construct;
- (id)call;
- (void).cxx_destruct;
- (id)callWithArgument:(id)a0;
- (id)callWithArgument:(id)a0 argument:(id)a1;
- (id)callWithArgument:(id)a0 argument:(id)a1 argument:(id)a2;
- (id)initWithCallbackFunction:(struct OpaqueJSValue { } *)a0 errorReporter:(id)a1 context:(struct OpaqueJSContext { } *)a2;
- (id)initWithErrorReporter:(id)a0 context:(struct OpaqueJSContext { } *)a1;
- (id)initWithPromiseResolveFunction:(struct OpaqueJSValue { } *)a0 rejectFunction:(struct OpaqueJSValue { } *)a1 context:(struct OpaqueJSContext { } *)a2;
- (void)reportErrorWithMessage:(id)a0;

@end
