@class SFFluidCollectionViewLayoutAttributes, NSString, UIPinchGestureRecognizer, NSIndexPath;
@protocol SFFluidCollectionViewTrackedUpdateToken;

@interface SFFluidTabOverviewPinchInteraction : SFFluidCollectionViewInteraction <UIGestureRecognizerDelegate> {
    struct CGPoint { double x; double y; } _pinchStartLocation;
    double _targetScale;
    SFFluidCollectionViewLayoutAttributes *_initialAttributes;
    id<SFFluidCollectionViewTrackedUpdateToken> _trackedUpdateToken;
}

@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly, nonatomic) long long pinchDirection;
@property (readonly, nonatomic) NSIndexPath *pinchedItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelInteraction;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)gestureRecognizers;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)transformLayoutAttributes:(id)a0;
- (void)_didReceivePinch:(id)a0;

@end
