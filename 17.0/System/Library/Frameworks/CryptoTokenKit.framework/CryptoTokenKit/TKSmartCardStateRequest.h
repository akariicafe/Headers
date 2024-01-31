@interface TKSmartCardStateRequest : NSObject

@property unsigned long long activeStateNotifications;
@property long long stateWhenRequested;
@property (copy) id /* block */ replyNextState;
@property (copy) id /* block */ replyFlushedState;

- (void).cxx_destruct;

@end
