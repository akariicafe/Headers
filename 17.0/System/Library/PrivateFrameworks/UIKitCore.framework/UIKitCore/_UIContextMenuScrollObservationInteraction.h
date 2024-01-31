@class NSString, UIView;
@protocol _UIContextMenuScrollObservationInteractionDelegate;

@interface _UIContextMenuScrollObservationInteraction : NSObject <_UIScrollViewScrollableAncestor, UIInteraction> {
    struct CGPoint { double x; double y; } _currentTranslation;
    struct CGPoint { double x; double y; } _consumedTranslation;
    struct CGPoint { double x; double y; } _currentLocation;
    BOOL _isActive;
}

@property (weak, nonatomic) id<_UIContextMenuScrollObservationInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (id)interactionWithDelegate:(id)a0;

- (BOOL)_descendentScrollView:(id)a0 shouldPreserveStartOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)_descendentScrollViewDidEndDragging:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint { double x0; double x1; })a1 startOffset:(struct CGPoint { double x0; double x1; })a2 horizontalVelocity:(inout double *)a3 verticalVelocity:(inout double *)a4 animator:(out id *)a5;
- (void)_descendentScrollViewDidCancelDragging:(id)a0;
- (BOOL)_descendentScrollViewShouldScrollHorizontally:(id)a0;
- (BOOL)_descendentScrollViewShouldScrollVertically:(id)a0;
- (void)_endInteractionWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;

@end
