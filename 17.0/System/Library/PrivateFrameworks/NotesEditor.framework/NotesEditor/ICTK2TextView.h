@class ICAttributionSidebarView, ICTTTextContentStorage, ICTK2TextController, ICTK2TextLayoutManagerDelegate, NSLayoutConstraint, NSLayoutManager, ICTextContentStorageDelegate;

@interface ICTK2TextView : ICTextView

@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (retain, nonatomic) ICTK2TextLayoutManagerDelegate *textLayoutManagerDelegate;
@property (retain, nonatomic) ICTextContentStorageDelegate *textContentStorageDelegate;
@property (retain, nonatomic) ICAttributionSidebarView *attributionSidebarView;
@property (retain, nonatomic) NSLayoutConstraint *attributionSidebarLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *attributionSidebarWidthConstraint;
@property (readonly, weak, nonatomic) ICTTTextContentStorage *textContentStorage;
@property (readonly, nonatomic) ICTK2TextController *tk2TextController;
@property (copy) id /* block */ renderingAttributesProvider;

+ (void)initialize;
+ (void)swizzleLayoutFragmentPointInside;
+ (void)swizzleTextLayoutCanvasViewTextViewportLayoutControllerDidLayoutTextViewportElement;

- (void)dealloc;
- (void)textViewportLayoutControllerDidLayout:(id)a0;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)textStorage;
- (id)attachmentViewDelegate;
- (id)initWithNote:(id)a0 size:(struct CGSize { double x0; double x1; })a1 insideSystemPaper:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })scrollOffsetForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withHeightPercentageAdjustment:(double)a1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withHeightPercentageAdjustment:(double)a1 forceTop:(BOOL)a2;
- (void)setAttachmentViewDelegate:(id)a0;

@end
