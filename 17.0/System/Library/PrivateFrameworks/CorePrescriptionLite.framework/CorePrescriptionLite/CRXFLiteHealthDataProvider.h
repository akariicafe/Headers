@class NSString, HKHealthStore, NSPredicate, NSArray, NSObject, HKSampleType;
@protocol OS_os_log;

@interface CRXFLiteHealthDataProvider : NSObject {
    NSObject<OS_os_log> *_log;
    NSString *_deviceModel;
    HKHealthStore *_healthStore;
    HKSampleType *_sampleType;
    NSPredicate *_samplePredicate;
    NSArray *_sortDescriptors;
}

- (void).cxx_destruct;
- (void)fetchHealthRecordsWithCompletion:(id /* block */)a0;
- (void)getSyncTimesWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithDeviceModel:(id)a0;
- (BOOL)isCloudSyncDisabledError:(id)a0;

@end
