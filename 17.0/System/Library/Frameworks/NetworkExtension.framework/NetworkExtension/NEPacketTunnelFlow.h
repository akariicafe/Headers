@class NSObject, NSDictionary, NSFileHandle;
@protocol OS_dispatch_queue;

@interface NEPacketTunnelFlow : NSObject {
    BOOL _handlerSetup;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _packetObjectHandler;
    char **_packetDataArray;
    unsigned int *_packetProtocols;
    unsigned long long *_packetLengths;
    unsigned long long _buffersSize;
    NSDictionary *_uuidMap;
    long long _interfaceType;
    struct NEVirtualInterface_s { } *_interface;
    id /* block */ _packetHandler;
}

@property (retain) NSFileHandle *socket;

- (void)dealloc;
- (void).cxx_destruct;
- (void)readPacketObjectsWithCompletionHandler:(id /* block */)a0;
- (void)readPacketsWithCompletionHandler:(id /* block */)a0;
- (BOOL)writePacketObjects:(id)a0;
- (BOOL)writePackets:(id)a0 withProtocols:(id)a1;

@end
