@class NSString, _WKRemoteObjectInterface, EFCancelationToken, EFLocked, ECWebContentObserver, NSObject, NSMutableArray, WKWebView;
@protocol OS_os_log, EFScheduler;

@interface EDWebContentParser : NSObject <ECWebContentObserver, WKNavigationDelegate, EFSignpostable, WKScriptMessageHandler> {
    _WKRemoteObjectInterface *_webContentObserverInterface;
    ECWebContentObserver *_webContentObserver;
    EFCancelationToken *_token;
    EFLocked *_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteContentParserLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contentRuleListsLock;
    NSMutableArray *_currentContentRuleLists;
    BOOL _contentRuleListsNeedUpdate;
    EFCancelationToken *_contentRuleListsObservationToken;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL isDataDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)test_tearDown;
- (id)webViewConfiguration;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)initWithOptions:(unsigned long long)a0 cancelationToken:(id)a1;
- (void)parseHTMLData:(id)a0 withOptions:(unsigned long long)a1 characterEncodingName:(id)a2 forMessage:(id)a3 withSubject:(id)a4 completionHandler:(id /* block */)a5;
- (void)_addRemoteContentWebViewObserver;
- (id)_checkHTMLDataForOneTimeCodes:(id)a0 withSubject:(id)a1;
- (void)_disableDataDetection;
- (void)_enableDataDetection;
- (id)_extractDataDetectorResultsMetadata:(id)a0;
- (id)_getDataDetectionCategoryString:(int)a0;
- (id)_parseHTMLData:(id)a0 withOptions:(unsigned long long)a1 characterEncodingName:(id)a2 messageID:(id)a3;
- (void)_retrieveRichLinkMetadata:(id)a0;
- (id)_richLinkMetadataScript;
- (void)_updateContentRuleListsIfNeededForWebViewConfiguration:(id)a0;
- (void)baseURL:(id)a0 didRequestRemoteContentURLs:(id)a1;
- (void)contentRuleListManager:(id)a0 didAddRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didRemoveRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didUpdateContentRuleList:(id)a1 oldContentRuleList:(id)a2;
- (void)logWebBundleMessage:(id)a0;
- (void)receiveDataDetectionResults:(id)a0;
- (void)requestDataDetectionResultsWithBaseURL:(id)a0;

@end
