@class NSString, NSDate;

@interface HMDActionSetModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSDate *lastExecutionDate;

+ (id)properties;
+ (id)cd_getMKFActionSetFromActionSet:(id)a0;
+ (id)cd_getMKFActionSetFromActionSetUUID:(id)a0;


@end
