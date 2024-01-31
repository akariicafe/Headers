@class NSArray, NSMutableDictionary, NSMutableOrderedSet, UIView, NSMutableArray, UITapGestureRecognizer;
@protocol _UICursorAccessoryItemDataSource;

@interface _UICursorAccessoryView : UIView {
    UIView *_activeHighlightBackgroundView;
    NSMutableOrderedSet *_displayedIdentifiers;
    NSMutableDictionary *_itemViewsByIdentifier;
    NSMutableArray *_dividerViews;
    UITapGestureRecognizer *_accessoryItemTapGestureRecognizer;
}

@property (class, readonly) double baseFontSize;
@property (class, readonly) double glyphWidth;
@property (class, readonly) double glyphHeight;

@property (weak, nonatomic) id<_UICursorAccessoryItemDataSource> dataSource;
@property (retain, nonatomic) NSArray *accessoryIdentifiers;
@property (readonly, nonatomic) double activeAccessoryXOffset;

+ (struct CGSize { double x0; double x1; })defaultItemSize;
+ (double)grayscaleLuminance:(id)a0;
+ (struct CGSize { double x0; double x1; })largeItemSize;

- (void)setTintColor:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_scheduleRemovedItemViewCleanup;
- (void)_cleanupRemovedItemViews;
- (void)_didRecognizeAccessoryTapGestureRecognizer:(id)a0;
- (id)_displayedItemViewAtIndex:(long long)a0;
- (void)_ensureNumberOfReusableViews:(unsigned long long)a0 inArray:(id)a1 ofClass:(Class)a2;
- (void)_layoutDisplayedAccessoryItemViews;
- (void)_layoutHighlightView;
- (void)_reloadAccessoryItemViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unionRectActiveItems;
- (void)setAccessoryIdentifiers:(id)a0 animated:(BOOL)a1;

@end
