@class NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue, AXRemoteReceiverDelegate;

@interface AXRemoteReceiver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<AXRemoteReceiverDelegate> delegate;
@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;

- (void).cxx_destruct;
- (id)initWithEventID:(id)a0 delegate:(id)a1;

@end
