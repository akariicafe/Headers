@class UIView, NSString, UIGestureRecognizer;
@protocol _UIWindowSceneDragInteractionImpl;

@interface UIWindowSceneDragInteraction : NSObject <UIInteraction>

@property (retain, nonatomic) id<_UIWindowSceneDragInteractionImpl> impl;
@property (readonly, nonatomic) UIGestureRecognizer *gestureForFailureRelationships;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
