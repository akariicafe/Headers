@class NSString, JSValue;

@interface WBSWebExtensionAPIRuntimeBase : WBSWebExtensionAPIObject <WBSJSCallbackHandlerErrorReporter> {
    JSValue *_lastError;
    BOOL _lastErrorAccessed;
    BOOL _processingUserGesture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reportErrorForCallbackHandler:(id)a0 withMessage:(id)a1 context:(struct OpaqueJSContext { } *)a2;

@end
