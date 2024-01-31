@class NSDictionary;

@interface NWUsageTargetSelector : NSObject {
    BOOL _hasExplicitTCP;
    BOOL _explicitTCPValue;
    BOOL _hasExplicitUDP;
    BOOL _explicitUDPValue;
    BOOL _hasExplicitUDPSubFlows;
    BOOL _explicitUDPSubFlowsValue;
    BOOL _hasExplicitChannels;
    BOOL _explicitChannelsValue;
    BOOL _hasExplicitSockets;
    BOOL _explicitSocketsValue;
    BOOL _hasExplicitQUIC;
    BOOL _explicitQUICValue;
    BOOL _hasExplicitUserlandConnections;
    BOOL _explicitUserlandConnectionsValue;
    BOOL _connHasNetAccess;
}

@property (retain) NSDictionary *suppliedParams;
@property unsigned long long filter;
@property unsigned long long connFilter;
@property unsigned long long events;

- (id)description;
- (id)initWithSelection:(id)a0;
- (id)initWithMultipleSelections:(id)a0;
- (void).cxx_destruct;
- (BOOL)applySelection:(id)a0;
- (BOOL)shouldAddProvider:(int)a0;

@end
