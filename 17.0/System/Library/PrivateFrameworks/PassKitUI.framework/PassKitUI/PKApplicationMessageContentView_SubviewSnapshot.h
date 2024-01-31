@class UIView;

@interface PKApplicationMessageContentView_SubviewSnapshot : NSObject {
    int _type;
    UIView *_snapshot;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _alignmentRectInsets;
    struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } margins; } _state;
}

- (id)init;
- (void).cxx_destruct;

@end
