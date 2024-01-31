@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit {
    unsigned long long _currentSelected;
    long long _lastUsedCategory;
}

@property BOOL whiteText;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setRenderConfig:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (id)symbolForRow:(long long)a0;
- (id)titleForRow:(long long)a0 fallback:(BOOL)a1;
- (void)updateCategorySelectedIndicator:(long long)a0;
- (void)updateToCategory:(long long)a0;

@end
