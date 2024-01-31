@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUNetLinkManager : NSObject {
    NSMutableSet *_endpoints;
    unsigned int _endpointChanges;
    BOOL _hasIPv4Endpoint;
    BOOL _hasIPv6Endpoint;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_pollTimer;
    int _probeSocketV4;
    NSObject<OS_dispatch_source> *_probeSourceV4;
    int _probeSocketV6;
    NSObject<OS_dispatch_source> *_probeSourceV6;
    unsigned int _reReachableCount;
    unsigned int _rxCount;
    unsigned int _txCount;
    unsigned int _txErrors;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    unsigned int _unreachableCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (void)_update;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)a0;
- (void)_monitorSetupSocket:(int)a0;
- (void)_updateARP;
- (void)_updateEndpoint:(id)a0 state:(int)a1;
- (void)_invalidate;
- (void)invalidate;
- (void)_updateNDP;
- (void)activate;
- (void)_monitorReadPacket:(int)a0;
- (void)_monitorSendPacketToEndpoint:(id)a0;
- (id)description;
- (void)addEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)_monitorEnsureStarted;
- (void)_monitorEnsureStopped;
- (void)_updateEndpoints;
- (void)removeEndpoint:(id)a0;

@end
