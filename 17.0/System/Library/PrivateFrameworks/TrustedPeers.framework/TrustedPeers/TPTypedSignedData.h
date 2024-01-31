@class NSString, NSData, NSObject;
@protocol OS_dispatch_queue, TPPublicKey;

@interface TPTypedSignedData : NSObject

@property (readonly, nonatomic) NSString *sigTypeName;
@property (retain, nonatomic) id<TPPublicKey> lastSigValidationPubkey;
@property (nonatomic) BOOL lastSigValidationResult;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sigValidationQueue;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *sig;

- (BOOL)checkSignatureWithKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 key:(id)a1 signatureTypeName:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 sig:(id)a1 pubkey:(id)a2 sigTypeName:(id)a3;
- (id)initWithData:(id)a0 sig:(id)a1 signatureTypeName:(id)a2;

@end
