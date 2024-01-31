@class NSUUID, NSString, NSData;
@protocol TPPublicKey;

@interface TPCustodianRecoveryKey : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *peerID;
@property (retain, nonatomic) id<TPPublicKey> signingPublicKey;
@property (retain, nonatomic) id<TPPublicKey> encryptionPublicKey;
@property (nonatomic) int kind;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *sig;

+ (id)peerIDForData:(id)a0 sig:(id)a1 peerIDHashAlgo:(long long)a2;
+ (id)custodianRecoveryKeyWithData:(id)a0 sig:(id)a1 keyFactory:(id)a2;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 signingPublicKey:(id)a1 encryptionPublicKey:(id)a2 kind:(int)a3 data:(id)a4 sig:(id)a5 peerID:(id)a6;
- (id)initWithUUID:(id)a0 signingPublicKey:(id)a1 encryptionPublicKey:(id)a2 signingKeyPair:(id)a3 kind:(int)a4 error:(id *)a5;

@end
