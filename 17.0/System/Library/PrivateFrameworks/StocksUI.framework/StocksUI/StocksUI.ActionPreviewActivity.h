@interface StocksUI.ActionPreviewActivity : NSObject <SXActionPreviewActivity> {
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ linkedContentProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)previewViewControllerForAction:(id)a0;
- (void)commitViewController:(id)a0 action:(id)a1;

@end
