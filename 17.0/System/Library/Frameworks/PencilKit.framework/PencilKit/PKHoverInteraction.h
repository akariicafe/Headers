@class PKHoverController, NSString, UIView;
@protocol PKHoverInteractionDelegate;

@interface PKHoverInteraction : NSObject <PKHoverControllerDelegate, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) PKHoverController *hoverController;
@property (readonly, weak, nonatomic) id<PKHoverInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)hoverController:(id)a0 holdGestureMeanInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1 latestInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a2;
- (void)hoverControllerHoldGestureEnded:(id)a0;

@end
