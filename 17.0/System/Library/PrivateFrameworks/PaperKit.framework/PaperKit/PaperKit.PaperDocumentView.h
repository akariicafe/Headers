@interface PaperKit.PaperDocumentView : UIView <VNDocumentCameraViewControllerDelegate, PDFPageOverlayViewProvider, PKToolPickerObserver, PDFDocumentDelegatePrivate, PDFViewDelegatePrivate, UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ editingMode;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ viewUUID;
    void /* unknown type, empty encoding */ pdfView;
    void /* unknown type, empty encoding */ viewControllerForPresenting;
    void /* unknown type, empty encoding */ thumbnailView;
    void /* unknown type, empty encoding */ pageOverlayViewProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataModelInitialState;
    void /* unknown type, empty encoding */ dataModel;
    void /* unknown type, empty encoding */ pdfDocument;
    void /* unknown type, empty encoding */ pageToOverlayMap;
    void /* unknown type, empty encoding */ tiledView;
    void /* unknown type, empty encoding */ isInMarkupMode;
    void /* unknown type, empty encoding */ vellumOpacity;
    void /* unknown type, empty encoding */ canEditVellumOpacity;
    void /* unknown type, empty encoding */ toolPicker;
    void /* unknown type, empty encoding */ paperDocumentVC;
    void /* unknown type, empty encoding */ automaticallyAdjustScaleFactor;
    void /* unknown type, empty encoding */ automaticallyApplySafeAreaInsetsToAxes;
    void /* unknown type, empty encoding */ passThroughSubject;
    void /* unknown type, empty encoding */ livePassThroughSubject;
    void /* unknown type, empty encoding */ isUpdatingPDFDocument;
    void /* unknown type, empty encoding */ updateDocAsset;
    void /* unknown type, empty encoding */ updateDocTask;
    void /* unknown type, empty encoding */ isCurrentlyLiveEditing;
    void /* unknown type, empty encoding */ liveEditingContinuations;
    void /* unknown type, empty encoding */ multipeerConnection;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ participantDetailsDataSource;
    void /* unknown type, empty encoding */ showParticipantCursors;
    void /* unknown type, empty encoding */ _insertingFromFileIndex;
    void /* unknown type, empty encoding */ validPasteUTTypeIdentifiers;
    void /* unknown type, empty encoding */ docScanDismissBlock;
    void /* unknown type, empty encoding */ quadEditorController;
    void /* unknown type, empty encoding */ _rulerHostingDelegate;
    void /* unknown type, empty encoding */ rulerHostView;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)documentCameraViewController:(id)a0 didFailWithError:(id)a1;
- (void)documentCameraViewController:(id)a0 didFinishWithScan:(id)a1;
- (void)documentCameraViewControllerDidCancel:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)toolPickerIsRulerActiveDidChange:(id)a0;
- (void)toolPickerSelectedToolDidChange:(id)a0;
- (void)toolPickerVisibilityDidChange:(id)a0;
- (void)PDFViewWillClickOnLink:(id)a0 withURL:(id)a1;
- (void)PDFView:(id)a0 allowsFormFillingMode:(BOOL)a1 withAutofill:(BOOL)a2 forPage:(id)a3;
- (void)PDFView:(id)a0 allowsFormFillingMode:(BOOL)a1 forPage:(id)a2;
- (void)annotationPropertiesChanged:(id)a0;
- (void)annotationsChanged:(id)a0;
- (BOOL)documentCanBeEdited:(id)a0;
- (void)pdfDocument:(id)a0 detectedAnnotations:(id)a1 forPage:(id)a2;
- (void)pdfDocument:(id)a0 didReceiveAnalysis:(id)a1 forPage:(id)a2;
- (void)pdfDocument:(id)a0 handleTabFrom:(id)a1 direction:(unsigned long long)a2;
- (void)pdfSelectionChanged:(id)a0;
- (id)pdfView:(id)a0 overlayViewForPage:(id)a1;
- (void)pdfView:(id)a0 willDisplayOverlayView:(id)a1 forPage:(id)a2;
- (void)pdfView:(id)a0 willEndDisplayingOverlayView:(id)a1 forPage:(id)a2;

@end
