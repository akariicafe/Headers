@class NSXPCConnection;
@protocol DPCWatchPresenceDelegate;

@interface DPCManager : NSObject {
    NSXPCConnection *_xpcConnection;
}

@property (weak, nonatomic) id<DPCWatchPresenceDelegate> delegate;

- (void)dealloc;
- (void)setupXPCConnection;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)getCurrentWatchPresenceStatus;
- (void)registerForWatchPresence;
- (void)unregisterForWatchPresence;
- (void)setNewEvent:(unsigned long long)a0;
- (void)setStreamingMode:(BOOL)a0;
- (void)setWatchNewEvent:(unsigned long long)a0;
- (void)setupWatchPresenceDetection;
- (void)startWatchPresenceUpdate;
- (void)stopWatchPresenceUpdate;
- (void)updateWatchPresenceStatus;

@end
