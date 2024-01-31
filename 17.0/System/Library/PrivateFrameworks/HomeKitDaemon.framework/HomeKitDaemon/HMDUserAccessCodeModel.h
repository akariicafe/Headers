@class NSString, NSUUID;

@interface HMDUserAccessCodeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *value;
@property (retain) NSUUID *changedByUserUUID;
@property (retain) NSUUID *hh2ModelID;

+ (id)properties;
+ (id)modelUUIDWithUUID:(id)a0;

- (id)initWithUserUUID:(id)a0;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
