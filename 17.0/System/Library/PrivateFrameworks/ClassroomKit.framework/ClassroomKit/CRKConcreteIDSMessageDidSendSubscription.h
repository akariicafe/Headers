@protocol CRKConcreteIDSMessageDidSendSubscriptionDelegate;

@interface CRKConcreteIDSMessageDidSendSubscription : NSObject <CRKResumable, CRKCancelable>

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isResumed) BOOL resumed;
@property (weak, nonatomic) id<CRKConcreteIDSMessageDidSendSubscriptionDelegate> delegate;

- (id)initWithHandler:(id /* block */)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (void)receiveMessageIdentifier:(id)a0 didSucceed:(BOOL)a1 error:(id)a2;

@end
