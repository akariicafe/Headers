@class VKAnalyticsProcessor, NSArray, VKImageAnalyzerMadInterface, NSObject;
@protocol OS_dispatch_queue, VKAnalyzerAnalyticsDelegate;

@interface VKCImageAnalyzer : NSObject

@property (class, readonly, nonatomic) BOOL deviceSupportsImageAnalysis;
@property (class, readonly, nonatomic) unsigned long long supportedAnalysisTypes;
@property (class, readonly, nonatomic) NSArray *supportedRecognitionLanguages;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *realCallbackQueue;
@property (retain, nonatomic) VKImageAnalyzerMadInterface *mad;
@property (weak, nonatomic) id<VKAnalyzerAnalyticsDelegate> _analyticsDelegate;
@property (retain, nonatomic) VKAnalyticsProcessor *analyticsProcessor;
@property (nonatomic) BOOL _isPublicAPI;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL createFeedbackProviders;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)cancelRequestID:(int)a0;
- (int)processRequest:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_forceInProcessAnalysis;
- (int)_processRequest:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)processRequest:(id)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)statusForRequestID:(int)a0;
- (void)updateForLiveTextSupport;

@end
