@class NSXPCListener, NSString, RTIInputSystemServiceSession, NSXPCListenerEndpoint, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, RTIInputSystemDelegate;

@interface RTIInputSystemService : NSObject <NSXPCListenerDelegate, RTIInputSystemSessionDelegate> {
    NSMutableSet *_sessions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionsLock;
}

@property (retain, nonatomic) NSString *machName;
@property (retain, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) NSString *lastAppId;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) id<RTIInputSystemDelegate> delegate;
@property (readonly, nonatomic) RTIInputSystemServiceSession *currentSession;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)serviceSessionClass;
+ (id)sharedServiceWithMachName:(id)a0;

- (void)inputSession:(id)a0 didAddRTISupplementalLexicon:(id)a1;
- (void)inputSession:(id)a0 didRemoveRTISupplementalLexicon:(id)a1;
- (void)inputSession:(id)a0 documentTraitsDidChange:(id)a1;
- (void)inputSession:(id)a0 performInputOperation:(id)a1 withResponse:(id /* block */)a2;
- (void)inputSessionDidEnd:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)inputSession:(id)a0 textSuggestionsChanged:(id)a1;
- (void)inputSession:(id)a0 performInputOperation:(id)a1;
- (void)inputSession:(id)a0 documentStateDidChange:(id)a1;
- (void)dealloc;
- (BOOL)_canResumeConnection;
- (void)inputSessionDidDie:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)inputSession:(id)a0 didRemoveSupplementalLexicon:(id)a1;
- (void)_createListenerIfNecessary;
- (void)inputSession:(id)a0 didReceiveConnection:(id)a1;
- (void)_destroyListenerIfNecessary;
- (void)inputSession:(id)a0 didChangePause:(BOOL)a1 withReason:(id)a2;
- (void).cxx_destruct;
- (id)initWithMachName:(id)a0;
- (void)inputSessionDidEnd:(id)a0 options:(id)a1;
- (void)inputSession:(id)a0 didAddSupplementalLexicon:(id)a1;
- (void)inputSessionDidBegin:(id)a0 options:(id)a1;
- (void)prepareForInputSession:(id)a0 options:(id)a1;

@end
