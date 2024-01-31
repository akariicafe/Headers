@interface NewsUI2.LinkActionActivityProvider : NSObject <SXActionActivityProvider> {
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ qualifier;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ linkedContentProvider;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ tracker;
}

- (id)activityGroupForAction:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)previewActivityForAction:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
