@interface NewsArticles.AdComponentView : SXComponentView {
    void /* unknown type, empty encoding */ bannerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugView;
    void /* unknown type, empty encoding */ bannerAdFactory;
    void /* unknown type, empty encoding */ viewManager;
    void /* unknown type, empty encoding */ requestManager;
    void /* unknown type, empty encoding */ bannerAdRenderer;
    void /* unknown type, empty encoding */ integrator;
    void /* unknown type, empty encoding */ exposureMonitor;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ journal;
    void /* unknown type, empty encoding */ layoutAttributes;
}

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)receivedInfo:(id)a0 fromLayoutingPhaseWithIdentifier:(id)a1;
- (void)renderContents;
- (void)visibilityStateDidChangeFromState:(long long)a0;

@end
