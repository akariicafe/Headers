@class NSDictionary, NSObject;
@protocol OS_os_log;

@interface CRXFAppClipCodeTranscoder : NSObject {
    NSObject<OS_os_log> *_log;
    NSDictionary *_IDToRXMap;
    NSDictionary *_RXToIDMap;
    NSDictionary *_IDToAxisMap;
    NSDictionary *_AxisToIDMap;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)encodeAppClipCode:(id)a0 toData:(id)a1 error:(id *)a2;
- (unsigned long long)colorCodeForColor:(unsigned int)a0;
- (unsigned int)colorForColorCode:(unsigned long long)a0;
- (id)decodeAppClipCodeFromBytes:(const char *)a0 length:(unsigned long long)a1 allowUnsupportedRX:(BOOL)a2 error:(id *)a3;
- (id)decodeAppClipCodeFromData:(id)a0 allowUnsupportedRX:(BOOL)a1 error:(id *)a2;
- (id)decodeAppClipCodeV1FromBuffer:(id)a0 allowUnsupportedRX:(BOOL)a1 error:(id *)a2;
- (id)decodeAppClipCodeV2FromBuffer:(id)a0 allowUnsupportedRX:(BOOL)a1 error:(id *)a2;
- (id)decodeAppClipCodeV3FromBuffer:(id)a0 allowUnsupportedRX:(BOOL)a1 error:(id *)a2;
- (id)decodeAppClipCodeV4FromBuffer:(id)a0 allowUnsupportedRX:(BOOL)a1 error:(id *)a2;
- (unsigned long long)decodeCalibrationRXID:(unsigned long long *)a0 calibrationSphere:(float *)a1 calibrationCylinder:(float *)a2 calibrationAxis:(unsigned long long *)a3 addVR:(float *)a4 displaySphere:(float *)a5 displayCylinder:(float *)a6 displayAxis:(unsigned long long *)a7 fromRXID:(unsigned long long)a8 RXOffsetID:(unsigned long long)a9 cylinderSignFlipped:(BOOL)a10 axisID:(unsigned long long)a11 allowUnsupportedRX:(BOOL)a12;
- (BOOL)encodeAppClipCode:(id)a0 toBytes:(char *)a1 length:(unsigned long long)a2 error:(id *)a3;
- (BOOL)encodeAppClipCodeV1:(id)a0 toBuffer:(id)a1 error:(id *)a2;
- (BOOL)encodeAppClipCodeV2:(id)a0 toBuffer:(id)a1 error:(id *)a2;
- (BOOL)encodeAppClipCodeV3:(id)a0 toBuffer:(id)a1 error:(id *)a2;
- (BOOL)encodeAppClipCodeV4:(id)a0 toBuffer:(id)a1 error:(id *)a2;
- (unsigned long long)encodeSphere:(float)a0 cylinder:(float)a1 axis:(unsigned long long)a2 toRXID:(unsigned long long *)a3 axisID:(unsigned long long *)a4;
- (id)errorForStatus:(unsigned long long)a0 leftLens:(BOOL)a1;
- (id)generateAppClipCodeWithVersion:(unsigned long long)a0 lensType:(unsigned long long)a1 haveLeftLens:(BOOL)a2 leftSphere:(float)a3 leftCylinder:(float)a4 leftAxis:(unsigned long long)a5 leftAddVR:(float)a6 haveRightLens:(BOOL)a7 rightSphere:(float)a8 rightCylinder:(float)a9 rightAxis:(unsigned long long)a10 rightAddVR:(float)a11 identifyingColor:(unsigned int)a12 secret:(id)a13 error:(id *)a14;
- (BOOL)getACCComfortIndexForValue:(float)a0 index:(unsigned int *)a1;
- (unsigned long long)lookUpAxisID:(unsigned long long *)a0 forAxisValue:(unsigned long long)a1;
- (unsigned long long)lookUpAxisValue:(unsigned long long *)a0 forAxisID:(unsigned long long)a1;
- (unsigned long long)lookUpRXID:(unsigned long long *)a0 forSphereValue:(float)a1 cylinderValue:(float)a2;
- (unsigned long long)lookUpSphereValue:(float *)a0 cylinderValue:(float *)a1 forRXID:(unsigned long long)a2;
- (id)mergeLeftAppClipCode:(id)a0 withRightAppClipCode:(id)a1 error:(id *)a2;
- (unsigned long long)payloadLengthForAppClipCodeVersion:(unsigned long long)a0;

@end
