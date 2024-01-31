@class AMSPageRenderMetricsEvent, AMSMetrics;
@protocol AMSBagProtocol;

@interface AMSPageRenderMetricsPresenter : NSObject

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSMetrics *metrics;
@property (retain, nonatomic) AMSPageRenderMetricsEvent *pageRenderEvent;

- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)endWithActivity:(long long)a0 pageMetrics:(id)a1;
- (void)enqueueEvent;
- (id)initWithBag:(id)a0 metrics:(id)a1;
- (void)startWithActivity:(long long)a0;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
