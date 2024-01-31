@class NSString, NSDictionary;

@interface HMDApplicationDataModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *appDataDictionary;

+ (id)properties;
+ (id)schemaHashRoot;
+ (id)cd_modelWithMKFHomeManager:(id)a0;

- (id)cd_childrenExcluding:(id)a0 error:(id *)a1;
- (id)cd_currentManagedObjectInContext:(id)a0 error:(id *)a1;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;
- (BOOL)cd_updateManagedObjectInContext:(id)a0 error:(id *)a1;

@end
