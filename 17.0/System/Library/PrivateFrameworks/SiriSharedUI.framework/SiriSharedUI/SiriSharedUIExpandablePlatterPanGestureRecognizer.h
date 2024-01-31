@class NSString;
@protocol SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate;

@interface SiriSharedUIExpandablePlatterPanGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate> expansionDelegate;
@property (nonatomic) double collapsedHeight;
@property (nonatomic) double initialHeight;
@property (nonatomic) double scrollViewContentHeight;
@property (nonatomic) double expandedHeight;
@property (nonatomic) BOOL allowExpandedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithExpansionDelegate:(id)a0;
- (void)panGestureRecognizerDidPan:(id)a0;
- (double)projectedTranslationWithVelocity:(double)a0 decelerationRate:(double)a1;

@end
