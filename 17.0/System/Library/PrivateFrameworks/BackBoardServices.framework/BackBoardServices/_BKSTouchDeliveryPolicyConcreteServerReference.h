@class NSString, _BKSTouchDeliveryPolicyConcreteServerInterface;

@interface _BKSTouchDeliveryPolicyConcreteServerReference : NSObject <BKSTouchDeliveryPolicyServerInterface>

@property (retain, nonatomic) _BKSTouchDeliveryPolicyConcreteServerInterface *server;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)ipc_addPolicy:(id)a0;

@end
