@class UIView, NSString, NSLayoutManager, _UITextLayoutControllerBase, NSTextContainer, UIScrollView, NSDictionary, UITextView, UIColor;
@protocol _UITextContainerViewDelegate, _UITextCanvas, _UITextLayoutController;

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextViewCanvasViewContext> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textContainerInset;
    struct CGPoint { double x; double y; } _textContainerOrigin;
    NSDictionary *_linkTextAttributes;
    unsigned long long _invalidationSeqNo;
    long long _invalidationSeqClipsToBounds;
    struct { unsigned char textContainerOriginInvalid : 1; unsigned char verticalLayout : 2; unsigned char horizontallyResizable : 1; unsigned char verticallyResizable : 1; unsigned char freezeTextContainerSize : 1; unsigned char usesStandardTextScaling : 1; } _tcvFlags;
    UITextView *_textView;
}

@property (weak, nonatomic) NSTextContainer *textContainer;
@property (readonly, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController;
@property (weak, nonatomic) id<_UITextContainerViewDelegate> delegate;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } textContainerOrigin;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textContainerInset;
@property (nonatomic, getter=isHorizontallyResizable) BOOL horizontallyResizable;
@property (nonatomic, getter=isVerticallyResizable) BOOL verticallyResizable;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly, nonatomic) UIView<_UITextCanvas> *canvasView;
@property (nonatomic) BOOL usesStandardTextScaling;
@property (nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) BOOL freezeTextContainerSize;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } markedRange;
@property (readonly, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIScrollView *enclosingScrollView;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } drawingScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _clipRectForFadedEdges;

- (void)willMoveToSuperview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)setBackgroundColor:(id)a0;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isFrameRect:(BOOL)a2 settingAction:(id /* block */)a3;
- (void)setNeedsDisplay;
- (id)attributedSubstringForMarkedRange;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)a0;
- (void)didLayoutTextAttachmentView:(id)a0 inFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_shouldCapSizeToFitLayoutRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)layoutManager:(id)a0 effectiveCUICatalogForTextEffect:(id)a1;
- (BOOL)reconfigureWithLayoutManager:(id)a0 triggeredBySelector:(SEL)a1;
- (void)tintColorDidChange;
- (void)sizeToFit;
- (void)textContainerUsageDidChangeToSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textLayoutController:(id)a1 textContainer:(id)a2 delegate:(id)a3;
- (void)didAddTextAttachmentViews:(id)a0;
- (void)invalidateTextContainerOrigin;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsContentsFormatUpdate;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)setConstrainedFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)_ensureLayoutForCappedSize;
- (BOOL)drawTextInRectIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)linkTextAttributes;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidAdditionalLayout:(BOOL)a1;
- (id)linkAttributesForLink:(id)a0 forCharacterAtIndex:(unsigned long long)a1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sizeToConstrainedContainerUsedRect;
- (void)layoutSubviews;
- (void)didRemoveTextAttachmentViews:(id)a0;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setLayoutOrientation:(long long)a0;

@end
