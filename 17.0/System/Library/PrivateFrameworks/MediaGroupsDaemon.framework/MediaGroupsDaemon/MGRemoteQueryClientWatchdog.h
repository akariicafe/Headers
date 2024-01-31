@class NSURLSession, NSString, MGRemoteQueryClientTarget, MGRemoteQueryClient, NSObject;
@protocol OS_dispatch_source, MGRemoteQueryClientWatchdogDelegate, OS_dispatch_queue;

@interface MGRemoteQueryClientWatchdog : NSObject <MGRemoteQueryClientDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pingLock;
}

@property (readonly, weak, nonatomic) id<MGRemoteQueryClientWatchdogDelegate> delegate;
@property (readonly, nonatomic) NSURLSession *session;
@property (retain, nonatomic) MGRemoteQueryClient *ping;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) MGRemoteQueryClientTarget *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchdogForTarget:(id)a0 dispatchQueue:(id)a1 delegate:(id)a2 usingSession:(id)a3;

- (void)_timerFired;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithTarget:(id)a0 dispatchQueue:(id)a1 delegate:(id)a2 usingSession:(id)a3;
- (void)_pingFinished:(BOOL)a0;
- (void)_pingStart;
- (void)_timerCancel;
- (void)_timerInit;
- (void)_timerReschedule;
- (void)_withPingLock:(id /* block */)a0;
- (void)clientInvalidated:(id)a0 withError:(id)a1;
- (id)pingClient;

@end
