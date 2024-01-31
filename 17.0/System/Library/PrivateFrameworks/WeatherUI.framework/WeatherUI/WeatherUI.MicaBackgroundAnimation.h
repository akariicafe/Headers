@interface WeatherUI.MicaBackgroundAnimation : NSObject <CALayerDelegate> {
    void /* unknown type, empty encoding */ layer;
    void /* unknown type, empty encoding */ playbackCoordinator;
    void /* unknown type, empty encoding */ rootMicaLayer;
    void /* unknown type, empty encoding */ rotationLayer;
    void /* unknown type, empty encoding */ scaleLayer;
    void /* unknown type, empty encoding */ displayScale;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ timeStep;
    void /* unknown type, empty encoding */ randomSpeedVariance;
    void /* unknown type, empty encoding */ stateName;
    void /* unknown type, empty encoding */ posterRotationAngle;
    void /* unknown type, empty encoding */ posterOrientation;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ scale;
}

- (void)layoutSublayersOfLayer:(id)a0;
- (id)init;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
