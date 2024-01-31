@class NSString, NSData, CUMessageSession, NSObject, TSgPTPClock;
@protocol OS_dispatch_semaphore;

@interface TVLTimeSync : NSObject <TSClockClient>

@property (nonatomic) unsigned int IPv4;
@property (copy, nonatomic) NSData *IPv6;
@property (retain, nonatomic) TSgPTPClock *clock;
@property (copy, nonatomic) NSString *networkInterfaceName;
@property (retain) NSObject<OS_dispatch_semaphore> *waitForPTPLock;
@property (retain, nonatomic) CUMessageSession *session;
@property (nonatomic, getter=isMaster) BOOL master;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)invalidate;
+ (void)timeSyncWithRemoteIPv4:(id)a0 IPv6:(id)a1 interface:(id)a2 session:(id)a3 master:(BOOL)a4 completion:(id /* block */)a5;

- (void)invalidate;
- (void).cxx_destruct;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)_clearWaitForPTPClock;
- (void)_startPTPWithSession:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)convertToDomainTimeFromHostTime:(unsigned long long)a0 grandmasterIdentity:(unsigned long long *)a1;
- (unsigned long long)convertToHostTimeFromDomainTime:(unsigned long long)a0 grandmasterIdentity:(unsigned long long *)a1;
- (id)initWithRemoteIPv4:(id)a0 IPv6:(id)a1 interface:(id)a2;
- (void)negotiateGrandmasterIdentityAttempt:(long long)a0 withCompletion:(id /* block */)a1;

@end
