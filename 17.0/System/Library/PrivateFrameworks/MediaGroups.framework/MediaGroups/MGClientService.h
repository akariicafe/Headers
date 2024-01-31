@class NSDictionary, NSString, NSXPCConnection;
@protocol MGClientConnectionProviderProtocol;

@interface MGClientService : NSObject <MGClientInterfaceProtocol, MGServiceInterfaceProtocol, MGClientConnectionProviderDelegateProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL shouldAttemptReconnect;
@property (copy, nonatomic) NSDictionary *queries;
@property (readonly, nonatomic) id<MGClientConnectionProviderProtocol> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientServiceWithConnectionProvider:(id)a0;

- (id)init;
- (id)initWithConnectionProvider:(id)a0;
- (void).cxx_destruct;
- (void)HomeKitAccessoryOfType:(id)a0 accessoryIdentifier:(id)a1 homeIdentifier:(id)a2 categoryType:(id)a3 name:(id)a4 properties:(id)a5 completion:(id /* block */)a6;
- (void)connectionProvider:(id)a0 serviceLost:(id)a1;
- (void)addMember:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)connectionProviderServiceAvailable:(id)a0;
- (void)createGroupWithType:(id)a0 name:(id)a1 members:(id)a2 completion:(id /* block */)a3;
- (void)deleteGroup:(id)a0 completion:(id /* block */)a1;
- (void)query:(id)a0 didUpdate:(id)a1 completion:(id /* block */)a2;
- (void)removeMember:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)setName:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)startQueryWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)stopQuery:(id)a0 completion:(id /* block */)a1;

@end
