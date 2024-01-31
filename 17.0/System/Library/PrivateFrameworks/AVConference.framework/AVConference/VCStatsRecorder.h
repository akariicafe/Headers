@interface VCStatsRecorder : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _stateRWLock;
    struct { double requestTime; unsigned char linkID; unsigned short statsIdentifier; unsigned int totalLocalMediaPacketSent; unsigned int totalLocalMediaPacketReceived; unsigned int totalServerStatsByteUsed; } _localStats[128];
    unsigned short _currentLocalStatsIndex;
    unsigned int _uplinkServerStatsByteUsed;
}

- (id)init;
- (void)dealloc;
- (void)getLocalStats:(unsigned short)a0 localSessionStats:(struct { double x0; unsigned char x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a1;
- (struct { double x0; unsigned char x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; })getMostRecentLocalStats;
- (int)serverStatsSizeInByteForUplink:(BOOL)a0 connection:(id)a1;
- (void)updateSessionStats:(unsigned short)a0 connection:(id)a1 totalPacketSent:(unsigned int)a2 totalPacketReceived:(unsigned int)a3;

@end
