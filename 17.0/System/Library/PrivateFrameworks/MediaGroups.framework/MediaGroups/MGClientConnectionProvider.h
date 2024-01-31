@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, MGClientConnectionProviderDelegateProtocol;

@interface MGClientConnectionProvider : NSObject <MGClientConnectionProviderProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (weak, nonatomic) id<MGClientConnectionProviderDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)serviceName;
- (void).cxx_destruct;
- (id)_createServiceConnection;

@end
