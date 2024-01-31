@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (unsigned long long)hash;
- (BOOL)isServer;
- (BOOL)isClient;
- (id)endpointDescription;
- (void).cxx_destruct;
- (BOOL)isNonLaunching;
- (BOOL)isChild;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
