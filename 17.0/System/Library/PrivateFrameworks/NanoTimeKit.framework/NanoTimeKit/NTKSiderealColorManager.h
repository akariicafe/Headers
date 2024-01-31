@class NTKAltitudeColorCurve, NSMutableArray, NSArray;

@interface NTKSiderealColorManager : NSObject {
    NSMutableArray *_updateHandlers;
    NTKAltitudeColorCurve *_dialBackground;
    NSArray *_dayGradient;
    NTKAltitudeColorCurve *_civilTwilight;
    NTKAltitudeColorCurve *_nauticalTwilight;
    NTKAltitudeColorCurve *_astronomicalTwilight;
    NTKAltitudeColorCurve *_civilTwilightCurve_p3;
    NTKAltitudeColorCurve *_nauticalTwilightCurve_p3;
    NTKAltitudeColorCurve *_astronomicalTwilightCurve_p3;
    NTKAltitudeColorCurve *_dialBackgroundCurve_p3;
    NSArray *_dayGradientCurve_p3;
    NTKAltitudeColorCurve *_innerComplication;
    NTKAltitudeColorCurve *_outerComplication;
    NTKAltitudeColorCurve *_dayDiskBloom;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (void)_notifyHandlers;
- (void)setSunAltitude:(double)a0;
- (id)_createElementsFromDict:(id)a0;
- (void)addColorUpdateHandler:(id /* block */)a0;
- (id)astronomicalTwilightColorCurve;
- (id)astronomicalTwilightCurveP3;
- (id)civilTwilightColorCurve;
- (id)civilTwilightCurveP3;
- (id)dayDiskBloomColorCurve;
- (id)dayGradientColorCurves;
- (id)dayGradientCurveP3;
- (id)dialBackgroundColorCurve;
- (id)dialBackgroundCurveP3;
- (id)innerComplicationColorCurve;
- (id)nauticalTwilightColorCurve;
- (id)nauticalTwilightCurveP3;
- (id)outerComplicationColorCurve;

@end
