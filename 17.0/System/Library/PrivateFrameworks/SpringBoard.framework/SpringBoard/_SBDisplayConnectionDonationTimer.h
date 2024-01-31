@class NSString, NSTimer;

@interface _SBDisplayConnectionDonationTimer : NSObject <BSInvalidatable> {
    NSTimer *_timer;
    NSString *_uniqueId;
    NSString *_deviceName;
    NSString *_productName;
    BOOL _connect;
    BOOL _mirroring;
    long long _counter;
    id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)stateChanged;
- (id)initWithUniqueId:(id)a0 deviceName:(id)a1 productName:(id)a2 connect:(BOOL)a3 mirroring:(BOOL)a4 handler:(id /* block */)a5;
- (void)resetTimerOnConnect:(BOOL)a0;

@end
