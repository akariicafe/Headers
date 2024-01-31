@class NSUUID, HMFMessage;
@protocol HMFTimerManagerTimerContext;

@interface HMDHomePrimaryResidentMessagingHandlerPendingMessageContext : NSObject

@property (readonly, nonatomic) HMFMessage *message;
@property (readonly, nonatomic) id<HMFTimerManagerTimerContext> messageTimerContext;
@property (retain, nonatomic) id<HMFTimerManagerTimerContext> queueTimerContext;
@property (retain, nonatomic) NSUUID *lastPrimaryResidentDestinationUUID;
@property (nonatomic, getter=isMessageInFlight) BOOL messageInFlight;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 messageTimerContext:(id)a1;

@end
