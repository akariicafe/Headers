@class SUPlayerStatus, NSString, UITapGestureRecognizer, SUUILayoutCache, IKAppDocument, SUUIViewElementLayoutContext, SUUIHorizontalLockupView;

@interface SUUIPreviewOverlayViewController : SUUIViewController <SUUIItemStateCenterObserver, SUUIArtworkRequestDelegate, SUUILayoutCacheDelegate, UIGestureRecognizerDelegate> {
    IKAppDocument *_document;
    SUUILayoutCache *_layoutCache;
    SUUIViewElementLayoutContext *_layoutContext;
    SUUIHorizontalLockupView *_lockupView;
    SUPlayerStatus *_previewStatus;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic) long long backgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)_tapAction:(id)a0;
- (id)initWithDocument:(id)a0;
- (id)_layoutCache;
- (double)_overlayWidth;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)documentDidUpdate:(id)a0;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (void)prepareOverlayView;
- (void)reloadOverlayView;
- (void)showPreviewProgressWithStatus:(id)a0 animated:(BOOL)a1;

@end
