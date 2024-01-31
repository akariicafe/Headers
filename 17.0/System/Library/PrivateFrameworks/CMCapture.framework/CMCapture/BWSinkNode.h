@class NSString, FigStateMachine, NSMutableArray;

@interface BWSinkNode : BWNode {
    FigStateMachine *_stateMachine;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSMutableArray *_handlersToCallWhenIdle;
    NSMutableArray *_handlersToCallWhenActive;
    struct OpaqueFigSimpleMutex { } *_configurationHandlerLock;
    long long _liveConfigurationID;
    NSMutableArray *_configurationLiveHandlers;
    NSMutableArray *_configurationLiveIDs;
}

@property (readonly, copy, nonatomic) NSString *sinkID;
@property (readonly) NSString *currentStateDebugString;
@property (readonly) BOOL isActive;
@property (readonly) long long liveConfigurationID;

+ (void)initialize;

- (void)dealloc;
- (id)initWithSinkID:(id)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)addOutput:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)notifyWhenIdle:(id /* block */)a0;
- (void)notifyWhenActive:(id /* block */)a0;
- (void)notifyWhenConfigurationID:(long long)a0 becomesLive:(id /* block */)a1;

@end
