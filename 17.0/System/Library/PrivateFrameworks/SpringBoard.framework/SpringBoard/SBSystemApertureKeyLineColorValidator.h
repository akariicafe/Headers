@class NSString, SBSystemApertureSettings;

@interface SBSystemApertureKeyLineColorValidator : NSObject <PTSettingsKeyObserver> {
    SBSystemApertureSettings *_settings;
    struct CGColorSpace { } *_labColorSpace;
    struct CGColorSpace { } *_rgbColorSpace;
    struct CGColorTransform { } *_colorTransformToLAB;
    struct CGColorTransform { } *_colorTransformToRGB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_applySettingsValues;
- (id)validateKeyLineColor:(id)a0;

@end
