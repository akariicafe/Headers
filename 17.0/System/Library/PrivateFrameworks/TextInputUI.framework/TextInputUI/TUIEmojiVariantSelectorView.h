@class TUIDrawingView, EMFEmojiToken, NSArray, UIView;
@protocol TUIEmojiVariantSelectorViewDelegate;

@interface TUIEmojiVariantSelectorView : UIView

@property (retain, nonatomic) UIView *deepShadowView;
@property (retain, nonatomic) UIView *keyShadowView;
@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) TUIDrawingView *backgroundMaskView;
@property (retain, nonatomic) TUIDrawingView *borderView;
@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (retain, nonatomic) EMFEmojiToken *baseEmojiToken;
@property (retain, nonatomic) NSArray *arrangedVariantCells;
@property (readonly, nonatomic) UIView *variantCellContainerView;
@property (readonly, nonatomic) EMFEmojiToken *selectedVariant;
@property (readonly, nonatomic) NSArray *allVariants;
@property (weak, nonatomic) id<TUIEmojiVariantSelectorViewDelegate> delegate;

+ (id)emojiTextAttributes;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backgroundBezierPathForContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })_emojiCellSize;
- (BOOL)_highlightCellAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)_numberOfVariants;
- (void)_unhighlightAllViews;
- (id)_variantCellAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 emojiToken:(id)a1 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
