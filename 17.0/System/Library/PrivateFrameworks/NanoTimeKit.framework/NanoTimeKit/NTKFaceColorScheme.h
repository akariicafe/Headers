@class UIColor, NSArray, NTKFaceColorPalette, NSMutableDictionary, CLKDevice;

@interface NTKFaceColorScheme : NSObject {
    NSMutableDictionary *_colorsByUnit;
}

@property (nonatomic) BOOL containsOverrideFaceColor;
@property (retain, nonatomic) NSArray *faceColors;
@property (nonatomic) double multicolorAlpha;
@property (retain, nonatomic) NTKFaceColorPalette *faceColorPalette;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) unsigned long long units;
@property (readonly, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) UIColor *secondaryForegroundColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *accentColor;
@property (readonly, nonatomic) UIColor *shiftedForegroundColor;
@property (readonly, nonatomic) UIColor *shiftedBackgroundColor;
@property (readonly, nonatomic) UIColor *stackedImagesForegroundColor;
@property (readonly, nonatomic) UIColor *tickColor;
@property (readonly, nonatomic) UIColor *alternativeTickColor;
@property (readonly, nonatomic) UIColor *activityTickColor;
@property (readonly, nonatomic) UIColor *upNextTextColor;

+ (id)colorSchemeForDevice:(id)a0 withFaceColorPalette:(id)a1 foregroundColor:(id)a2 units:(unsigned long long)a3 alternateHighlight:(BOOL)a4;
+ (id)colorSchemeForDevice:(id)a0 withFaceColorPalette:(id)a1 units:(unsigned long long)a2;
+ (id)interpolationForDevice:(id)a0 fromFaceColorPalette:(id)a1 toFaceColorPalette:(id)a2 fraction:(double)a3 units:(unsigned long long)a4 brightenUnits:(unsigned long long)a5 overrideColor:(id)a6 alternateHighlight:(BOOL)a7;
+ (id)interpolationFrom:(id)a0 to:(id)a1 fraction:(double)a2;
+ (id)interpolationFrom:(id)a0 to:(id)a1 fraction:(double)a2 brightenUnits:(unsigned long long)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_colorForUnit:(unsigned long long)a0;
- (void)_setColor:(id)a0 forUnit:(unsigned long long)a1;
- (id)initForDevice:(id)a0;

@end
