@class NSString, NSNetServiceBrowser, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATHostBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSNetServiceBrowser *_netServiceBrowser;
    BOOL _searchInProgress;
    NSMutableSet *_hostsBeingResolved;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completionBlock;
    NSObject<OS_dispatch_source> *_timer;
    double _browserStartTime;
    double _timeoutTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (void)cancel;
- (void)_handleTimeout;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)_finishSearchIfComplete;
- (void)browseForHostsWithTimeout:(unsigned long long)a0 completion:(id /* block */)a1;

@end
