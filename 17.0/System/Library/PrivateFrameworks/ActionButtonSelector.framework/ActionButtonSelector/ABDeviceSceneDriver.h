@class UIColor, NSDictionary, ABColorInterpolator, CADisplayLink, NSNumber, ABFloatSpringProperty;

@interface ABDeviceSceneDriver : NSObject {
    id /* block */ _renderBlock;
    id /* block */ _stateUpdateBlock;
    CADisplayLink *_displayLink;
    NSDictionary *_sceneInterpolators;
    ABColorInterpolator *_highlightColorInterpolator;
    ABFloatSpringProperty *_highlightOpacityInterpolator;
    ABFloatSpringProperty *_buttonPressInterpolator;
    ABFloatSpringProperty *_buttonGlowInterpolator;
    NSDictionary *_zoomedOutParams;
    NSDictionary *_zoomedInParams;
    NSNumber *_dragProgress;
    NSNumber *_buttonReleaseTimestamp;
    long long _islandMode;
    BOOL _isInitialZoomedOutState;
    BOOL _isButtonAnimationActive;
    BOOL _isRingHighlightVisible;
    long long _state;
    struct ABOverlayRenderInputs { struct ABCarouselInputs { double pressProgress; double itemOpacity; BOOL selectedItemIgnoresOpacity; } carouselInputs; struct ABHighlightRingInputs { UIColor *color; BOOL isVisible; } highlightRingInputs; double contentViewOpacity; double topShadowRatio; } _overlayRenderInputs;
    struct ABDeviceSceneRenderInputs { struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } modelTransform; struct ABDeviceSceneCameraAndLight { double fStop; double focusDistance; double focalLength; double apertureBladeCount; double lightingIntensity; } cameraAndLight; struct ABDeviceSceneButtonHighlight { UIColor *color; double opacity; } buttonHighlight; double buttonPressProgress; long long islandMode; } _sceneRenderInputs;
}

- (void).cxx_destruct;
- (void)_updateForCurrentStateAnimated:(BOOL)a0;
- (id)_paramsForState:(long long)a0;
- (void)_setButtonAnimationActive:(BOOL)a0;
- (void)_setupInterpolators;
- (void)_updateButtonAnimation;
- (void)_updateForDisplayLink:(id)a0;
- (void)_updateRenderInputs;
- (void)_updateWithState:(long long)a0 dragProgress:(id)a1;

@end
