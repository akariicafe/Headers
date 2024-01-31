@class TSWPLayout;
@protocol TSWPHeaderFooterProvider;

@interface TSWPPageLayout : TSDLayout {
    TSWPLayout *_headerFooterLayouts[2][3];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _headerFooterClipRects[2][3];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _headerFooterBorderRects[2][3];
}

@property (readonly, nonatomic) double headerHeight;
@property (readonly, nonatomic) double footerHeight;
@property (readonly, nonatomic) BOOL allowsHeaderFooter;
@property (readonly, nonatomic) BOOL hasHeaders;
@property (readonly, nonatomic) BOOL hasFooters;
@property (readonly, nonatomic) id<TSWPHeaderFooterProvider> headerFooterProvider;
@property (readonly, nonatomic) BOOL headerFooterProviderValid;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyRect;

- (void).cxx_destruct;
- (void)parentWillChangeTo:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0 inShapeLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderRectForHeaderFooter:(long long)a0 atIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRectForHeaderFooter:(long long)a0 atIndex:(long long)a1;
- (id)headerFooterLayout:(long long)a0 atIndex:(long long)a1;
- (void)i_clearHeaderFooterLayouts;
- (id)i_insertValidatedHeaderFooterLayouts:(out BOOL *)a0;
- (BOOL)i_updateHeaderFooterLayouts;
- (BOOL)isHeaderFooterLayout:(id)a0;
- (BOOL)p_isHeaderFooter:(long long)a0 editingAtFragmentIndex:(long long)a1;
- (void)p_updateHeaderFooterClipAndBorderRect;
- (void)p_updateHeaderFooterClipAndBorderRects:(long long)a0;
- (BOOL)shouldHeaderFooterBeVisible:(long long)a0;

@end
