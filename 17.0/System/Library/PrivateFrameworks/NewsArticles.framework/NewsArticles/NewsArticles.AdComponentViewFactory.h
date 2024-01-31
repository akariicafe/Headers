@class NSString;

@interface NewsArticles.AdComponentViewFactory : SXComponentViewFactory {
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ bannerAdFactory;
    void /* unknown type, empty encoding */ viewManager;
    void /* unknown type, empty encoding */ requestManager;
    void /* unknown type, empty encoding */ bannerAdRenderer;
    void /* unknown type, empty encoding */ integrator;
    void /* unknown type, empty encoding */ exposureMonitor;
    void /* unknown type, empty encoding */ journal;
    void /* unknown type, empty encoding */ trackerFactory;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3;

@end
