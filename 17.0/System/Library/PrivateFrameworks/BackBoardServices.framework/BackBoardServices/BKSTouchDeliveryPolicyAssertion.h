@class NSObject;
@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicyAssertion : NSObject {
    NSObject<OS_xpc_object> *_listener;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)endpoint;

@end
