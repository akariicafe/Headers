@class NSMutableArray;
@protocol IPXPCEventStateUpdateStreamSubscriberDelegate;

@interface IPXPCEventStateUpdateStreamSubscriber : NSObject {
    NSMutableArray *_queuedMessages;
    BOOL _completedHandshake;
}

@property (readonly) unsigned long long token;
@property (weak, nonatomic) id<IPXPCEventStateUpdateStreamSubscriberDelegate> delegate;

- (id)initWithToken:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)beginHandshake;
- (void)sendOrEnqueueUpdateMessage:(id)a0;

@end
