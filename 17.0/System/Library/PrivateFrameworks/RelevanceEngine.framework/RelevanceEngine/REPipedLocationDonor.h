@class NSString, NSXPCConnection, REObserverStore, CLLocation, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface REPipedLocationDonor : RESingleton <REPipedLocationReceiver> {
    REObserverStore *_observers;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_location;
    NSLock *_locationAccessLock;
}

@property (readonly, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_locationFromDefaults;
+ (void)_saveLocationIntoDefaultsWithLocation:(id)a0;

- (void)removeObserver:(id)a0;
- (id)_init;
- (void)setConnection:(id)a0;
- (void)updateLocation:(id)a0;
- (void).cxx_destruct;
- (void)_handleInvalidation;
- (void)addObserver:(id)a0;

@end
