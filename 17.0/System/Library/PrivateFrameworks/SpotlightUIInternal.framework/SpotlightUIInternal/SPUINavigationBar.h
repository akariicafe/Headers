@class SearchUISeparatorView, SPUISearchHeader;

@interface SPUINavigationBar : UINavigationBar

@property (retain) SearchUISeparatorView *topDividerView;
@property (retain, nonatomic) SPUISearchHeader *header;

- (void)tlk_updateForAppearance:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)showSeparator:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didAddSubview:(id)a0;
- (id)_popNavigationItemWithTransition:(int)a0;
- (void)updateBackgroundViewVisibility;
- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isLocked;
- (void)performShowSeparator:(BOOL)a0 animated:(BOOL)a1;
- (void)didMoveToWindow;

@end
