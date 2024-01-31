@class AVCPacketFilter, NSObject;
@protocol OS_dispatch_queue;

@interface AVCPacketRelaySocketConnection : NSObject <AVCPacketRelayConnectionProtocol> {
    int _unixSocket;
    BOOL _isConnectedSocket;
    struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } _remoteIPPort;
    unsigned int _remoteIPPortLength;
    NSObject<OS_dispatch_queue> *_queue;
    char *dataBuffer;
}

@property (readonly) unsigned char type;
@property BOOL isDemuxNeeded;
@property (copy) id /* block */ readHandler;
@property (retain) AVCPacketFilter *packetFilter;

- (void)dealloc;
- (int)start;
- (int)stop;
- (id)description;
- (void)readyToRead;
- (id)initWithSocket:(unsigned short)a0 remoteAddress:(id)a1 packetFilter:(id)a2;
- (void)receiveDataOnSocket:(unsigned short)a0;
- (BOOL)sendData:(const void *)a0 size:(unsigned int)a1 error:(id *)a2;

@end
