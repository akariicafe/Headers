@class NSArray, NSString, NSObject, WebDataSource;
@protocol WebPDFViewPlaceholderDelegate;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    WebDataSource *_dataSource;
    BOOL _didFinishLoad;
}

@property (retain) NSArray *pageRects;
@property (retain) NSArray *pageYOrigins;
@property (retain) NSString *title;
@property (weak) NSObject<WebPDFViewPlaceholderDelegate> *delegate;
@property (readonly) struct CGPDFDocument { } *document;
@property (readonly) struct CGPDFDocument { } *doc;
@property (readonly) unsigned long long totalPages;
@property struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) BOOL didCompleteLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setAsPDFDocRepAndView;
+ (Class)_representationClassForWebFrame:(id)a0;
+ (id)supportedMIMETypes;

- (void)dealloc;
- (void)setDocument:(struct CGPDFDocument { } *)a0;
- (void).cxx_destruct;
- (void)layout;
- (void)setDataSource:(id)a0;
- (void)clearDocument;
- (void)didUnlockDocument;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageNumber:(unsigned long long)a0;
- (void)simulateClickOnLinkToURL:(id)a0;
- (id)documentSource;
- (struct CGSize { double x0; double x1; })_computePageRects:(struct CGPDFDocument { } *)a0;
- (void)_doPostLoadOrUnlockTasks;
- (void)_evaluateJSForDocument:(struct CGPDFDocument { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getPDFPageBounds:(struct CGPDFPage { } *)a0;
- (void)_notifyDidCompleteLayout;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_updateTitleForURL:(id)a0;
- (BOOL)canProvideDocumentSource;
- (void)dataSourceUpdated:(id)a0;
- (void)finishedLoadingWithDataSource:(id)a0;
- (void)receivedData:(id)a0 withDataSource:(id)a1;
- (void)receivedError:(id)a0 withDataSource:(id)a1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)a0;

@end
