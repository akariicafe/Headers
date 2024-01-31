@class NSString, IPXPCEventSubscriptionBlackhole, NSObject;
@protocol IPProgressServerBehaviorDelegate, OS_dispatch_queue;

@interface IPProgressStubBehavior : NSObject <IPProgressServerBehavior> {
    IPXPCEventSubscriptionBlackhole *_streamBlackhole;
}

@property (weak, nonatomic) id<IPProgressServerBehaviorDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (id)initWithEventStreamName:(id)a0;
- (void).cxx_destruct;
- (void)identityWasUninstalled:(id)a0;
- (void)progressForIdentity:(id)a0 changed:(id)a1;
- (void)progressForIdentity:(id)a0 finishedWithState:(unsigned long long)a1;
- (void)progressForIdentityInitiated:(id)a0;

@end
