@class HMDNotificationRegistryCharacteristicsRequest, NSArray;

@interface HMDNotificationRegistryCoreDataCharacteristicsRequest : HMFObject

@property (readonly) HMDNotificationRegistryCharacteristicsRequest *request;
@property (readonly) NSArray *characteristics;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequest:(id)a0 characteristics:(id)a1;

@end
