@class NSString, _UIFocusSelectObserverGestureRecognizer, UIView, UITapGestureRecognizer;
@protocol _UISelectionInteractionDelegate;

@interface _UISelectionInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    struct { unsigned char delegateImplementsDidBeginHinting : 1; unsigned char delegateImplementsDidCancelHinting : 1; unsigned char delegateImplementsShouldBegin : 1; } _flags;
}

@property (weak, nonatomic) UIView *view;
@property (readonly, nonatomic) UITapGestureRecognizer *selectGestureRecognizer;
@property (readonly, nonatomic) _UIFocusSelectObserverGestureRecognizer *selectHighlightRecognizer;
@property (nonatomic) BOOL simulatePressesCallbacksForLegacyBehavior;
@property (weak, nonatomic) id<_UISelectionInteractionDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isHinting) BOOL hinting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didMoveToView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)highlightGestureHandler:(id)a0;
- (void)selectGestureHandler:(id)a0;

@end
