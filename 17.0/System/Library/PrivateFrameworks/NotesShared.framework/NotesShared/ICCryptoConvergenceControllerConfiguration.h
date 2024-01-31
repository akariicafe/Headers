@class NSString, ICEncryptionKey;

@interface ICCryptoConvergenceControllerConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *passphrase;
@property (copy, nonatomic) ICEncryptionKey *v1MainKey;
@property (copy, nonatomic) ICEncryptionKey *v1NeoMainKey;
@property (copy, nonatomic) NSString *divergedPassphrase;
@property (copy, nonatomic) ICEncryptionKey *divergedV1MainKey;
@property (copy, nonatomic) ICEncryptionKey *divergedV1NeoMainKey;
@property (nonatomic) BOOL includeAllAuthenticatedNotes;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldConvergeNote:(id)a0;

@end
