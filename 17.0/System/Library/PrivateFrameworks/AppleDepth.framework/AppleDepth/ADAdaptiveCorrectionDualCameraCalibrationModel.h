@interface ADAdaptiveCorrectionDualCameraCalibrationModel : NSObject

@property (nonatomic) float focalLengthPixRef;
@property (nonatomic) float focalLengthPixAux;
@property (nonatomic) struct CGPoint { double x; double y; } opticalCenterRef;
@property (nonatomic) struct CGPoint { double x; double y; } opticalCenterAux;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } refToAuxExtrinsic;

- (long long)computeStereoRectificationHomographiesMappingRectTeleToTele:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 rectTeleToWide:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a1 teleToRectTele:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a2;

@end
