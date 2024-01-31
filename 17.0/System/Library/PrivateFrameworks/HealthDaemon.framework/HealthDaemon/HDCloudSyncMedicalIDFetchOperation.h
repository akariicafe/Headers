@class HDCloudSyncMedicalIDRecord, CKContainer, _HKMedicalIDData;

@interface HDCloudSyncMedicalIDFetchOperation : HDCloudSyncOperation {
    CKContainer *_container;
}

@property (readonly, nonatomic) _HKMedicalIDData *cloudMedicalIDData;
@property (readonly, nonatomic) HDCloudSyncMedicalIDRecord *medicalIDRecord;

+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 container:(id)a2;

@end
