@class NSString, HKQuantityRange, NSObject;
@protocol OS_os_log;

@interface CRXFVisionPrescriptionURLDecoder : NSObject {
    NSObject<OS_os_log> *_log;
    NSString *_deviceModel;
    HKQuantityRange *_sphereRange;
    HKQuantityRange *_cylinderRange;
    HKQuantityRange *_axisRange;
}

- (void).cxx_destruct;
- (unsigned short)computeCRC16ForString:(id)a0;
- (unsigned short)computeURLChecksum:(id)a0;
- (id)initWithDeviceModel:(id)a0;
- (id)prescriptionFromURL:(id)a0 withDescription:(id)a1;

@end
