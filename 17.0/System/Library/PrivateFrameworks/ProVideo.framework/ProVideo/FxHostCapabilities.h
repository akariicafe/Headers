@interface FxHostCapabilities : NSObject {
    struct FxHostCapabilitiesPriv { id x0; unsigned int x1; id x2; id x3; } *_hostCapPriv;
}

+ (id)getRemoteHostCapabilities;
+ (void)setRemoteHostCapabilities:(id)a0;

- (void)dealloc;
- (BOOL)formatsFloatRGBABitmapsAsARGB;
- (id)glContextPixelFormatAttributes;
- (id)hostID;
- (BOOL)hostIsFCE;
- (BOOL)hostIsFCP;
- (BOOL)hostIsMotion;
- (unsigned int)hostVersionNumber;
- (id)initWithAPIManager:(id)a0;
- (BOOL)notifiesParameterChangedForGenerators;
- (BOOL)parameterChangedUsableForAllParameters;
- (BOOL)supportsDisabledParameters;
- (BOOL)supportsGroupParameters;
- (BOOL)supportsHiddenParameters;
- (BOOL)supportsTemporalBitmaps;
- (unsigned long long)timeBase;
- (BOOL)upscalesFields;

@end
