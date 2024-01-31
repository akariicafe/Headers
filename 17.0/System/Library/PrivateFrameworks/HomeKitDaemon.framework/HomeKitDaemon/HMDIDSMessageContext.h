@class NSUUID, HMFMessageDestination, NSDictionary;

@interface HMDIDSMessageContext : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDestination *destination;
@property (readonly, copy) NSDictionary *userInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 destination:(id)a1 userInfo:(id)a2;

@end
