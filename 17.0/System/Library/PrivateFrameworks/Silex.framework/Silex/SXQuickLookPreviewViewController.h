@class NSString, SXQuickLookTransitionContext, SXQuickLookFile;

@interface SXQuickLookPreviewViewController : QLPreviewController <QLPreviewControllerDelegate, QLPreviewControllerDataSource>

@property (readonly, nonatomic) SXQuickLookFile *file;
@property (readonly, nonatomic) SXQuickLookTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)initWithFile:(id)a0 transitionContext:(id)a1;

@end
