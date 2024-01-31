@class MPPlaybackArchive, NSString, NSSet, NSNumber;

@interface HMDMediaPlaybackActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSSet *services;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (retain, nonatomic) NSNumber *state;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)validate;
- (void)loadModelWithActionInformation:(id)a0;
- (BOOL)validForStorage;
- (id)dependentUUIDs;
- (id)_profilesFromManagedObject:(id)a0;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
