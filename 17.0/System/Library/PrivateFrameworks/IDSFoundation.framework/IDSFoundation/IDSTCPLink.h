@class NSIndexSet, NSString;
@protocol IDSLinkDelegate;

@interface IDSTCPLink : NSObject <IDSLink> {
    int _addressFamily;
    struct IDSTCPConnection_ { int x0; BOOL x1; unsigned int x2; int x3; struct IDSNetBuffer_ *x4; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x5; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x6; struct *x7; struct *x8; struct IDSTCPLinkCounter_ *x9; int x10; struct IDSTCPConnection_ *x11; id x12; id /* block */ x13; } *_conns;
    id /* block */ _getPacketLength;
    struct IDSTCPLinkCounter_ { unsigned long long _totalBytesSent; unsigned long long _totalPacketsSent; unsigned long long _totalBytesReceived; unsigned long long _totalPacketsReceived; } _counters;
    struct IDSTCPLinkCounter_ { unsigned long long _totalBytesSent; unsigned long long _totalPacketsSent; unsigned long long _totalBytesReceived; unsigned long long _totalPacketsReceived; } _previousCounters;
    double _previousReportTime;
}

@property (readonly, nonatomic) BOOL isSSL;
@property (retain, nonatomic) NSIndexSet *cellularInterfaceIndices;
@property (nonatomic) BOOL wifiAssistEnabled;
@property (retain) NSString *cbuuid;
@property (retain) NSString *deviceUniqueID;
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long headerOverhead;
@property (weak) id<IDSLinkDelegate> delegate;
@property (weak) id<IDSLinkDelegate> alternateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (struct IDSTCPConnection_ { int x0; BOOL x1; unsigned int x2; int x3; struct IDSNetBuffer_ *x4; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x5; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x6; struct *x7; struct *x8; struct IDSTCPLinkCounter_ *x9; int x10; struct IDSTCPConnection_ *x11; id x12; id /* block */ x13; } *)_getIDSTCPConnection:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x19; unsigned short x20; unsigned char x21; int x22; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; unsigned long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; BOOL x17; BOOL x18; BOOL x19; unsigned int x20; } x23[8]; char x24; char x25; int x26; double x27; unsigned char x28[16]; unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0]; } *)a0;
- (struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)connect:(int)a0 localAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 portRange:(unsigned short)a2 remoteAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a3 clientUUID:(unsigned char[16])a4 completionHandler:(id /* block */)a5;
- (id)copyLinkStatsDict;
- (BOOL)disconnect:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0 remoteAddress:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a1;
- (id)generateLinkReport:(double)a0 isCurrentLink:(BOOL)a1;
- (long long)getPacketLength:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x19; unsigned short x20; unsigned char x21; int x22; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; unsigned long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; BOOL x17; BOOL x18; BOOL x19; unsigned int x20; } x23[8]; char x24; char x25; int x26; double x27; unsigned char x28[16]; unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0]; } *)a0 isChannelData:(BOOL *)a1;
- (id)initWithDeviceUniqueID:(id)a0 cbuuid:(id)a1 isSSL:(BOOL)a2 getPacketLength:(id /* block */)a3;
- (void)processIncomingPacket:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x19; unsigned short x20; unsigned char x21; int x22; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; unsigned long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; BOOL x17; BOOL x18; BOOL x19; unsigned int x20; } x23[8]; char x24; char x25; int x26; double x27; unsigned char x28[16]; unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0]; } *)a0;
- (unsigned long long)sendPacketBuffer:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x19; unsigned short x20; unsigned char x21; int x22; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; unsigned long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; BOOL x17; BOOL x18; BOOL x19; unsigned int x20; } x23[8]; char x24; char x25; int x26; double x27; unsigned char x28[16]; unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0]; } *)a0 toDeviceUniqueID:(id)a1 cbuuid:(id)a2;
- (unsigned long long)sendPacketBufferArray:(struct **)a0 arraySize:(int)a1 toDeviceUniqueID:(id)a2 cbuuid:(id)a3;
- (void)setWiFiAssistState:(BOOL)a0;

@end
