@class NSObject, VCPHomeKitAnalysisSession;
@protocol OS_dispatch_queue;

@interface HMIVideoAnalyzerClient : HMIVideoAnalyzer {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property BOOL hasFailed;
@property BOOL sessionCreationAttempted;
@property (retain) VCPHomeKitAnalysisSession *session;

- (void)dealloc;
- (void)flush;
- (void).cxx_destruct;
- (void)cancel;
- (void)_didFailWithError:(id)a0;
- (void)flushAsync;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)setAnalysisFPS:(double)a0;
- (void)_sendMessage:(SEL)a0 arguments:(id)a1 asynchronous:(BOOL)a2;
- (void)_sendMessage:(SEL)a0 arguments:(id)a1 asynchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_sendMessageWithOptions:(id)a0 asynchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)ensureSession;
- (void)handleAssetData:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleMessageWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1;
- (void)setEncode:(BOOL)a0;
- (void)setMonitored:(BOOL)a0;

@end
