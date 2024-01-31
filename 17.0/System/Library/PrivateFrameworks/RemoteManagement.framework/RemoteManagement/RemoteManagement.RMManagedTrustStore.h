@class _TtC16RemoteManagement19RMManagedTrustStore;

@interface RemoteManagement.RMManagedTrustStore : NSObject

@property (class, nonatomic, readonly) _TtC16RemoteManagement19RMManagedTrustStore *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)removeTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(BOOL)a2 scope:(long long)a3 persona:(id)a4 error:(id *)a5;
- (BOOL)setTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(BOOL)a2 scope:(long long)a3 persona:(id)a4 error:(id *)a5;

@end
