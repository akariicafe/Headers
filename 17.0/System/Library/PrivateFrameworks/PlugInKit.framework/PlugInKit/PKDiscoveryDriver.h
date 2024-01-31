@class PKDiscoveryLSWatcher, NSSet, NSDictionary, PKHost, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_activity;

@interface PKDiscoveryDriver : NSObject <PKApplicationWorkspaceObserverProtocol>

@property (retain) NSDictionary *attributes;
@property unsigned long long flags;
@property (copy) id /* block */ report;
@property (retain) NSObject<OS_os_activity> *relatedActivity;
@property (retain) NSSet *lastResults;
@property int annotationNotifyToken;
@property (retain) id mcNotificationToken;
@property (retain) PKDiscoveryLSWatcher *lsWatcher;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_queue> *sync;
@property (retain) PKHost *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)installWatchers;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithAttributes:(id)a0 flags:(unsigned long long)a1 host:(id)a2 report:(id /* block */)a3;
- (void)removeWatchers;
- (void)performWithPreviousResults:(id)a0 forceNotify:(BOOL)a1;
- (void)_performWithPreviousResults:(id)a0 forceNotify:(BOOL)a1 uninstalledProxies:(id)a2;

@end
