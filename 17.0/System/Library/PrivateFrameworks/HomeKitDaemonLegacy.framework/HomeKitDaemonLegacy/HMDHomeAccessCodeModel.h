@class NSString;

@interface HMDHomeAccessCodeModel : HMDBackingStoreModelObject

@property (copy) NSString *label;
@property (copy) NSString *value;

+ (id)properties;
+ (id)modelUUIDForHomeUUID:(id)a0 accessCodeValue:(id)a1;

- (id)initWithHomeUUID:(id)a0 value:(id)a1 label:(id)a2;

@end
