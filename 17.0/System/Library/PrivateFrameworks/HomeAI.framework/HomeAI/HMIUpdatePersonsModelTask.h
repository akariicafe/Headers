@class NSUUID;
@protocol HMIPersonManagerDataSource;

@interface HMIUpdatePersonsModelTask : HMIHomeTask

@property (readonly) NSUUID *sourceUUID;
@property (readonly) id<HMIPersonManagerDataSource> dataSource;
@property (readonly, getter=isExternalLibrary) BOOL externalLibrary;
@property (readonly, getter=shouldRemoveExcessFaceCrops) BOOL removeExcessFaceCrops;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)limitEnforcedSubsetFromPersons:(id)a0;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 sourceUUID:(id)a2 dataSource:(id)a3 externalLibrary:(BOOL)a4 removeExcessFaceCrops:(BOOL)a5;
- (void)mainInsideAutoreleasePool;
- (void)subsampleFacesForPersons:(id)a0 withFaceObservationsMap:(id)a1 dataSource:(id)a2 vnUUIDToFaceCropUUIDMap:(id)a3;

@end
