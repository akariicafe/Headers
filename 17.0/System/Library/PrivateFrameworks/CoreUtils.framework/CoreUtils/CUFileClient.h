@class CUFileQuery, NSString, NSNumber, RPCompanionLinkClient, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUFileClient : NSObject <CUActivatable> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _clinkActivated;
    RPCompanionLinkClient *_clinkClient;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned long long _lastRequestTicks;
    NSMutableArray *_queryArray;
    CUFileQuery *_currentQuery;
    NSNumber *_sessionID;
    NSObject<OS_dispatch_source> *_sessionTimer;
    int _state;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) NSString *destinationID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_run;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)performQuery:(id)a0;
- (void).cxx_destruct;
- (void)_runSessionStartResponse:(id)a0 error:(id)a1;
- (void)_sendKeepAlive:(double)a0;
- (void)_completeQuery:(id)a0 response:(id)a1 error:(id)a2;
- (void)_reportError:(id)a0 where:(const char *)a1;
- (void)_runCLinkActivate;
- (void)_runPrepare;
- (void)_runQueries;
- (void)_runQueryResponse:(id)a0 query:(id)a1 error:(id)a2;
- (void)_runSendQuery:(id)a0;
- (void)_runSessionStartRequest;
- (void)_sendSessionStop;
- (void)_sessionTimerFired;

@end
