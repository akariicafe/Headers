@interface VCTransportStreamGFT : NSObject {
    unsigned int _transportSessionID;
    int _vtpReceiveSocket;
    int _vtpCancelSocket;
    id /* block */ _callback;
    void *_callbackContext;
    int _vtpCallbackId;
    struct fd_set { int fds_bits[32]; } _readFDsForCallback;
    struct OpaqueCMBlockBuffer { } *_emptyBlockBuffer;
}

@property (nonatomic) struct tagVCMediaQueue { } *mediaQueue;

- (void)dealloc;
- (int)receivePacket:(struct { unsigned char x0; double x1; unsigned char x2[1472]; int x3; int x4; struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; } x5; } *)a0;
- (int)VCTransportStreamSendPacket:(struct { unsigned char x0; double x1; unsigned char x2[1472]; int x3; int x4; struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; } x5; } *)a0;
- (void)VCTransportStreamUnblock;
- (id)initWithTransportSessionID:(unsigned int)a0 options:(id)a1;
- (int)registerPacketCallbackContext:(void *)a0 callback:(id /* block */)a1;
- (int)unregisterPacketCallback;

@end
