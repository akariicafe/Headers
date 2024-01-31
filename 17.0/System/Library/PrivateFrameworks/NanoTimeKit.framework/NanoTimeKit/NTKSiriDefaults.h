@class NSSet, NSString, NTKFaceCollection;

@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver> {
    NTKFaceCollection *_faceCollection;
}

@property (nonatomic) BOOL watchHasMigratedAvailableDataSources;
@property (retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property (retain, nonatomic) NSSet *watchThirdPartyDataSources;
@property (readonly, nonatomic) BOOL hasMigratedDisabledDataSources;
@property (retain, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) BOOL isUpNextFaceCurrentlyActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_activeDeviceDidChange:(id)a0;
- (id)init;
- (void)_thirdPartyDataSourcesDidChange;
- (void)faceCollectionDidLoad:(id)a0;
- (void)_synchronizeDefaultsForKeys:(id)a0;
- (id)_domainAccesor;
- (void)_fetchNewFaceCollection;
- (void)migrateIfNecessary;
- (BOOL)hasMigratedDataSources;
- (void).cxx_destruct;
- (void)_disabledDataSourcesDidChange;

@end
