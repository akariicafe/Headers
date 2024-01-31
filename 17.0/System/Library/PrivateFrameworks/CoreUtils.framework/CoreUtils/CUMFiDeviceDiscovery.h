@class NSString, EAAccessoryManager, NSObject;
@protocol OS_dispatch_queue;

@interface CUMFiDeviceDiscovery : NSObject {
    EAAccessoryManager *_eaManager;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)_activate;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_eaAccessoryDidConnect:(id)a0;
- (void)_eaAccessoryDidDisconnect:(id)a0;

@end
