@class NSString, NSData, NSArray;

@interface DCCredentialCryptoKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *publicKeyIdentifier;
@property (retain, nonatomic) NSData *publicKeyCOSEKey;
@property (nonatomic) unsigned long long keyType;
@property (nonatomic) unsigned long long keyUsage;
@property (retain, nonatomic) NSArray *attestation;
@property (retain, nonatomic) NSData *casdAttestation;
@property (retain, nonatomic) NSData *casdSignature;
@property (retain, nonatomic) NSData *progenitorKeyAttestation;
@property (retain, nonatomic) NSData *keyAuthorization;
@property (retain, nonatomic) NSArray *kskAttestation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 attestation:(id)a6 keyAuthorization:(id)a7 kskAttestation:(id)a8;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 attestation:(id)a6;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 casdSignature:(id)a6 casdAttestation:(id)a7 keyAuthorization:(id)a8 kskAttestation:(id)a9;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 progenitorKeyAttestation:(id)a6 casdAttestation:(id)a7 keyAuthorization:(id)a8 kskAttestation:(id)a9;

@end
