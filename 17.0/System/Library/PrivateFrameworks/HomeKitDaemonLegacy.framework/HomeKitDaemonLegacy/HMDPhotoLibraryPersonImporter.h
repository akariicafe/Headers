@class NSUUID, NSString, HMIHomePersonManager, HMDCloudPhotosSettingObserver, HMDPhotoLibrary, NSObject, HMDPhotoLibraryObserver, HMIExternalPersonManager;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMDPersonDataSource;

@interface HMDPhotoLibraryPersonImporter : HMFObject <HMDPhotoLibraryObserverDelegate, HMFLogging, HMDPersonDataInterface>

@property (readonly, copy) NSUUID *UUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDPhotoLibrary *photoLibrary;
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (retain) HMDPhotoLibraryObserver *photoLibraryObserver;
@property (copy) id /* block */ photoLibraryObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMIExternalPersonManager *photosPersonManager;

+ (id)logCategory;

- (id)initWithUUID:(id)a0;
- (void)_configure;
- (void)_registerForNotifications;
- (void)_unconfigure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)_updatePersonsUsingBatchChange:(id)a0;
- (void)_handleUpdatedCloudPhotosSetting;
- (void)_submitLogEventForFaceCrops:(id)a0;
- (void)_submitLogEventsForUpdatedPersonsWithCurrentPersons:(id)a0 previousPersons:(id)a1;
- (void)_updateFaceCropsForAllPersonsUsingCurrentPersons:(id)a0 batchChange:(id)a1;
- (void)_updateFaceCropsForPersons:(id)a0 usingBatchChange:(id)a1;
- (void)_updateFaceCropsForPersonsWithUpdatedPhotosFaceCropsUsingCurrentPersons:(id)a0 batchChange:(id)a1;
- (void)_updateFaceCropsWithCurrentPhotoLibraryFaceCrops:(id)a0 forPersonWithUUID:(id)a1 usingBatchChange:(id)a2;
- (void)_updatePersonsAndFaceCrops:(BOOL)a0;
- (void)configureWithDataSource:(id)a0 home:(id)a1;
- (void)handleCloudPhotosEnabledDidChangeNotification:(id)a0;
- (id)initWithUUID:(id)a0 photoLibrary:(id)a1 workQueue:(id)a2 cloudPhotosSettingObserver:(id)a3 logEventSubmitter:(id)a4;
- (void)observerDidObserveMajorChange:(id)a0;
- (void)observerDidObserveMinorChange:(id)a0;

@end
