@class NSNumber, NSArray;

@interface TKExtensionClientTokenSession : TKClientTokenSession {
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
}

@property (readonly, nonatomic) NSNumber *sessionID;

- (void)terminate;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)keys;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (id)identities;
- (id)certificates;
- (id)advertisedItems;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (id)itemsOfClass:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;

@end
