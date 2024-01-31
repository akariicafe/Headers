@class VCEmulatedNetwork, VCDatagramChannelIDS;

@interface VCDatagramChannelIDSEmulated : VCDatagramChannelIDS {
    long long _mode;
    VCDatagramChannelIDS *_idsChannel;
    VCEmulatedNetwork *_network;
    int _packetCount;
    BOOL _isStarted;
}

- (void)setEventHandler:(id /* block */)a0;
- (void)dealloc;
- (int)start;
- (id)destination;
- (void)invalidate;
- (unsigned int)token;
- (void)setReadHandler:(id /* block */)a0;
- (id)connectedLinks;
- (id)defaultLink;
- (void)osChannelInfoLog;
- (void)readyToRead;
- (void)requestSessionInfoWithOptions:(id)a0;
- (void)setChannelPreferences:(id)a0;
- (void)setWiFiAssist:(BOOL)a0;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16]; BOOL x14; BOOL x15; } *)a3 completionHandler:(id /* block */)a4;
- (void)writeDatagrams:(const void **)a0 datagramsSize:(unsigned int *)a1 datagramsInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)a2 datagramsCount:(int)a3 options:(struct **)a4 completionHandler:(id /* block */)a5;
- (void)optInStreamIDs:(id)a0;
- (int)dataPath;
- (id)initWithIDSDatagramChannel:(id)a0 mode:(long long)a1;
- (void)optOutStreamIDs:(id)a0;
- (void)setOneToOneModeEnabled:(BOOL)a0 isInitiator:(BOOL)a1;
- (void)setupEmulatedNetwork;
- (BOOL)writeToEmulatedNetworkWithDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16]; BOOL x14; BOOL x15; } *)a3;

@end
