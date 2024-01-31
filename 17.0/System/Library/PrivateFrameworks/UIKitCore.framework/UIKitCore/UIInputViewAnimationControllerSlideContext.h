@class UIInputViewSetPlacement, UIView;

@interface UIInputViewAnimationControllerSlideContext : NSObject

@property (retain, nonatomic) UIView *snapshot;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotEndFrame;
@property (retain, nonatomic) UIInputViewSetPlacement *endPlacement;

- (void).cxx_destruct;

@end
