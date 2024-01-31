@class HDCloudSyncMedicalIDRecord, _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPushOperation : HDCloudSyncOperation

@property (retain, nonatomic) _HKMedicalIDData *cloudMedicalIDData;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPush;
@property (retain, nonatomic) HDCloudSyncMedicalIDRecord *medicalIDRecord;

- (void)main;
- (void).cxx_destruct;

@end
