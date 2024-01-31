@class UIAttachmentBehavior;

@interface _UISpringBehavior : UIDynamicBehavior {
    UIAttachmentBehavior *_topLeft;
    UIAttachmentBehavior *_topRight;
    UIAttachmentBehavior *_bottomRight;
    UIAttachmentBehavior *_bottomLeft;
}

@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;

- (id)init;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1;

@end
