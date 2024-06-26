@class NSString, NSSet, NSDictionary, NSUUID;
@protocol CAPixelConstraints;

@interface CAWindowServerDisplay : NSObject <CABrightnessControl, CAPresetTransaction> {
    struct CAWindowServerDisplayImpl { struct Mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x0; struct Server *x1; struct CABrightnessTransaction { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct { float x0[9]; } x9; float x10; BOOL x11; unsigned int x12; } x2; id /* block */ x3; id x4; id x5; id x6; id x7; BOOL x8; BOOL x9; } *_impl;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) struct CGSize { double x0; double x1; } nativeSize;
@property (readonly) struct CGSize { double x0; double x1; } touchScales;
@property double scale;
@property struct CGSize { double x0; double x1; } scales;
@property BOOL scalePreservesAspect;
@property (readonly) double minimumScale;
@property (readonly) double maximumScale;
@property (readonly) unsigned long long maxLayerBandwidth;
@property (readonly) struct CGSize { double x0; double x1; } panelPhysicalSize;
@property (readonly) unsigned long long panelPointsPerInch;
@property (readonly) NSString *name;
@property (readonly) NSString *deviceName;
@property (readonly) unsigned int displayId;
@property (readonly) long long displayType;
@property (readonly) NSString *uniqueId;
@property (readonly) unsigned int rendererFlags;
@property (readonly) NSSet *clones;
@property (readonly) CAWindowServerDisplay *cloneMaster;
@property (getter=isBlanked) BOOL blanked;
@property BOOL blankingRemovesPower;
@property (getter=isFlipBookEnabled) BOOL flipBookEnabled;
@property (getter=isFlipBookSuppressed) BOOL flipBookSuppressed;
@property (readonly, getter=isFlipBookActive) BOOL flipBookActive;
@property (copy) NSString *orientation;
@property (copy) NSString *overscanAdjustment;
@property double overscanAmount;
@property struct CGSize { double x0; double x1; } overscanAmounts;
@property BOOL invertsColors;
@property BOOL allowsExtendedDynamicRange;
@property (getter=isGrayscale) BOOL grayscale;
@property (readonly) BOOL supportsGamutRemap;
@property float contrast;
@property float maximumBrightness;
@property (readonly) float maximumLuminance;
@property float nits;
@property float idealRefreshRate;
@property BOOL usesPreferredModeRefreshRate;
@property (copy, nonatomic) NSString *colorMode;
@property BOOL allowsVirtualModes;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property (readonly) BOOL supportsExtendedColors;
@property long long tag;
@property int processId;
@property (copy) NSString *TVMode;
@property (copy) NSString *TVSignalType;
@property (copy) id /* block */ hotPlugCallback;
@property (copy) id /* block */ brightnessCallback;
@property (copy) id /* block */ updateRequestCallback;
@property (getter=isSecure) BOOL secure;
@property BOOL allowsDisplayCompositing;
@property BOOL tracksCarPlayRegions;
@property (readonly) double nextWakeupTime;
@property (copy) id /* block */ frameInfoCallback;
@property (readonly) long long frameInfoCallbackVersion;
@property (readonly) void *detachingDisplay;
@property (readonly, getter=isDetaching) BOOL detaching;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } detachingRect;
@property (readonly) unsigned long long vblDelta;
@property (readonly) unsigned long long previousVBL;
@property (readonly) unsigned long long minimumFrameTime;
@property (readonly) unsigned long long maximumFrameTime;
@property (readonly) unsigned long long minimumVRRVBLDelta;
@property (readonly) unsigned long long maximumVRRVBLDelta;
@property BOOL disablesUpdates;
@property BOOL disabled;
@property (readonly) struct { float x0; float x1; } whitepoint;
@property (readonly) struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; } chromaticities;
@property (readonly) float gamma;
@property (readonly) long long transportType;
@property BOOL enabled;
@property (readonly) unsigned int framebufferFormat;
@property (readonly) BOOL needsUpdate;
@property (readonly) BOOL supportsCursor;
@property (readonly) struct CGSize { double x0; double x1; } maximumCursorSize;
@property struct CGPoint { double x0; double x1; } cursorPosition;
@property (copy) NSDictionary *cursorDictionary;
@property BOOL cursorHidden;
@property BOOL cursorEnabled;
@property (readonly) BOOL tripleBuffered;
@property (readonly) unsigned long long minimumSourceRectSize;
@property (readonly) unsigned long long maximumSourceRectWidth;
@property (readonly) unsigned long long maximumSourceRectPixels;
@property (retain, nonatomic) NSDictionary *brightnessCapabilities;
@property (readonly) BOOL supportsColorSpaces;
@property (retain) struct CGColorSpace { } *blendColorSpace;
@property (retain) struct CGColorSpace { } *displayColorSpace;
@property struct CGColorTRC { int x0; union { struct CGColorTRCParametric { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x0; struct CGColorTRCTable { unsigned long long x0; float *x1; struct CGColorTRCBoundaryExtension { float x0; float x1; } x2; struct CGColorTRCBoundaryExtension { float x0; float x1; } x3; } x1; } x1; } systemGamma;
@property struct CGColorTRC { int x0; union { struct CGColorTRCParametric { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x0; struct CGColorTRCTable { unsigned long long x0; float *x1; struct CGColorTRCBoundaryExtension { float x0; float x1; } x2; struct CGColorTRCBoundaryExtension { float x0; float x1; } x3; } x1; } x1; } blackpointAdaptation;
@property BOOL accessibilityFrameRateLimitEnabled;
@property (readonly) id<CAPixelConstraints> averagePixelConstraints;
@property (readonly) NSDictionary *virtualDisplayMode;
@property (readonly, nonatomic) unsigned long long productId;
@property (readonly, nonatomic) unsigned long long vendorId;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL brightnessAvailable;
@property (readonly, nonatomic) BOOL whitePointAvailable;
@property (readonly, nonatomic) BOOL whitePointD50XYZ;
@property (readonly, nonatomic) unsigned int serviceObject;
@property (nonatomic) double maximumHDRLuminance;
@property (nonatomic) double maximumSDRLuminance;
@property (nonatomic) double minimumLuminance;
@property (nonatomic) double maximumReferenceLuminance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long trinityCabalConfig;
@property (nonatomic) BOOL preserveAppleSRGBGammaResponse;
@property (nonatomic) BOOL isReferencePreset;

- (BOOL)setDigitalModes:(id)a0 withTimings:(id)a1;
- (unsigned int)contextIdAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setContrastEnhancer:(float)a0;
- (BOOL)finishExternalUpdate:(void *)a0 withFlags:(unsigned int)a1 debugInfo:(unsigned long long)a2;
- (BOOL)commitBrightness:(id *)a0;
- (void)setHeadroom:(float)a0;
- (BOOL)commitPreset;
- (BOOL)abortWhitePointRamp:(struct { float x0[9]; } *)a0 error:(id *)a1;
- (void)postNotification:(id)a0 payload:(id)a1;
- (void)setUserAdjustment:(float *)a0 scale:(float)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromContextId:(unsigned int)a1;
- (BOOL)canUpdateWithFlags:(unsigned int)a0;
- (void)setColorMatrix:(const float *)a0 scale:(float)a1 rampDuration:(double)a2;
- (BOOL)finishExternalUpdate:(void *)a0 withFlags:(unsigned int)a1;
- (void)setHighAmbientAdaptation:(float)a0;
- (void)beginExternalUpdate:(void *)a0 usingSoftwareRenderer:(BOOL)a1;
- (id)hitTestAtPosition:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toContextId:(unsigned int)a1;
- (BOOL)setWhitePoint:(const struct { float x0[9]; } *)a0 rampDuration:(double)a1 error:(id *)a2;
- (id)_initWithCADisplayServer:(void *)a0;
- (void)resetConfiguration;
- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;
- (id)syncNotificationQueue;
- (void)activateReplay;
- (void)willUnblank;
- (void)removeClone:(id)a0;
- (void)presentSurface:(struct __IOSurface { } *)a0 withOptions:(id)a1;
- (void)abortContrastEnhancerRamp:(float *)a0;
- (void)setAmbient:(float)a0;
- (void)setContrastEnhancer:(float)a0 rampDuration:(double)a1;
- (struct __IOSurface { } *)acquireFrozenSurface;
- (void)setAccessibilityColorMatrix:(float *)a0 scale:(float)a1;
- (unsigned int)clientPortAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)powerStateDidChange:(id)a0;
- (void)setPotentialHeadroom:(float)a0;
- (void)setWhitePointMatrix:(const struct { float x0[9]; } *)a0 scale:(float)a1;
- (void)abortColorMatrixRamp:(float *)a0 scale:(float *)a1;
- (void)addClone:(id)a0 options:(id)a1;
- (void)renderForTime:(double)a0;
- (void)setCalibrationPhase:(unsigned int)a0 forIdentifier:(unsigned int)a1;
- (void)registerForNotifications:(id)a0 withBlock:(id /* block */)a1;
- (void)addFramePresentationTimestamp:(unsigned long long)a0;
- (void)registerForSyncNotifications:(id)a0 withBlock:(id /* block */)a1;
- (void)setGamutRemapConfigPlanes:(const struct { float x0; float x1; float x2; float x3; unsigned short x4; unsigned short x5; BOOL x6; BOOL x7; } *)a0 planeCount:(unsigned long long)a1 XYZToYuvCoefficients:(const float *)a2 YuvToXYZCoefficients:(const float *)a3;
- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (void)unregisterNotificationBlocks;
- (void)emitWhitePointError:(id *)a0;
- (void)freeze;
- (void)setGamutRemapMatrices:(const float *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (void)setBrightnessLimit:(float)a0;
- (void)setGammaAdjustment:(struct CGColorTRC { int x0; union { struct CGColorTRCParametric { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x0; struct CGColorTRCTable { unsigned long long x0; float *x1; struct CGColorTRCBoundaryExtension { float x0; float x1; } x2; struct CGColorTRCBoundaryExtension { float x0; float x1; } x3; } x1; } x1; }[3])a0;
- (BOOL)commitBrightness:(id *)a0 withBlock:(id /* block */)a1;
- (void)setMinimumRefreshRate:(float)a0;
- (BOOL)setDigitalModes:(id)a0;
- (BOOL)canUpdate:(BOOL)a0;
- (float)maximumRefreshRate;
- (void)copyDisplayTimingsFromDisplay:(id)a0;
- (void)postSyncNotification:(id)a0 payload:(id)a1;
- (void)setSyncNotificationQueue:(id)a0;
- (unsigned int)contextIdAtPosition:(struct CGPoint { double x0; double x1; })a0 excludingContextIds:(id)a1;
- (void)emitBrightnessError:(id *)a0;
- (void)setSDRBrightness:(float)a0;
- (void)unregisterSyncNotificationBlocks;
- (double)apertureOffset;
- (void)setBrightnessControlDisabled:(BOOL)a0;
- (void)setFilteredAmbient:(float)a0;
- (void)setApertureOffset:(double)a0;
- (void)setLowAmbientAdaptation:(float)a0;
- (BOOL)forceCommitBrightness:(id *)a0 withBlock:(id /* block */)a1;
- (void)removeAllClones;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformFromLayerId:(unsigned long long)a0 inContextId:(unsigned int)a1;
- (void)setMaximumRefreshRate:(float)a0;
- (float)minimumRefreshRate;
- (void)addClone:(id)a0;
- (void)update;
- (void)setNotificationQueue:(id)a0;
- (void)invalidate;
- (id)notificationQueue;

@end
