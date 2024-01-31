@class NSString;

@interface RMManagedTrustStoreController : NSObject

@property (nonatomic) long long scope;
@property (copy, nonatomic) NSString *personaID;

+ (id)newManagedTrustStoreControllerProtocolForScope:(long long)a0 personaID:(id)a1;

- (void).cxx_destruct;
- (id)initWithScope:(long long)a0 personaID:(id)a1;
- (BOOL)removeTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(BOOL)a2 error:(id *)a3;
- (BOOL)setTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(BOOL)a2 error:(id *)a3;

@end
