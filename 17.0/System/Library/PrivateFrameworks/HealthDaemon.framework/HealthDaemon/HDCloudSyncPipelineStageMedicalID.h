@class HDCloudSyncMedicalIDRecord, _HKMedicalIDData;

@interface HDCloudSyncPipelineStageMedicalID : HDCloudSyncPipelineStage {
    _HKMedicalIDData *_localMedicalIDData;
    _HKMedicalIDData *_cloudMedicalIDData;
    HDCloudSyncMedicalIDRecord *_medicalIDRecord;
}

- (void)main;
- (void).cxx_destruct;

@end
