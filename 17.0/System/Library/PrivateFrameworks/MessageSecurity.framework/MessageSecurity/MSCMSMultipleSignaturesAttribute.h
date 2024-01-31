@class MSCMSSignerInfo, MSOID, NSData, MSAlgorithmIdentifier;

@interface MSCMSMultipleSignaturesAttribute : NSObject <MSCMSAttributeCoder>

@property (weak, nonatomic) MSCMSSignerInfo *containingSignerInfo;
@property (retain, nonatomic) MSAlgorithmIdentifier *bodyHashAlgorithm;
@property (retain, nonatomic) MSAlgorithmIdentifier *signatureAlgorithm;
@property (retain, nonatomic) MSAlgorithmIdentifier *signedAttrsHashAlgorithm;
@property (weak, nonatomic) NSData *signedAttrsHash;
@property (readonly, retain) MSOID *attributeType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;

@end
