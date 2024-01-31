@class NSString, NEIKEv2PacketTunnelProvider, NWInterface, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NEIKEv2MOBIKE : NSObject <NSObject> {
    BOOL _mobikeInProgress;
    BOOL _mobikePending;
    BOOL _mobikeReasserting;
    BOOL _mobikeEarlyDisconnect;
    NSString *_overrideServerPortString;
    NEIKEv2PacketTunnelProvider *_tunnelProvider;
    NSObject<OS_dispatch_source> *_mobikeWaitTimer;
    NSObject<OS_dispatch_queue> *_mobikeQueue;
    NWInterface *_mobikeInterface;
    NWInterface *_mobikeTransportInterface;
    long long _mobikePathStatus;
    unsigned long long _mobikeTries;
    NSString *_mobikeServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
