@class NSString, NSMutableArray;

@interface NetworkAnalyticsQueueStatistics : NSObject {
    double _lastUpdateTime;
    int _ioctlSocket;
}

@property (retain, nonatomic) NSMutableArray *slots;
@property (readonly) NSString *interfaceName;

+ (id)schedulerToString:(unsigned int)a0;
+ (id)slotToString:(unsigned char)a0;

- (id)initWithInterfaceName:(id)a0;
- (void)dealloc;
- (void)update;
- (id)description;
- (void).cxx_destruct;
- (void)_updateForSlot:(unsigned char)a0;
- (id)_entryForSlot:(unsigned char)a0;
- (void)_processNewStats:(struct if_ifclassq_stats { unsigned int x0; unsigned int x1; unsigned long long x2; struct pktcntr { unsigned long long x0; unsigned long long x1; } x3; struct pktcntr { unsigned long long x0; unsigned long long x1; } x4; unsigned int x5; struct fq_codel_classstats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; unsigned long long x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; struct fq_codel_flowstats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x27[20]; unsigned int x28; unsigned int x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned int x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned long long x40; } x6; } *)a0 forSlot:(unsigned char)a1;
- (void)cleanupIoctlSocket;
- (void)createIoctlSocket;

@end
