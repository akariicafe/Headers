@class NSUUID, NSArray, HMBModelInfiniteQuery;

@interface HMDIDSActivityRegistrationModel : HMBModel

@property (class, readonly, nonatomic) HMBModelInfiniteQuery *registeredDevicesQuery;

@property (retain, nonatomic) NSUUID *subjectDeviceIdentifier;
@property (retain, nonatomic) NSArray *subActivities;

+ (id)hmbProperties;
+ (id)hmbQueries;

@end
