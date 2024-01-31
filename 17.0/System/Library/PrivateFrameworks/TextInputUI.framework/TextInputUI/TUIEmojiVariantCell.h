@class TUIEmojiVariantSelectorView, EMFEmojiToken, NSString, UIView, _TUIKeyboardEmojiDraggableView;

@interface TUIEmojiVariantCell : UIView <_TUIKeyboardEmojiDraggableViewDelegate>

@property (readonly, nonatomic) _TUIKeyboardEmojiDraggableView *labelView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) EMFEmojiToken *emojiToken;
@property (weak, nonatomic) TUIEmojiVariantSelectorView *variantSelectorView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createDraggableEmojiLabel;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dragDidEnd:(id)a0 withOperation:(unsigned long long)a1;
- (void)dragWillBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 token:(id)a1;

@end
