@class NSURL, IKJSWeakMap, IKJSViewModelService, IKJSInspectorController, NSObject, IKViewElementRegistry, IKJSArrayBufferStore, NSMutableArray, NSString, IKJSApplication, IKAppReloadContext, JSContext, NSNumber, IKJSFoundation, NSError, IKAppCache;
@protocol IKAppContextDelegate, IKAppScriptFallbackHandler, OS_dispatch_source, IKApplication;

@interface IKAppContext : NSObject <ISURLOperationDelegate, IKAppCacheDelegate, IKJSInspectorControllerDelegate> {
    IKJSArrayBufferStore *_arrayBufferStore;
    struct __CFRunLoop { } *_jsThreadRunLoop;
    struct __CFRunLoopSource { } *_jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
    BOOL _respondsToTraitCollection;
    BOOL _isAirplaneModeEnabled;
    struct { BOOL respondsToHighlightViewForOneElement; BOOL respondsToHighlightViewsForManyElements; BOOL respondsToCancelHighlightForAppContext; BOOL respondsToDidInspectElementModeChanged; } _delegateFlags;
}

@property (readonly, nonatomic) IKAppCache *appCache;
@property (copy, nonatomic) NSString *nextJSChecksum;
@property (readonly, nonatomic) NSMutableArray *onStartQueue;
@property (nonatomic, getter=isTrusted) BOOL trusted;
@property (nonatomic) BOOL canAccessPendingQueue;
@property (copy, nonatomic) NSString *responseScript;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) IKAppReloadContext *reloadContext;
@property (getter=isRunning) BOOL running;
@property (retain, nonatomic) NSMutableArray *pendingQueue;
@property (readonly, copy, nonatomic) NSURL *resolvedBootURL;
@property (retain, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) NSMutableArray *postEvaluationBlocks;
@property (retain, nonatomic) IKJSApplication *jsApp;
@property (retain, nonatomic) IKJSFoundation *jsFoundation;
@property (retain, nonatomic) IKJSWeakMap *jsWeakMap;
@property (retain, nonatomic) IKJSViewModelService *jsViewModelService;
@property BOOL isValid;
@property (nonatomic, getter=isPrivileged) BOOL privileged;
@property (readonly, nonatomic) IKViewElementRegistry *viewElementRegistry;
@property (readonly, nonatomic) BOOL appUsesDefaultStyleSheets;
@property (retain, nonatomic) IKJSInspectorController *webInspectorController;
@property (readonly, weak, nonatomic) id<IKApplication> app;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, weak, nonatomic) id<IKAppContextDelegate> delegate;
@property (nonatomic) BOOL remoteInspectionEnabled;
@property (nonatomic) BOOL mescalPrimeEnabledForXHRRequests;
@property (nonatomic) BOOL canRequireSystemTrustForXHRs;
@property (retain, nonatomic) id<IKAppScriptFallbackHandler> appScriptFallbackHandler;
@property (nonatomic) double appScriptTimeoutInterval;
@property (readonly, nonatomic) IKJSArrayBufferStore *arrayBufferStore;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInFactoryMode;
+ (id)currentAppContext;
+ (void)registerPrivateProtocols:(id)a0 forClass:(Class)a1;

- (void)reload;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)evaluate:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)evaluateDelegateBlockSync:(id /* block */)a0;
- (id)initWithApplication:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (void)resumeWithOptions:(id)a0;
- (void)setException:(id)a0 withErrorMessage:(id)a1;
- (void)suspendWithOptions:(id)a0;
- (void)_dispatchError:(id)a0;
- (void)unregisterLoaderWithIdentifier:(id)a0;
- (void)_stopAndReload:(BOOL)a0;
- (void)appCache:(id)a0 didUpdateWithChecksum:(id)a1;
- (void)inspectElement:(id)a0;
- (void)_addStopRecordToPendingQueueWithReload:(BOOL)a0;
- (id)_appTraitCollection;
- (void)_doEvaluate:(id /* block */)a0;
- (void)_drainOnStartQueue;
- (void)_enqueueOnStartOrExecute:(id /* block */)a0;
- (id)_errorWithMessage:(id)a0;
- (void)_evaluate:(id /* block */)a0;
- (void)_evaluateFoundationWithDeviceConfig:(id)a0 addPrivateInterfaces:(BOOL)a1;
- (void)_invalidateJSThread;
- (void)_jsThreadMain;
- (void)_networkPropertiesChanged:(id)a0;
- (id)_preferredLaunchURL;
- (BOOL)_prepareStartWithURL:(id)a0;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_startWithScript:(id)a0 scriptUrl:(id)a1 wasLoadedFromFallback:(BOOL)a2;
- (void)_startWithURL:(id)a0 urlTrusted:(BOOL)a1;
- (void)addPostEvaluateBlock:(id /* block */)a0;
- (void)appTraitCollectionChanged:(id)a0;
- (BOOL)cancelHighlightView;
- (void)contextDidFailWithError:(id)a0;
- (void)contextDidStartWithJS:(id)a0 options:(id)a1;
- (void)contextDidStopWithOptions:(id)a0;
- (void)evaluateFoundationJS;
- (void)exitAppWithOptions:(id)a0;
- (void)handleCacheUpdate;
- (void)handleReloadWithUrgencyType:(unsigned long long)a0 minInterval:(double)a1 data:(id)a2;
- (BOOL)highlightViewForElementWithID:(long long)a0 contentColor:(id)a1 paddingColor:(id)a2 borderColor:(id)a3 marginColor:(id)a4;
- (BOOL)highlightViewsForElementsWithIDs:(id)a0 contentColor:(id)a1 paddingColor:(id)a2 borderColor:(id)a3 marginColor:(id)a4;
- (id)initWithApplication:(id)a0 mode:(unsigned long long)a1 cache:(BOOL)a2 delegate:(id)a3;
- (void)inspectElementModeChanged:(BOOL)a0;
- (BOOL)isInspectElementModeEnabled;
- (void)launchAppWithOptions:(id)a0;
- (void)openURLWithOptions:(id)a0;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)registerLoaderWithIdentifier:(id)a0;
- (void)resetFoundationJS;
- (BOOL)validateDOMDocument:(id)a0 error:(id *)a1;
- (void)willPerformXhrRequest:(id)a0;

@end
