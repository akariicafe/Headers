@class NSData, NSDictionary;

@interface IDSMPDecryptionResult : NSObject

@property (retain, nonatomic) NSData *decryptedData;
@property (retain, nonatomic) NSDictionary *encryptedAttributes;
@property (copy, nonatomic) id /* block */ commitBlock;
@property (retain, nonatomic) NSDictionary *additionalDecryptionResult;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 encryptedAttributes:(id)a1 withCommitState:(id /* block */)a2 additionalDecryptionResult:(id)a3;

@end
