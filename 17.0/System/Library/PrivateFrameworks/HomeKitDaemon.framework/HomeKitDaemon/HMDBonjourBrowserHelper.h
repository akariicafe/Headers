@class HMFTimer, NSArray, NSDictionary, NSMutableDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDBonjourBrowserHelper : HMFObject <HMFNetServiceBrowserDelegate, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) double browsingInterval;
@property (nonatomic) double browsingPeriodicity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (retain, nonatomic) NSMutableArray *browsers;
@property (retain, nonatomic) NSDictionary *latestDiscoveredServices;
@property (retain, nonatomic) NSMutableDictionary *internalDiscoveredServices;
@property (retain, nonatomic) NSMutableArray *browsingCompletions;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)a0 didAddService:(id)a1;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1;
- (void)netServiceBrowser:(id)a0 didStopBrowsingWithError:(id)a1;
- (void)_removeBrowser:(id)a0;
- (void)_addBrowser:(id)a0;
- (BOOL)_startBrowsers;
- (void)_stopBrowsers;
- (void)_updateTimerWithTimeout:(double)a0;
- (unsigned long long)discoveredServicesCountForServiceType:(id)a0;
- (id)initWithServicesOfTypes:(id)a0 browsingTimeInterval:(double)a1 browsingPeriodicity:(double)a2 workQueue:(id)a3;
- (void)startWithBrowsingCompletion:(id /* block */)a0;

@end
