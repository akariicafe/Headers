@class NSString, NSData;

@interface HMDShortcutActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSData *data;

+ (id)properties;
+ (Class)backedObjectClass;

- (void)loadModelWithActionInformation:(id)a0;

@end
