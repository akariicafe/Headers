@class NSString, NSMutableSet, ATConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VUIAirTrafficController : NSObject <ATConnectionDelegate>

@property (retain, nonatomic) ATConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultController;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)_onConnectionQueue_startObservingIfIdle;
- (void)_onConnectionQueue_stopObservingIfIdle;

@end
