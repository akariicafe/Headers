@class UIControl, NSString, NSMapTable, NSArray, SUUIListViewElement, NSMutableArray, SUUIMenuPopoverController;

@interface SUUIHorizontalListView : SUUIViewReuseView <SUUIMenuPopoverDelegate, SUUIViewElementView> {
    NSMutableArray *_artworkRequestPassthroughViews;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _bigHitInsets;
    double _elementSpacing;
    UIControl *_focusedMenuButton;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSArray *_lines;
    SUUIListViewElement *_listElement;
    SUUIMenuPopoverController *_popoverController;
    BOOL _useBigHitTarget;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringForButton:(id)a0 context:(id)a1;
+ (id)_attributedStringForButtonText:(id)a0 type:(long long)a1 style:(id)a2 context:(id)a3;
+ (id)_attributedStringForLabel:(id)a0 context:(id)a1;
+ (id)_attributedStringForMenuItem:(id)a0 context:(id)a1;
+ (double)_elementSpacingForViewElement:(id)a0;
+ (double)_lineSpacingForLineElements:(id)a0;
+ (double)_lineSpacingForViewElement:(id)a0;
+ (id)_linesWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })_sizeForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_buttonAction:(id)a0;
- (void)_destroyMenuPopover;
- (void)_imageTapAction:(id)a0;
- (void)_menuButtonAction:(id)a0;
- (id)_viewElementForView:(id)a0;
- (void)menuPopover:(id)a0 didSelectMenuItemAtIndex:(long long)a1;
- (void)menuPopover:(id)a0 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)menuPopoverDidCancel:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
