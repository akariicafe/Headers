@class NSString, UIKeyboardEmojiVariantDivider, UIView, NSMutableArray;

@interface UIKeyboardEmojiVariantView : UIView <UIKBKeyViewContentView> {
    UIKeyboardEmojiVariantDivider *_divider;
    NSMutableArray *_cells;
}

@property (retain, nonatomic) UIView *touchForwardingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredContentViewSizeForKey:(id)a0 withTraits:(id)a1;

- (id)nextResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)retestSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 phase:(long long)a2;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (void)updateHighlightForSelectedVariantIndex:(long long)a0;
- (void)updateRenderConfig:(id)a0;
- (BOOL)updateSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
