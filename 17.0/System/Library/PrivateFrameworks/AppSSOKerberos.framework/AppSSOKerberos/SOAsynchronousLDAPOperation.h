@class NSString;

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation

@property (copy) id /* block */ completion;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;
@property (nonatomic) BOOL requireTLSForLDAP;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (void)main;
- (void).cxx_destruct;
- (id)initWithRealm:(id)a0 andHost:(id)a1 andPort:(unsigned short)a2 andBundleIdentifier:(id)a3 andRequireTLSForLDAP:(BOOL)a4 andCompletion:(id /* block */)a5;

@end
