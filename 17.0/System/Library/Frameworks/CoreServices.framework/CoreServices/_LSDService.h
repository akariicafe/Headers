@class NSString, NSXPCListener, NSMapTable;

@interface _LSDService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _clientMapMutex;
    NSMapTable *_clientMap;
}

@property (class, readonly, getter=isEnabled) BOOL enabled;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dispatchQueue;
+ (unsigned short)connectionType;
+ (id)XPCInterface;
+ (BOOL)XPCConnectionIsAlwaysPrivileged;
+ (Class)clientClass;
+ (id)XPCConnectionToService;
+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;

- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)connectionWasInvalidated:(id)a0;
- (void).cxx_destruct;
- (id)clientForConnection:(id)a0;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (id)initWithXPCListener:(id)a0;
- (void)clientBorn:(id)a0 forNewConnection:(id)a1;

@end
