@class NSError;

@interface CRXFLitePrescriptionRecordFetchSummary : NSObject

@property (readonly, nonatomic) NSError *healthKitError;
@property (readonly, nonatomic) NSError *keychainError;
@property (readonly, nonatomic) unsigned long long healthRecordCount;
@property (readonly, nonatomic) unsigned long long asaKeyCount;
@property (readonly, nonatomic) unsigned long long calibrationDataDownloadFailureCount;
@property (readonly, nonatomic) double meanCalibrationDataDownloadTime;
@property (readonly, nonatomic) double totalFetchTime;

- (void).cxx_destruct;
- (id)initWithHealthKitError:(id)a0 keychainError:(id)a1 healthRecordCount:(unsigned long long)a2 asaKeyCount:(unsigned long long)a3 calibrationDataDownloadFailureCount:(unsigned long long)a4 meanCalibrationDataDownloadTime:(double)a5 totalFetchTime:(double)a6;

@end
