@class UIPrintInfo, NSString, SFPrintPageRenderer, SFPrintQueueItem, NSMutableArray, _SFReaderController, UIPrintInteractionController, WKWebView;
@protocol SFDialogPresenting, _SFPrintControllerDelegate;

@interface _SFPrintController : NSObject <UIPrintInteractionControllerDelegate, SFPrintPageRendererDelegate> {
    UIPrintInfo *_cachedPrintInfo;
    SFPrintPageRenderer *_cachedPrintPageRenderer;
    NSString *_urlString;
    NSString *_pageTitle;
    NSString *_loadingDialogTitle;
    NSMutableArray *_printQueue;
    SFPrintQueueItem *_currentItem;
    BOOL _isDisplayingPrintInteractionController;
    BOOL _hasSetupPrintController;
    BOOL _suppressingPrintUI;
}

@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) _SFReaderController *readerController;
@property (weak, nonatomic) id<SFDialogPresenting> dialogPresenter;
@property (weak, nonatomic) id<_SFPrintControllerDelegate> delegate;
@property (readonly, nonatomic) SFPrintPageRenderer *printRenderer;
@property (readonly, nonatomic) UIPrintInfo *printInfo;
@property (readonly, nonatomic, getter=isDisplayingPrintUI) BOOL displayingPrintUI;
@property (readonly, nonatomic) NSString *suggestedPDFFileName;
@property (readonly, nonatomic) UIPrintInteractionController *printInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)preparePrintInteractionControllerForUsage:(long long)a0 completion:(id /* block */)a1;
- (void)_shouldPrintWhileLoadingForUsage:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_printCurrentItem;
- (BOOL)setUpPrintController;
- (id)_dequeuePrintItem;
- (void)_enqueuePrintItem:(id)a0;
- (void)resetPrintUISuppression;
- (id)presentingViewControllerForPrintPageRenderer:(id)a0;
- (void)printFrame:(id)a0 initiatedByWebContent:(BOOL)a1 completion:(id /* block */)a2;
- (void)updatePrintInfo;
- (void)clearQueue;
- (void).cxx_destruct;
- (void)getPDFDataForUsage:(long long)a0 withCompletion:(id /* block */)a1;
- (void)handleNextPrintRequest;
- (void)_shouldAllowBlockedPrintWithCompletionHandler:(id /* block */)a0;
- (void)_preparePrintInteractionControllerForUsage:(long long)a0 onlyIfLoaded:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_isContentManaged;
- (void)printInteractionControllerDidFinish;
- (void)dismissPrintInteractionControllerAnimated:(BOOL)a0;
- (id)printInteractionControllerParentViewController:(id)a0;
- (void)_didFinishPrintingCurrentItemWithResult:(long long)a0 fromPrintInteractionControllerCompletion:(BOOL)a1;

@end
