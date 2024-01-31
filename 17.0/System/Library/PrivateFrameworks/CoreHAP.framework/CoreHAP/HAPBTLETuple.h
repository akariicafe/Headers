@interface HAPBTLETuple : NSObject

@property (nonatomic) unsigned long long atvState;
@property (nonatomic) struct BTStatus { unsigned long long leRemote; unsigned long long leAcc; unsigned long long btKB; unsigned long long a2dp; unsigned long long btGC; unsigned long long eAcc; unsigned long long hk; unsigned long long lowEnergyConnections; unsigned long long nonHIDConnections; unsigned long long connectedHIDDevices; unsigned long long oneSniffAttemptDevices; unsigned long long twoSniffAttemptDevices; unsigned long long sco; unsigned long long wiap; unsigned long long remote; unsigned long long connectedDevices; BOOL isScanning; BOOL isDiscoverable; BOOL isConnectable; } state;
@property (nonatomic) int maxHAPConnections;
@property (nonatomic) float minBandwidth;
@property (nonatomic) float maxBandwidth;

+ (id)makeTupleWithState:(struct BTStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; BOOL x16; BOOL x17; BOOL x18; } *)a0 MaxHAPConnections:(int)a1 MinBandwidth:(float)a2 MaxBandwidth:(float)a3;
+ (id)atvState2String:(unsigned long long)a0;
+ (void)bandwidthFromATVState:(unsigned long long)a0 MinBandwidth:(float *)a1 MaxBandwidth:(float *)a2;
+ (id)makeTupleWithATVState:(unsigned long long)a0 MaxHAPConnections:(int)a1;
+ (id)makeTupleWithATVState:(unsigned long long)a0 MaxHAPConnections:(int)a1 MinBandwidth:(float)a2 MaxBandwidth:(float)a3;
+ (id)state2String:(struct BTStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; BOOL x16; BOOL x17; BOOL x18; } *)a0;

- (id)description;

@end
