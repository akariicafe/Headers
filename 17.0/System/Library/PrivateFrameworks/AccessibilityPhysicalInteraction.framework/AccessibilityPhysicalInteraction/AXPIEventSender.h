@class NSObject;
@protocol OS_dispatch_queue;

@interface AXPIEventSender : NSObject {
    struct __IOHIDEventSystemClient { } *_ioSystemPostBackClient;
    NSObject<OS_dispatch_queue> *_eventSendingQueue;
}

@property (nonatomic) unsigned long long senderID;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)sendEventRepresentation:(id)a0;
- (void)sendIOHIDEventRef:(struct __IOHIDEvent { } *)a0;

@end
