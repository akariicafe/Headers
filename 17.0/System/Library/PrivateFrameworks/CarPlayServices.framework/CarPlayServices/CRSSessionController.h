@class BSServiceConnection, NSString, RBSProcessHandle;

@interface CRSSessionController : NSObject <CRSSessionServerToClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
}

@property (retain, nonatomic) RBSProcessHandle *process;
@property (retain, nonatomic) BSServiceConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
