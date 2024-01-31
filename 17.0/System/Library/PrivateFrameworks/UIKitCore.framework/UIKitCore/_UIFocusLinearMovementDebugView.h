@class NSArray;

@interface _UIFocusLinearMovementDebugView : UIView {
    NSArray *_items;
    NSArray *_groups;
    BOOL _colorCoding;
}

@property (readonly, nonatomic, getter=isGroupMode) BOOL groupMode;

- (id)init;
- (id)initWithItems:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithGroups:(id)a0;
- (id)_groupFramesFromGroups:(id)a0;
- (id)_itemFramesFromItems:(id)a0;
- (id)_lineSegmentsFromFrames:(id)a0;
- (id)_primaryGroupFramesFromGroups:(id)a0;

@end
