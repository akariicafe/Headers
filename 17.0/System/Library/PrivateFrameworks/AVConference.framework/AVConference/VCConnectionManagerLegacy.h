@class NSString;
@protocol VCConnectionProtocol;

@interface VCConnectionManagerLegacy : VCConnectionManager

@property (retain, nonatomic) id<VCConnectionProtocol> pendingPrimaryConnection;
@property (retain, nonatomic) id<VCConnectionProtocol> pendingSecondaryConnection;
@property (copy, nonatomic) NSString *relayConnectionID;

- (int)removeConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (int)addConnection:(id)a0;
- (void)flushLinkProbingStatusWithOptions:(id)a0;
- (void)startActiveProbingWithOptions:(id)a0;
- (void)stopActiveProbingWithOptions:(id)a0;
- (void)queryProbingResultsWithOptions:(id)a0;
- (unsigned int)getByteCountWithIndex:(unsigned char)a0 isOutgoing:(BOOL)a1;
- (unsigned int)getPacketCountWithIndex:(unsigned char)a0 isOutgoing:(BOOL)a1;
- (id)getPrimaryConnectionToBeCompared;
- (id)getSecondaryConnectionToBeCompared;
- (int)nominateConnection:(id)a0 asPrimary:(BOOL)a1 interfaceMask:(int)a2 demote:(int *)a3 connectionPriority:(int *)a4 replaceOnly:(int *)a5;
- (int)removeConnectionWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 isLocalInterface:(BOOL)a1;
- (int)removeConnectionWithIPPortInternal:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 isLocalInterface:(BOOL)a1;
- (void)reportConnection:(id)a0 isInitialConnection:(BOOL)a1;
- (void)reportLinkProbingStatsWithDuplicationJustStarted:(BOOL)a0;
- (void)setUpVTable;
- (BOOL)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; int x3; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; BOOL x2; } x2; struct { id x0; } x3; } x1; unsigned int x2; struct tagVCSourceDestinationInfo *x3; void *x4; } *)a0;
- (int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x0; struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x1; int x2; unsigned short x3; unsigned short x4; unsigned char x5[8]; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; unsigned int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; struct tagCANDIDATEPARIR *x16; } *)a0 interfaceMask:(int)a1 nominated:(int *)a2 demote:(int *)a3 connectionPriority:(int *)a4 replaceOnly:(int *)a5;
- (int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x0; struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x1; int x2; unsigned short x3; unsigned short x4; unsigned char x5[8]; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; unsigned int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; struct tagCANDIDATEPARIR *x16; } *)a0 interfaceMask:(int)a1 nominated:(int *)a2 demote:(int *)a3 connectionPriority:(int *)a4 replaceOnly:(int *)a5;
- (BOOL)shouldNominateConnection:(id)a0;
- (void)updateAllBitrateCapsForConnection:(id)a0;
- (void)updateCellularMTU:(int)a0;
- (void)updateCellularTech:(int)a0 forLocalInterface:(BOOL)a1;
- (void)updateNegotiatedSettingsOnetoOne:(id)a0;
- (void)updateOneToOneBitrateCapsForConnection:(id)a0;
- (void)updateSessionStats:(unsigned short)a0;
- (int)updateStateWithCurrentConnection:(id)a0 asPrimary:(BOOL)a1 interfaceMask:(int)a2 demote:(int *)a3 replaceOnly:(int *)a4;

@end
