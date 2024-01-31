@class CBCentralManager, NSString, ATVModel, NSObject;
@protocol OS_dispatch_queue;

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate>

@property (retain) CBCentralManager *central;
@property (weak) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL hasStarted;
@property (retain) ATVModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)centralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;
- (id)getStatus;
- (BOOL)attachSessionWithError:(id *)a0;
- (BOOL)cleanupWithError:(id *)a0;
- (int)getAvailableHAPConnections;
- (id)initWithCentralManager:(id)a0 Queue:(id)a1 Error:(id *)a2;
- (void)updateBleStatus:(struct BTRemoteContext { struct { void /* function */ *x0; } x0; void /* function */ *x1; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; } x2; struct BTSessionImpl *x3; struct BTLocalDeviceImpl *x4; struct BTPlatformParams { BOOL x0; unsigned long long x1; float x2; float x3; float x4; float x5; int x6; float x7; float x8; float x9; float x10; } x5; struct BTStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; BOOL x16; BOOL x17; BOOL x18; } x6; BOOL x7; } *)a0;

@end
