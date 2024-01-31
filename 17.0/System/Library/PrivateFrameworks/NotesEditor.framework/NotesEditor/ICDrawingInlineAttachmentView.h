@class NSString, ICDrawingInlineView;

@interface ICDrawingInlineAttachmentView : ICAttachmentView <ICAttachmentPresenterDelegate>

@property (retain, nonatomic) ICDrawingInlineView *drawingInlineView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsForDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAttachment:(id)a0;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (id)initWithTextAttachment:(id)a0 textContainer:(id)a1 forManualRendering:(BOOL)a2;
- (void)setAttachmentContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)attachmentPresenter:(id)a0 transitionViewForAttachment:(id)a1;
- (void)didTapAttachment:(id)a0;
- (id)icaxHintString;
- (void)sharedInit:(BOOL)a0;
- (BOOL)shouldAddPanGesture;

@end
