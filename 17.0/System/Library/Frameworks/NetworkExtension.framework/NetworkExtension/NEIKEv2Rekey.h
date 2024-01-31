@class NSString, SWWakingTimer, NSObject;
@protocol OS_dispatch_source;

@interface NEIKEv2Rekey : NSObject <NSObject> {
    int _ikeLifetimeMinutes;
    int _childLifetimeMinutes;
    SWWakingTimer *_ikeLifetime;
    SWWakingTimer *_childLifetime;
    NSString *_sessionDescription;
    NSObject<OS_dispatch_source> *_ikeLifetimeDispatchTimer;
    NSObject<OS_dispatch_source> *_childLifetimeDispatchTimer;
    id /* block */ _ikeRekeyHandler;
    id /* block */ _childRekeyHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
