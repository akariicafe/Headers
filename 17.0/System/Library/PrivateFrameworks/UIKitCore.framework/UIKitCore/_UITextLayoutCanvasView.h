@class NSString, NSMapTable, NSTextContainer, NSTextViewportLayoutController, NSTextLayoutManager, NSMutableSet;
@protocol _UITextCanvasContext;

@interface _UITextLayoutCanvasView : UIView <NSTextViewportLayoutControllerDelegate, _UITextKit2Canvas> {
    NSTextViewportLayoutController *_viewportLayoutController;
    NSMutableSet *_viewportElementsToRemove;
    NSMapTable *_viewportElementViews;
    NSMutableSet *_textAttachmentViews;
    NSMutableSet *_newTextAttachmentViews;
    unsigned long long _textContainerIndex;
    struct CGSize { double width; double height; } _contentSize;
    BOOL _inLayout;
}

@property (readonly, nonatomic) NSTextLayoutManager *textLayoutManager;
@property (readonly, nonatomic) NSTextContainer *textContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UITextCanvasContext> context;

- (id)textRangeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutIfNeeded:(BOOL)a1;
- (void)setNeedsDisplay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportBoundsForTextViewportLayoutController:(id)a0;
- (void)_performViewportLayout;
- (void)_viewportDidLayout;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewportLayoutControllerDidLayout:(id)a0;
- (void)textViewportLayoutControllerWillLayout:(id)a0;
- (void)viewportBoundsDidChange;
- (void)updateContentSizeIfNeeded;
- (void)_viewportWillLayout;
- (void).cxx_destruct;
- (void)textViewportLayoutController:(id)a0 configureRenderingSurfaceForTextLayoutFragment:(id)a1;
- (id)initWithTextLayoutManager:(id)a0 textContainer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)textRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
