@class NSString, ISStoreURLOperation, NSNumber, SUWebView;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {
    ISStoreURLOperation *_loadOperation;
    SUWebView *_webView;
}

@property (readonly, nonatomic) id windowScriptObject;
@property (readonly, nonatomic) struct OpaqueJSContext { } *globalExecutionContext;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_webView;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)callWebScriptMethod:(id)a0 withArguments:(id)a1;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)parentViewControllerForWebView:(id)a0;
- (void)_cancelLoadOperation;
- (id)_newLoadOperation;
- (BOOL)evaluateData:(id)a0 MIMEType:(id)a1 textEncodingName:(id)a2 baseURL:(id)a3;
- (void)evaluateScriptAtURL:(id)a0;
- (void)evaluateScriptWithURLBagKey:(id)a0;

@end
