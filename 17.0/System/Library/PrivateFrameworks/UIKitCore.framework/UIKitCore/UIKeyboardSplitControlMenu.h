@class NSArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView <_UIInputSwitcherSplitMenu> {
    struct CGSize { double width; double height; } m_preferredSize;
    NSArray *_items;
}

@property (copy, nonatomic) id /* block */ finishSplitTransitionBlock;

+ (id)sharedInstance;
+ (id)activeInstance;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)actionForItem:(id)a0;
- (unsigned long long)defaultSelectedIndex;
- (void)didFinishSplitTransition;
- (void)didSelectItemAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })preferredSize;
- (void)setSplitAndUndocked:(BOOL)a0;
- (id)titleForItemAtIndex:(unsigned long long)a0;
- (BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)a0;
- (int)visibleItemForIndex:(unsigned long long)a0;

@end
