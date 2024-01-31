@class UITapGestureRecognizer, VKCStickerEffectView, IMSticker, UILongPressGestureRecognizer;

@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) VKCStickerEffectView *effectView;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL gestureRecognizersEnabled;
@property (retain, nonatomic) IMSticker *sticker;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)doubleTapGestureRecognized:(id)a0;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)longPressGestureRecognized:(id)a0;
- (void)performDroppedWiggle:(id /* block */)a0;
- (void)performHide:(id /* block */)a0;
- (void)performInsertion:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performReveal:(id /* block */)a0;
- (void)performWiggleAnimationIfNeeded;
- (void)setAssociatedItemView:(id)a0;

@end
