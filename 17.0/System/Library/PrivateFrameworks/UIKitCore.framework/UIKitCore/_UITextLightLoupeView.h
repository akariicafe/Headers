@class NSString, CADisplayLink, _UIPortalView, UIView;
@protocol UICoordinateSpace;

@interface _UITextLightLoupeView : UIView <_UITextLoupeView> {
    UIView *_sourceView;
    UIView *_maskView;
    UIView *_backgroundView;
    UIView *_glowView;
    UIView *_portalContainerView;
    CADisplayLink *_displayLink;
    _UIPortalView *_portalView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly, nonatomic) id<UICoordinateSpace> containerCoordinateSpace;
@property (nonatomic) BOOL visible;
@property (nonatomic) double dismissalProgress;
@property (nonatomic) struct CGPoint { double x; double y; } modelPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_displayLinkFired:(id)a0;
- (void)removeFromSuperview;
- (id)initWithSourceView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_backgroundColorIfNecessary;
- (void)_stopDisplayLink;
- (void)_updateColorsForCurrentTraitCollection;
- (double)_visualOffset;
- (struct CGPoint { double x0; double x1; })constrainedModelPositionForPosition:(struct CGPoint { double x0; double x1; })a0;

@end
