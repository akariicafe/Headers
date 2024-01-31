@class NSString, NSHashTable, UIView, ICDrawingHashtagsAndMentionsController, ICInlineDrawingChangeCoalescer;

@interface ICInlineDrawingTextAttachment : ICInlineCanvasTextAttachment <PKTextAttachment>

@property (retain, nonatomic) ICInlineDrawingChangeCoalescer *changeCoalescer;
@property (retain, nonatomic) NSHashTable *inlineDrawingViews;
@property (nonatomic) BOOL isHandlingDrawingDidChange;
@property (retain, nonatomic) ICDrawingHashtagsAndMentionsController *hashtagsAndMentionsController;
@property (weak, nonatomic) UIView *cachedDrawingViewForPlaceView;
@property (weak, nonatomic) UIView *cachedControlViewForPlaceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (id)_image;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (id)viewProviderForParentView:(id)a0 characterIndex:(unsigned long long)a1 layoutManager:(id)a2;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;
- (id)attachmentViews;
- (id)attachmentAsNSTextAttachment;
- (BOOL)canDragWithoutSelecting;
- (void)configureHashtagAndMentionsForView:(id)a0;
- (void)detachView;
- (void)drawingDataDidChange:(id)a0 view:(id)a1;
- (id)inlineViews;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 textContainer:(id)a1;
- (void)resetZoom;
- (void)saveIfNeeded;

@end
