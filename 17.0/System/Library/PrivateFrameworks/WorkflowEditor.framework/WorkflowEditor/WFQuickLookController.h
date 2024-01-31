@class NSTimer, NSMutableIndexSet;

@interface WFQuickLookController : QLPreviewController <WFQuickLookRefreshing>

@property (retain, nonatomic) NSMutableIndexSet *indexesPendingRefresh;
@property (retain, nonatomic) NSTimer *indexTimer;
@property (nonatomic) long long lastIndex;
@property (nonatomic, getter=isEmbedded) BOOL embedded;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_updateAppearance:(BOOL)a0;
- (id)activityItemForDocumentInteractionController:(id)a0;
- (void)updateCurrentIndex;
- (void)wf_refreshPreviewItemAtIndex:(long long)a0;

@end
