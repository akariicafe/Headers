@class NSString, _UIClientToHostRelationshipGestureInteraction, UIView, UIPanGestureRecognizer, _UIRelationshipGestureRecognizer;

@interface _UIWindowSceneDragInteractionImpl_iOS : NSObject <_UIWindowSceneDragInteractionImpl>

@property (retain, nonatomic) _UIClientToHostRelationshipGestureInteraction *clientRelationshipInteraction;
@property (retain, nonatomic) UIPanGestureRecognizer *directTouchPanGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *pointerTouchPanGestureRecognizer;
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)_didRecognizePanGesture:(id)a0;
- (id)_makeDraggingPanGestureRecognizer;
- (id)gestureForFailureRelationships;

@end
