@class WPNearby, NSArray, NSString, NSData, NSDictionary, NSObject, CURetrier;
@protocol OS_dispatch_queue;

@interface SFBLEAdvertiser : NSObject <WPNearbyDelegate> {
    BOOL _activateCalled;
    long long _advertiseState;
    BOOL _invalidateCalled;
    NSData *_payloadDataCurrent;
    NSData *_payloadDataPrevious;
    NSDictionary *_payloadFields;
    NSString *_payloadIdentifier;
    long long _payloadType;
    CURetrier *_startRetrier;
    WPNearby *_wpNearby;
    long long _wpNearbyType;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) NSArray *lePipeDevices;
@property (nonatomic) long long advertiseRate;
@property (copy, nonatomic) id /* block */ advertiseStateChangedHandler;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;
@property (copy, nonatomic) id /* block */ connectionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)nearby:(id)a0 didDeferAdvertisingType:(long long)a1;
- (id)_preparePayloadNearbyAction:(int *)a0;
- (void)nearby:(id)a0 didStartAdvertisingType:(long long)a1;
- (int)_preparePayload:(BOOL)a0;
- (void)_invalidate;
- (void)invalidate;
- (void)nearby:(id)a0 didFailToStartAdvertisingOfType:(long long)a1 withError:(id)a2;
- (id)_preparePayloadNearbyInfo:(int *)a0;
- (void)nearby:(id)a0 didConnectToPeer:(id)a1 transport:(long long)a2 error:(id)a3;
- (void)setPayloadData:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)setPayloadFields:(id)a0;
- (void)nearbyDidUpdateState:(id)a0;
- (void)_restartIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)nearby:(id)a0 didStopAdvertisingType:(long long)a1 withError:(id)a2;

@end
