@class NSString, NSLayoutConstraint;

@interface _UIWindowSafeAreaAspectFitLayoutGuide : UILayoutGuide <_UIViewBoundingPathChangeObserver, UILayoutGuideAspectFitting> {
    BOOL _layoutFrameDirty;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double aspectRatio;

- (id)init;
- (void)_boundingPathMayHaveChangedForView:(id)a0 relativeToBoundsOriginOnly:(BOOL)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setOwningView:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isSafeAreaAspectFitLayoutGuide;
- (void)_createOrUpdateHeightConstraintWithConstant:(double)a0 owningView:(id)a1 constraintsToActivate:(id)a2;
- (void)_createOrUpdateLeftConstraintWithConstant:(double)a0 owningView:(id)a1 constraintsToActivate:(id)a2;
- (void)_createOrUpdateTopConstraintWithConstant:(double)a0 owningView:(id)a1 constraintsToActivate:(id)a2;
- (void)_createOrUpdateWidthConstraintWithConstant:(double)a0 owningView:(id)a1 constraintsToActivate:(id)a2;
- (void)_updateLayoutFrameConstraintsIfNeededWithOwningView:(id)a0;
- (void)_updateLayoutFrameInOwningView:(id)a0 fromEngine:(id)a1;

@end
