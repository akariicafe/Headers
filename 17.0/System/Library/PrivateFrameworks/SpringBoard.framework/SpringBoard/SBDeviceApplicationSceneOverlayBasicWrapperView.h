@interface SBDeviceApplicationSceneOverlayBasicWrapperView : UIView <SBDeviceApplicationSceneOverlayView> {
    BOOL _needsCounterRotation;
}

@property (nonatomic) long long hostOrientation;
@property (nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange;
@property (readonly, nonatomic) BOOL needsCounterRotation;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithCounterRotationRequirement:(BOOL)a0;

@end
