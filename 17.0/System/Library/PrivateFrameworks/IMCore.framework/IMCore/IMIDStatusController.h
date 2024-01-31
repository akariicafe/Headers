@class NSMutableSet, NSRecursiveLock;

@interface IMIDStatusController : NSObject

@property (retain, nonatomic) NSMutableSet *_servicesRegistered;
@property (retain, nonatomic) NSRecursiveLock *_servicesLock;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (long long)__statusForID:(id)a0 onService:(id)a1 isCanonicalized:(BOOL)a2;
- (long long)_idStatusForID:(id)a0 onAccount:(id)a1;
- (long long)_idStatusForID:(id)a0 onService:(id)a1;
- (void)_processIDStatusResponseForURI:(id)a0 resultStatus:(long long)a1 forService:(id)a2;
- (void)_requestStatusForID:(id)a0 onService:(id)a1 onAccount:(id)a2;
- (long long)_statusForCanonicalizedID:(id)a0 onService:(id)a1;
- (void)requestStatusForID:(id)a0 onAccount:(id)a1;
- (void)requestStatusForID:(id)a0 onService:(id)a1;
- (long long)statusForID:(id)a0 onService:(id)a1;

@end
