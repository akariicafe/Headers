@class TKSmartCardSlotEngine, NSXPCConnection;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {
    TKSmartCardSlotEngine *_slot;
    BOOL _transmitting;
}

@property BOOL valid;
@property BOOL active;
@property long long endPolicy;
@property (readonly, weak, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)transmit:(id)a0 reply:(id /* block */)a1;
- (id)initWithSlot:(id)a0 connection:(id)a1;
- (void)setSessionEndPolicy:(long long)a0;
- (void)terminateWithReply:(id /* block */)a0;

@end
