@class LAPrivateKey, NSArray, LASecret;

@interface LAPersistedRight : LARight {
    NSArray *_secrets;
    NSArray *_privateKeys;
}

@property (readonly, nonatomic) LAPrivateKey *key;
@property (readonly, nonatomic) LASecret *secret;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 accessKey:(id)a1 privateKeys:(id)a2 secrets:(id)a3;

@end
