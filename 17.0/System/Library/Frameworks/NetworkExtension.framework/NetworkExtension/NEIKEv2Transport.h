@class NSString, NWAddressEndpoint, NWInterface, NSObject, NSMutableArray;
@protocol NEIKEv2PacketDelegate, OS_nw_connection, OS_dispatch_queue;

@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver> {
    BOOL _connected;
    BOOL _cancelled;
    NWAddressEndpoint *_local;
    NWAddressEndpoint *_remote;
    NWInterface *_interface;
    unsigned long long _transportType;
    id<NEIKEv2PacketDelegate> _packetDelegate;
    NSObject<OS_nw_connection> *_connection;
    NSMutableArray *_connectedBlocks;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSMutableArray *_clients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)receivePacketData:(id)a0;

@end
