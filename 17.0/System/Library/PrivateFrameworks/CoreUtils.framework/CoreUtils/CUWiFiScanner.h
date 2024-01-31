@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUWiFiScanner : NSObject {
    BOOL _activateCalled;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _scanning;
    NSObject<OS_dispatch_source> *_scanTimer;
    BOOL _suspended;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int scanFlags;
@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_cleanup;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (void)suspend;
- (void)invalidate;
- (void)activate;
- (void)resume;
- (void).cxx_destruct;
- (void)_scanWiFiFinished:(id)a0 status:(int)a1;
- (void)_scanWiFiProcessResult:(id)a0;
- (void)_scanWiFiStart;

@end
