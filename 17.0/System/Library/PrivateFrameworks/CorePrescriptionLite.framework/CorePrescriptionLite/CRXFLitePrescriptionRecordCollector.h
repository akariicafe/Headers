@class CRXFCalibrationDataDownloader, CRXUDispatchQueue, CRXFAppClipCodeTranscoder, CRXFKeychainAccess, CRXFLiteHealthDataProvider, NSObject;
@protocol OS_os_log;

@interface CRXFLitePrescriptionRecordCollector : NSObject {
    NSObject<OS_os_log> *_log;
    CRXFLiteHealthDataProvider *_healthDataProvider;
    CRXFCalibrationDataDownloader *_calibrationDataDownloader;
    CRXFKeychainAccess *_keychainAccess;
    CRXUDispatchQueue *_serialQueue;
    CRXFAppClipCodeTranscoder *_accTranscoder;
}

- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (void)fetchPrescriptionRecordsWithCompletion:(id /* block */)a0;
- (id)initWithDeviceModel:(id)a0 timeout:(double)a1;
- (id)prescriptionRecordWithEnrollmentName:(id)a0 enrollmentDate:(id)a1 accPayload:(id)a2 leftCalibrationData:(id)a3 rightCalibrationData:(id)a4;

@end
