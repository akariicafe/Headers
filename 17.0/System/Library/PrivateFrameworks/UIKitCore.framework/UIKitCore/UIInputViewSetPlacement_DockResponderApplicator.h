@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator

@property (retain, nonatomic) UIKeyboardPopoverContainer *popover;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popoverRectPlaceholder;

- (BOOL)isGesture:(id)a0 inDraggableView:(struct CGPoint { double x0; double x1; })a1;
- (id)draggableView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverFrame;
- (void)applyChanges:(id)a0;
- (BOOL)preBeginGesture:(id)a0 shouldBegin:(BOOL *)a1;
- (id)twoFingerDraggableView;
- (void)invalidatePopover;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scaledPopoverTransform;
- (id)startingPropertiesFromPlacementProperties:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)invalidate;
- (BOOL)isPopoverRequired;
- (void).cxx_destruct;
- (void)prepare;
- (BOOL)isEqual:(id)a0;

@end
