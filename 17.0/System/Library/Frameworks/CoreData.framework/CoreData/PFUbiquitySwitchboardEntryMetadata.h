@class PFUbiquityLocation, NSString, NSSQLCore, PFUbiquitySwitchboardCacheWrapper, PFUbiquityBaselineHeuristics, _PFUbiquityRecordsExporter, NSMutableSet, NSPersistentStoreCoordinator, _PFUbiquityRecordsImporter, PFUbiquityRecordsImporterSchedulingContext, NSObject;
@protocol OS_dispatch_queue;

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_activeModelVersionHash;
    NSMutableSet *_stores;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    _PFUbiquityRecordsImporter *_importer;
    _PFUbiquityRecordsExporter *_exporter;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    BOOL _useLocalStorage;
    BOOL _useLocaAccount;
    NSObject<OS_dispatch_queue> *_privateQueue;
    PFUbiquityBaselineHeuristics *_baselineHeuristics;
}

- (void)dealloc;
- (id)initWithLocalPeerID:(id)a0 ubiquityRootLocation:(id)a1 localRootLocation:(id)a2 storeName:(id)a3 andPrivateQueue:(id)a4;

@end
