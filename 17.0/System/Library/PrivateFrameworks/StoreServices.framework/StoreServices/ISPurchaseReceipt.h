@class NSString, NSDate;

@interface ISPurchaseReceipt : NSObject {
    NSString *_cancellationReason;
    NSDate *_receiptCreationDate;
    NSDate *_renewalDate;
}

@property (readonly) NSDate *expirationDate;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isRevoked;

+ (id)receiptWithContentsOfFile:(id)a0;

- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (BOOL)_anchorTrust:(struct __SecTrust { } *)a0 toRootCertificateIn:(struct __CFArray { } *)a1;
- (BOOL)_checkArray:(struct __CFArray { } *)a0 containsCertificateWithOID:(struct __CFString { } *)a1;
- (BOOL)_checkIfCertificate:(struct __SecCertificate { } *)a0 containsOID:(struct __CFString { } *)a1;
- (struct __CFArray { } *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr { } *)a0;
- (BOOL)_decodeReceiptData:(id)a0 toDecodedMessage:(inout struct SecCmsMessageStr **)a1;
- (struct SecCmsSignedDataStr { } *)_extractSignedDataFromMessage:(struct SecCmsMessageStr { } *)a0;
- (BOOL)_parseReceiptFromMessage:(struct SecCmsMessageStr { } *)a0;
- (void)_parseTokens:(id)a0;
- (BOOL)_setPoliciesForTrust:(struct __SecTrust { } *)a0;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr { } *)a0 onDate:(id)a1;

@end
