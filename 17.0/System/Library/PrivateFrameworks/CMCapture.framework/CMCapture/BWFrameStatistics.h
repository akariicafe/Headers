@class NSString, NSDictionary, NSArray, NSData;

@interface BWFrameStatistics : NSObject {
    NSString *_portType;
    NSDictionary *_aeStatistics;
    NSArray *_displayStrobeRGBEstimate;
    NSData *_colorCorrectionMatrix;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; float x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; float x14; float x15; double x16; unsigned int x17; unsigned int x18; unsigned int x19; BOOL x20; BOOL x21; BOOL x22; int x23; BOOL x24; float x25; int x26; BOOL x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; float x36; id x37; unsigned int x38; float x39; int x40; BOOL x41; BOOL x42; unsigned short x43; unsigned short x44; unsigned short x45; unsigned short x46; unsigned short x47; unsigned short x48; unsigned short x49; unsigned short x50; unsigned short x51; unsigned int x52; unsigned int x53; } *_storage;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } pts;
@property (readonly, nonatomic) float currentFrameRate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalCropRect;
@property (readonly, nonatomic) double eit;
@property (readonly, nonatomic) unsigned int luxLevel;
@property (readonly, nonatomic) unsigned int conversionGain;
@property (readonly, nonatomic) unsigned int readNoise_1x;
@property (readonly, nonatomic) unsigned int readNoise_8x;
@property (readonly, nonatomic) float normalizedSNR;
@property (readonly, nonatomic) float normalizedQsumSNR;
@property (readonly, nonatomic) double integrationTime;
@property (readonly, nonatomic) unsigned int agc;
@property (readonly, nonatomic) unsigned int ispDGain;
@property (readonly, nonatomic) unsigned int sensorDGain;
@property (readonly, nonatomic) float ispDGainRangeExpansionFactor;
@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) float baseISO;
@property (readonly, nonatomic) double exposureBias;
@property (readonly, nonatomic) unsigned int aeAverage;
@property (readonly, nonatomic) unsigned int aeFaceAverage;
@property (readonly, nonatomic) unsigned int aeTarget;
@property (readonly, nonatomic) BOOL aeLimitsReached;
@property (readonly, nonatomic) BOOL aeStable;
@property (readonly, nonatomic) BOOL aeLocked;
@property (readonly, nonatomic) int motionFromAEMatrix;
@property (readonly, nonatomic) NSDictionary *aeStatistics;
@property (readonly, nonatomic) BOOL hrEnabled;
@property (readonly, nonatomic) float sifrGain;
@property (readonly, nonatomic) int afStatus;
@property (readonly, nonatomic) BOOL afLocked;
@property (readonly, nonatomic) int afStationaryCount;
@property (readonly, nonatomic) int focusingMethod;
@property (readonly, nonatomic) int focusPosition;
@property (readonly, nonatomic) int focusPositionStep;
@property (readonly, nonatomic) int logicalFocusLensPosition;
@property (readonly, nonatomic) int logicalFocusLensPositionStep;
@property (readonly, nonatomic) int filteredLogicalFocusLensPosition;
@property (readonly, nonatomic) int filteredLogicalFocusLensPositionStep;
@property (readonly, nonatomic) float focusDistance;
@property (readonly, nonatomic) NSString *afRecommendedMasterPortType;
@property (readonly, nonatomic) unsigned int motionDataStatus;
@property (readonly, nonatomic) float motionDataBiasErrorEstimate;
@property (readonly, nonatomic) int ltmCurve;
@property (readonly, nonatomic) NSArray *displayStrobeRGBEstimate;
@property (readonly, nonatomic) BOOL awbStable;
@property (readonly, nonatomic) BOOL awbLocked;
@property (readonly, nonatomic) unsigned short awbRGain;
@property (readonly, nonatomic) unsigned short awbGGain;
@property (readonly, nonatomic) unsigned short awbBGain;
@property (readonly, nonatomic) unsigned short awbComboRGain;
@property (readonly, nonatomic) unsigned short awbComboGGain;
@property (readonly, nonatomic) unsigned short awbComboBGain;
@property (readonly, nonatomic) unsigned short awbSkinRGain;
@property (readonly, nonatomic) unsigned short awbSkinGGain;
@property (readonly, nonatomic) unsigned short awbSkinBGain;
@property (readonly, nonatomic) unsigned int awbSpatialCCMMixingFactor;
@property (readonly, nonatomic) unsigned int cct;
@property (readonly, nonatomic) NSData *colorCorrectionMatrix;

- (void)dealloc;
- (void)_setColorCorrectionMatrix:(id)a0;
- (void)_setAEStatistics:(id)a0;
- (id)description;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; float x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; float x14; float x15; double x16; unsigned int x17; unsigned int x18; unsigned int x19; BOOL x20; BOOL x21; BOOL x22; int x23; BOOL x24; float x25; int x26; BOOL x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; float x36; id x37; unsigned int x38; float x39; int x40; BOOL x41; BOOL x42; unsigned short x43; unsigned short x44; unsigned short x45; unsigned short x46; unsigned short x47; unsigned short x48; unsigned short x49; unsigned short x50; unsigned short x51; unsigned int x52; unsigned int x53; } *)frameStatisticsStorage;
- (void)_setDisplayStrobeRGBEstimate:(id)a0;

@end
