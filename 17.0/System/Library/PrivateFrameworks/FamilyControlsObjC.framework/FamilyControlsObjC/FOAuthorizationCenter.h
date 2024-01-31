@class NSArray, NSXPCConnection;

@interface FOAuthorizationCenter : NSObject

@property (class, readonly) FOAuthorizationCenter *sharedCenter;

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) NSArray *authorizationRecords;

- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestInternalAuthorizationForMember:(long long)a0 completionHandler:(id /* block */)a1;
- (void)revokeAuthorizationForDeletionForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeInternalAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
