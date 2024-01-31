@class NSString;

@interface HMDNotificationRegistryRequest : HMFObject

@property (readonly) BOOL enable;
@property (readonly, copy) NSString *userID;
@property long long retryCount;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(BOOL)a0 userID:(id)a1;

@end
