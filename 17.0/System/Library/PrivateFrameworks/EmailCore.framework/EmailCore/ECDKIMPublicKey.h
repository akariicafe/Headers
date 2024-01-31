@class NSString, NSData;

@interface ECDKIMPublicKey : NSObject

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned long long hashingAlgorithm;
@property (readonly, nonatomic) unsigned long long signingAlgorithm;
@property (readonly, copy, nonatomic) NSString *notes;
@property (readonly, copy, nonatomic) NSData *publicKeyData;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSString *flags;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (void)_parseAcceptableHashingAlgorithmsFromDictionary:(id)a0;
- (void)_parseFlagsFromDictionary:(id)a0;
- (void)_parseNotesFromDictionary:(id)a0;
- (void)_parsePublicKeyDataFromDictionary:(id)a0;
- (void)_parseServiceTypeFromDictionary:(id)a0;
- (void)_parseSigningAlgorithmFromDictionary:(id)a0;
- (void)_parseVersionFromDictionary:(id)a0;
- (id)initWithKeyValueDictionary:(id)a0;
- (id)initWithVersion:(id)a0 hashingAlgorithm:(unsigned long long)a1 signingAlgorithm:(unsigned long long)a2 notes:(id)a3 publicKeyData:(id)a4 serviceType:(id)a5 flags:(id)a6;

@end
