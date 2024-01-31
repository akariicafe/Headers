@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKATransientSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier;

+ (id)logger;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSubscriptionIdentifier:(id)a0;
- (BOOL)isEqualToTransientSubscription:(id)a0;

@end
