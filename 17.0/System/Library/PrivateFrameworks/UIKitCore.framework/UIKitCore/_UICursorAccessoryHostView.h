@class _UICursorAccessoryView, _UIContainerWindowPortalInteraction;

@interface _UICursorAccessoryHostView : _UITouchPassthroughView {
    unsigned long long _resolvedPlacement;
}

@property (retain, nonatomic) _UIContainerWindowPortalInteraction *portalInteraction;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRect;
@property (nonatomic) unsigned long long preferredPlacementEdge;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (retain, nonatomic) _UICursorAccessoryView *cursorAccessoryView;

- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCursorItemDataSource:(id)a0;

@end
