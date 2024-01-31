@class NSArray, NSString, UIView, NSLayoutConstraint;
@protocol UIInputViewSetPlacementOwner;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {
    NSLayoutConstraint *_horizontalConstraint;
    NSLayoutConstraint *_verticalConstraint;
    NSLayoutConstraint *_widthConstraint;
    id<UIInputViewSetPlacementOwner> _owner;
}

@property (readonly) struct CGPoint { double x0; double x1; } origin;
@property (readonly) NSArray *constraints;
@property (readonly) UIView *draggableView;
@property (readonly) UIView *twoFingerDraggableView;
@property (readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverFrame;
@property (readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inputAssistantPadding;
@property (readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inputAccessoryPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicatorForOwner:(id)a0 withPlacement:(id)a1;

- (BOOL)allConstraintsActive;
- (BOOL)isGesture:(id)a0 inDraggableView:(struct CGPoint { double x0; double x1; })a1;
- (void)applyChanges:(id)a0;
- (id)initForOwner:(id)a0 withPlacement:(id)a1;
- (BOOL)preBeginGesture:(id)a0 shouldBegin:(BOOL *)a1;
- (void)checkVerticalConstraint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRect;
- (void)invalidate;
- (void).cxx_destruct;
- (void)prepare;
- (BOOL)isEqual:(id)a0;

@end
