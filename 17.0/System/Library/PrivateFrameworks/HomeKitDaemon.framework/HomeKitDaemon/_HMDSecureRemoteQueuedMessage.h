@class HMFTimer, HMDRemoteMessage, NSString, NSArray;

@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject>

@property (readonly, nonatomic) HMDRemoteMessage *message;
@property (readonly, nonatomic) HMFTimer *timer;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
