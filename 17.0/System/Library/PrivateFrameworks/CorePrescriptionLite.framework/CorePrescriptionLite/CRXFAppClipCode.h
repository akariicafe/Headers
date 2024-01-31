@class NSData;

@interface CRXFAppClipCode : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long lensType;
@property (readonly, nonatomic) unsigned long long leftRXID;
@property (readonly, nonatomic) unsigned long long leftCalibrationRXID;
@property (readonly, nonatomic) float leftDisplaySphere;
@property (readonly, nonatomic) float leftDisplayCylinder;
@property (readonly, nonatomic) float leftCalibrationSphere;
@property (readonly, nonatomic) float leftCalibrationCylinder;
@property (readonly, nonatomic) float leftAddVR;
@property (readonly, nonatomic) unsigned long long leftAxisID;
@property (readonly, nonatomic) unsigned long long leftCalibrationAxis;
@property (readonly, nonatomic) unsigned long long leftDisplayAxis;
@property (readonly, nonatomic) unsigned long long rightRXID;
@property (readonly, nonatomic) unsigned long long rightCalibrationRXID;
@property (readonly, nonatomic) float rightDisplaySphere;
@property (readonly, nonatomic) float rightDisplayCylinder;
@property (readonly, nonatomic) float rightCalibrationSphere;
@property (readonly, nonatomic) float rightCalibrationCylinder;
@property (readonly, nonatomic) float rightAddVR;
@property (readonly, nonatomic) unsigned long long rightAxisID;
@property (readonly, nonatomic) unsigned long long rightCalibrationAxis;
@property (readonly, nonatomic) unsigned long long rightDisplayAxis;
@property (readonly, nonatomic) unsigned int identifyingColorRGBA;
@property (readonly, nonatomic) NSData *secret;
@property (readonly, nonatomic) BOOL hasLeftRX;
@property (readonly, nonatomic) BOOL hasRightRX;
@property (readonly, nonatomic) BOOL hasOnlyLeftRX;
@property (readonly, nonatomic) BOOL hasOnlyRightRX;
@property (readonly, nonatomic) BOOL hasSingleLensRX;
@property (readonly, nonatomic) BOOL hasLeftAndRightRX;
@property (readonly, nonatomic) BOOL isLeftRXOutsideSupportedRange;
@property (readonly, nonatomic) BOOL isRightRXOutsideSupportedRange;
@property (readonly, nonatomic) BOOL cylLeftSignFlipped;
@property (readonly, nonatomic) BOOL cylRightSignFlipped;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 lensType:(unsigned long long)a1 cylLeftSignFlipped:(BOOL)a2 cylRightSignFlipped:(BOOL)a3 leftRXID:(unsigned long long)a4 leftCalibrationRXID:(unsigned long long)a5 leftDisplaySphere:(float)a6 leftDisplayCylinder:(float)a7 leftCalibrationSphere:(float)a8 leftCalibrationCylinder:(float)a9 leftAddVR:(float)a10 leftAxisID:(unsigned long long)a11 leftDisplayAxis:(unsigned long long)a12 leftCalibrationAxis:(unsigned long long)a13 rightRXID:(unsigned long long)a14 rightCalibrationRXID:(unsigned long long)a15 rightDisplaySphere:(float)a16 rightDisplayCylinder:(float)a17 rightCalibrationSphere:(float)a18 rightCalibrationCylinder:(float)a19 rightAddVR:(float)a20 rightAxisID:(unsigned long long)a21 rightDisplayAxis:(unsigned long long)a22 rightCalibrationAxis:(unsigned long long)a23 identifyingColor:(unsigned int)a24 secret:(id)a25;

@end
