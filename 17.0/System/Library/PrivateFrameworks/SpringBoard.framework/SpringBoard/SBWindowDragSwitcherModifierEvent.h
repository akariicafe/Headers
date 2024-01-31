@interface SBWindowDragSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic, getter=isDraggingFromContinuousExposeStrips) BOOL draggingFromContinuousExposeStrips;
@property (nonatomic) struct CGPoint { double x; double y; } locationInSelectedDisplayItem;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfSelectedDisplayItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isWindowDragGestureEvent;

@end
