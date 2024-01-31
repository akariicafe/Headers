@class NSString, NSTimer, NSMutableDictionary, NSMutableSet, WKWebProcessPlugInBrowserContextController;
@protocol PageLoadTestEventsListener;

@interface MeasurementControllerBase : NSObject <WKWebProcessPlugInLoadDelegate> {
    NSTimer *_waitForLoadToReallyEnd;
    NSMutableDictionary *_loadData;
    BOOL _currentPageLoadFinished;
    struct set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { struct __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned long long>> { unsigned long long __value_; } __pair3_; } __tree_; } _loadingSubresources;
    NSMutableSet *_loadingFrames;
    WKWebProcessPlugInBrowserContextController *_contextController;
    id<PageLoadTestEventsListener> _pageLoadTestEventsProxy;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) double allSubresourcesFinishedLoadingDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didInitiateLoadForResource:(unsigned long long)a2 request:(id)a3;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFailLoadWithErrorForFrame:(id)a1 error:(id)a2;
- (void)webProcessPlugInBrowserContextController:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (id).cxx_construct;
- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didFinishLoadForResource:(unsigned long long)a2;
- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didFailLoadForResource:(unsigned long long)a2 error:(id)a3;
- (void)webProcessPlugInBrowserContextController:(id)a0 didHandleOnloadEventsForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFirstVisuallyNonEmptyLayoutForFrame:(id)a1;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)_clearPageLoadState;
- (void)_doAfterPageLoad;
- (void)_doBeforePageLoad;
- (void)_maybeEndPageLoadSoon;
- (void)_postPageLoadEnd;
- (void)_resourceLoadCompleted:(unsigned long long)a0;
- (void)_sendPageLoadFinishedEvent;
- (BOOL)_shouldConsiderPageLoadEnded;
- (void)_waitforLoadEndTimerFired:(id)a0;
- (id)initWithPluginPageContextController:(id)a0;

@end
