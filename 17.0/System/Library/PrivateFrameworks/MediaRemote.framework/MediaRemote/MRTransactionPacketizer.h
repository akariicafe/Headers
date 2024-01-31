@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject {
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)packetize:(id)a0 packageSize:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)unpacketize:(id)a0 completion:(id /* block */)a1;

@end
