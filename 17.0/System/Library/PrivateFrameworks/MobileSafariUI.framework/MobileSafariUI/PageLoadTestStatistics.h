@class WKNavigation, NSTimer, NSDate, NSError;

@interface PageLoadTestStatistics : NSObject {
    long long _framesToLoad;
    long long _onloadEventsHandled;
    BOOL _pendingResourceLoad;
    NSTimer *_waitForNewPageLoadEventsTimer;
    NSTimer *_pageLoadingTimeoutTimer;
}

@property (retain, nonatomic) WKNavigation *navigation;
@property (retain, nonatomic) NSDate *firstVisualLayoutDate;
@property (retain, nonatomic) NSDate *loadStartDate;
@property (retain, nonatomic) NSDate *lastOnloadEventDate;
@property (retain, nonatomic) NSDate *mainFrameLoadDate;
@property (retain, nonatomic) NSDate *lastResourceLoadDate;
@property (retain, nonatomic) NSDate *lastPageLoadEventDate;
@property (retain, nonatomic) NSDate *domContentLoadedDate;
@property (retain, nonatomic) NSDate *firstMeaningfulPaintDate;
@property (retain, nonatomic) NSDate *allSubresourcesLoadedDate;
@property (retain, nonatomic) NSError *loadError;
@property (copy, nonatomic) id /* block */ callbackBlock;
@property (nonatomic) unsigned long long memoryBeforeWarning;
@property (nonatomic) unsigned long long memoryAfterWarning;
@property (nonatomic) double pageLoadingTimeoutInterval;

+ (void)setRestInterval:(double)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;
- (void)startedPageLoad;
- (void)_cancelPageLoadingTimeoutTimerIfNeeded;
- (void)_cancelWaitForNewPageLoadEventsTimer;
- (void)_maybePageLoadFinishedForTests;
- (BOOL)_pageLoadEventsAreStillPending;
- (void)_pageLoadFinishedForTests;
- (void)_pageLoadTimeoutTimerFired:(id)a0;
- (void)_scheduleWaitForNewPageLoadEventsTimer;
- (void)_waitForNewPageLoadEventsTimerFired:(id)a0;
- (void)failedNavigation:(id)a0 withError:(id)a1;
- (void)finishedFirstVisualLayout;
- (void)finishedLoadingResources;
- (void)finishedNavigation:(id)a0;
- (void)handledOnloadEvents;
- (void)pageLoadFinishedForTestsWK2WithLoadData:(id)a0;
- (void)startedLoadingResources;
- (void)startedNavigation:(id)a0;

@end
