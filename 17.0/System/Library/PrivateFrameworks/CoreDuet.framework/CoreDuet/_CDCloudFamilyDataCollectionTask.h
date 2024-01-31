@class NSDate, NSString, NSMutableDictionary, _CDInteractionStore, HKMedicalIDStore, CNContactStore, NSObject, _CDCloudFamilyDataCollectionSession, _PASLazyResult;
@protocol OS_xpc_object;

@interface _CDCloudFamilyDataCollectionTask : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    _CDInteractionStore *_interactionStore;
    CNContactStore *_contactStore;
    HKMedicalIDStore *_medicalIDStore;
    NSMutableDictionary *_videoBundleIDLookup;
    _CDCloudFamilyDataCollectionSession *_session;
    double _samplingRate;
    unsigned long long _maxBatches;
    unsigned long long _daysPerBatch;
    unsigned long long _airPlayVideoEventCount;
    _PASLazyResult *_eventDictState;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (copy, nonatomic) id /* block */ submissionBlock;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;

@end
