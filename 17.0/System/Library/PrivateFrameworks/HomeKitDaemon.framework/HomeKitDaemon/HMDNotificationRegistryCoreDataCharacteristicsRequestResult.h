@class NSArray, HMDNotificationRegistryCoreDataCharacteristicsRequest;

@interface HMDNotificationRegistryCoreDataCharacteristicsRequestResult : HMFObject

@property (readonly) HMDNotificationRegistryCoreDataCharacteristicsRequest *coreDataRequest;
@property (readonly) BOOL didSucceed;
@property (readonly) BOOL didModify;
@property (readonly) NSArray *modifiedCharacteristics;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoreDataRequest:(id)a0 didSucceed:(BOOL)a1 didModify:(BOOL)a2 modifiedCharacteristics:(id)a3;

@end
