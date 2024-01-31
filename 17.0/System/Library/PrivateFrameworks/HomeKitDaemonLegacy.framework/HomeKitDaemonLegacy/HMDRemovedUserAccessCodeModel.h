@class NSString, NSData, HMRemovedUserInfo;

@interface HMDRemovedUserAccessCodeModel : HMDBackingStoreModelObject

@property (copy) NSString *accessCode;
@property (retain) NSData *removedUserInfoData;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;

+ (id)properties;
+ (id)modelUUIDForHomeUUID:(id)a0 removedUserInfo:(id)a1 accessCode:(id)a2;

- (id)initWithRemovedUserInfo:(id)a0 accessCode:(id)a1 homeUUID:(id)a2;

@end
