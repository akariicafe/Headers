@class NSURL, PKPrintSettings, NSMutableDictionary, UIPrintFormatter, NSObject, UIWindow, UIWindowScene, PKPrinter, UIPrintPaper, UIPrintPageRenderer, NSSet, NSString, NSMutableSet, NSOperationQueue, UIPrintPanelViewController, NSArray, UIPrintingProgress, UIPrintInfo;
@protocol UIPrintInteractionControllerActivityDelegate, UIPrintInteractionControllerDelegate;

@interface UIPrintInteractionController : NSObject <UIPrintPagesControllerDelegate> {
    unsigned long long _backgroundTaskIdentifier;
    NSOperationQueue *_previewQueue;
    id _temporaryRetainCycle;
    long long _currentRenderingQuality;
    UIWindow *_alertWindow;
    NSURL *_nupFileURL;
}

@property (class, readonly, nonatomic, getter=isPrintingAvailable) BOOL printingAvailable;
@property (class, readonly, nonatomic) NSSet *printableUTIs;
@property (class, readonly, nonatomic) UIPrintInteractionController *sharedPrintController;

@property (copy) id /* block */ _completionHandler;
@property BOOL printStateActive;
@property long long pageCount;
@property (retain) NSArray *pageRanges;
@property (retain, nonatomic) PKPrinter *printer;
@property (retain, nonatomic) UIWindowScene *hostingWindowScene;
@property long long pageCountWithRanges;
@property (retain) NSMutableSet *previewStates;
@property (retain) NSURL *tempPreviewFileURL;
@property (retain) NSObject *renderThumbnailMutex;
@property long long currentPage;
@property struct _NSRange { unsigned long long location; unsigned long long length; } currentRange;
@property long long pagesDrawn;
@property (retain) UIPrintPanelViewController *printPanelViewController;
@property (retain) UIPrintingProgress *printingProgress;
@property (retain) PKPrintSettings *printSettings;
@property (retain) UIPrintInfo *activePrintInfo;
@property int printerInfoState;
@property BOOL supressNotifyDismissed;
@property (retain) UIPrintPageRenderer *formatterRenderer;
@property BOOL manualPrintPageEnabled;
@property (retain) NSURL *saveFileURL;
@property BOOL showPrintingProgress;
@property (retain) NSString *pdfPassword;
@property (retain) NSMutableDictionary *convertedPrintableItems;
@property BOOL usingWebKitFormatter;
@property (retain) NSObject *webKitFormatterMutex;
@property (retain, nonatomic) UIPrintPaper *paper;
@property (nonatomic) BOOL isContentManaged;
@property (weak, nonatomic) id<UIPrintInteractionControllerActivityDelegate> printActivityDelegate;
@property (nonatomic) BOOL showsScalingFactor;
@property (nonatomic) BOOL preventPDFCreation;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (weak, nonatomic) id<UIPrintInteractionControllerDelegate> delegate;
@property (nonatomic) BOOL showsPageRange;
@property (nonatomic) BOOL showsNumberOfCopies;
@property (nonatomic) BOOL showsPaperSelectionForLoadedPapers;
@property (nonatomic) BOOL showsPaperOrientation;
@property (readonly, nonatomic) UIPrintPaper *printPaper;
@property (retain, nonatomic) UIPrintPageRenderer *printPageRenderer;
@property (retain, nonatomic) UIPrintFormatter *printFormatter;
@property (copy, nonatomic) id printingItem;
@property (copy, nonatomic) NSArray *printingItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPrintData:(id)a0;
+ (BOOL)canPrintURL:(id)a0;

- (struct CGSize { double x0; double x1; })_printablePDFURLSize:(id)a0;
- (id)init;
- (void)updatePrintingItems;
- (struct CGContext { } *)_newSaveContext:(id)a0 withMediaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_tempFilePath;
- (void)dealloc;
- (void)_manualPrintPage;
- (id)_createDocInfoDict;
- (BOOL)_pageRendererAvailable;
- (BOOL)_setupPrintPanel:(id /* block */)a0;
- (id)_newPDFURLWithPath:(id)a0 isContentManaged:(BOOL)a1;
- (double)_getCutLengthFromDelegateForPaper:(id)a0;
- (BOOL)_printingItemIsReallyTallPDF;
- (void)_generatePrintPreview:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mediaRect;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_fullPagesRange;
- (id)_printingItemPrintablePDFURL;
- (BOOL)presentAnimated:(BOOL)a0 hostingScene:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissAnimated:(BOOL)a0;
- (void)_startPrinting;
- (id)redrawPDFwithPageRange:(id)a0;
- (BOOL)savePDFToURL:(id)a0 showProgress:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_updatePrintPaper;
- (BOOL)_canPrintPDFData:(id)a0;
- (void)_printPanelWillDismissWithAction:(long long)a0;
- (BOOL)_presentAnimated:(BOOL)a0 hostingScene:(id)a1 completionHandler:(id /* block */)a2;
- (id)rendererToUse;
- (id)_printPageRenderer:(id)a0;
- (void)removeFileAtURL:(id)a0;
- (BOOL)presentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)createWebKitPDFForAllPages;
- (void)_updatePrintInfoWithAnnotations;
- (BOOL)_canPrintPDFURL:(id)a0;
- (void)_printPage;
- (void)_drawPrintItem:(id)a0 toContext:(struct CGContext { } *)a1 printAllPages:(BOOL)a2;
- (BOOL)_canShowAnnotations;
- (void)_ensurePDFIsUnlockedFirstAttempt:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)presentFromBarButtonItem:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isPageCancelled:(id)a0;
- (void)recalculateWebKitPageCount;
- (BOOL)_setupPrintPanel:(id /* block */)a0 forPDFGenerationOnly:(BOOL)a1;
- (id)getPrintingItemForPageNum:(long long)a0 pdfItemPageNum:(long long *)a1;
- (void)_updateRendererWithQuality:(long long)a0;
- (void)_printItemAsync:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)presentAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_completePrintPageWithError:(id)a0;
- (BOOL)_canShowScaling;
- (void).cxx_destruct;
- (void)_cancelAllPreviewGeneration;
- (BOOL)_canShowLayout;
- (void)_cleanPrintState;
- (id)_convertToPrintableItem:(id)a0;
- (id)_currentPrintInfo;
- (BOOL)_canShowCopies;
- (BOOL)needRedrawWithNUp;
- (BOOL)_canShowPreview;
- (void)_generatePDFWithCompletionHandler:(id /* block */)a0;
- (id)_paperForPDFItem:(id)a0 withDuplexMode:(long long)a1;
- (BOOL)_canShowOrientation;
- (long long)numberOfPages;
- (void)_printPanelDidDismissWithAction:(long long)a0;
- (id)_paperForContentType:(long long)a0;
- (void)_printPanelDidPresent;
- (void)_setPrinterInfoState:(int)a0;
- (BOOL)savePDFToURL:(id)a0 showProgress:(BOOL)a1 hostingScene:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_canShowPaperList;
- (void)_addPDFWithData:(id)a0 toContext:(struct CGContext { } *)a1 addAllPages:(BOOL)a2;
- (BOOL)_canShowPageRange;
- (struct CGSize { double x0; double x1; })paperSizeForPageNum:(long long)a0;
- (void)_cancelManualPrintPage;
- (void)_updateCutterBehavior;
- (BOOL)_canPreviewContent;
- (void)drawImageForPageNum:(long long)a0 toContext:(struct CGContext { } *)a1 sheetSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)printToPrinter:(id)a0 completionHandler:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })_printItemContentSize;
- (id)drawPagesWithPreviewState:(id)a0;
- (BOOL)_canShowColor;
- (void)_updatePageCount;
- (void)_enableManualPrintPage:(BOOL)a0;
- (void)_generatePDFWithNupForPrintingCompletion:(id /* block */)a0;
- (void)_printPageWithDelay:(double)a0;
- (void)_cancelPreviewQueue:(BOOL)a0 completionHandler:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })_printItemContentSize:(id)a0;
- (BOOL)_canShowDuplex;
- (void)drawImage:(id)a0 toContext:(struct CGContext { } *)a1 sheetSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_canShowPunch;
- (id)_getChosenPaperFromDelegateForPaperList:(id)a0;
- (struct CGSize { double x0; double x1; })_printablePDFDataSize:(id)a0;
- (void)_preparePrintInfo;
- (BOOL)_canShowStaple;
- (void)_endPrintJobWithAction:(long long)a0 error:(id)a1;
- (BOOL)savePDFToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
