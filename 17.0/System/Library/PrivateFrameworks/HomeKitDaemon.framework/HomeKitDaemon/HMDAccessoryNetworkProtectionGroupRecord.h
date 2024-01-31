@class HMDAccessoryNetworkProtectionGroup;

@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isPersisted) BOOL persisted;
@property (readonly) HMDAccessoryNetworkProtectionGroup *group;

+ (id)recordWithGroup:(id)a0 active:(BOOL)a1 persisted:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 active:(BOOL)a1 persisted:(BOOL)a2;

@end
