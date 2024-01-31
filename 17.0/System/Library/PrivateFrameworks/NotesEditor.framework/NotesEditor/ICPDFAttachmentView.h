@class ICSelectorDelayer, UIActivityIndicatorView, UIImage, NSOperation;

@interface ICPDFAttachmentView : ICAttachmentView {
    struct CGPDFDocument { } *_pdf;
    struct CGPDFPage { } *_page;
}

@property (weak, nonatomic) NSOperation *renderOperation;
@property (retain, nonatomic) UIActivityIndicatorView *progressView;
@property (retain) ICSelectorDelayer *startProgressSelectorDelayer;
@property (nonatomic) BOOL isManaullyGeneratingImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isRendering) BOOL rendering;
@property (readonly, nonatomic) BOOL availableImageIsAcceptable;
@property (readonly, nonatomic) struct CGPDFPage { } *page;

+ (id)renderingQueue;

- (id)accessibilityLabel;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)dealloc;
- (void)setHighlightColor:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startProgress;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setAttachment:(id)a0;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeMedia;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (id)pdfURL;
- (BOOL)cancelRenderingIfPossible;
- (void)cleanupPDFDocument;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textAttachment:(id)a1 textContainer:(id)a2 forManualRendering:(BOOL)a3;
- (BOOL)needToStartRender;
- (void)prepareForPrinting;
- (void)setupBorderForLayer:(id)a0;
- (void)startImageRenderIfNeeded;
- (void)stopProgress;
- (void)updateLayerContentsWithFade:(BOOL)a0;

@end
