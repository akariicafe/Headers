@class NSString, HMDCoreData, NSMutableSet, NSManagedObjectContext;

@interface HMDHH2CoreDataCloudKitMirroringObserver : HMFObject <HMFLogging, HMDCoreDataNotificationListener>

@property (retain, nonatomic) NSMutableSet *objectIdsToMonitor;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) HMDCoreData *coreData;
@property (retain, nonatomic) NSString *storeIdentifier;
@property (retain, nonatomic) NSManagedObjectContext *cachedMOC;
@property (nonatomic) BOOL isExportProgressRequestAlreadyInProgress;
@property (nonatomic) unsigned long long numberOfIgnoredExportProgressRequest;
@property (readonly, nonatomic) unsigned long long totalObjectsToMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)stopMonitoring;
- (void)coreData:(id)a0 persistentStoreWithIdentifierDidChange:(id)a1;
- (void).cxx_destruct;
- (void)startMonitoring:(id /* block */)a0;
- (void)callClientsCompletionHandler:(id)a0;
- (id)initWithObjectIds:(id)a0 coreData:(id)a1 storeIdentifier:(id)a2;
- (void)processExportResult:(id)a0 withError:(id)a1;
- (void)verifyModelsPushedToCloudKit;
- (BOOL)verifyModelsPushedToCloudKitUsingCoreDataExportStream;

@end
