@class NSData, MSCMSContentInfo;

@interface ECCMSDecoder : NSObject {
    MSCMSContentInfo *_contentInfo;
    NSData *_detachedContentData;
}

@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) NSData *decryptedContentData;

+ (id)decoderForEncodedData:(id)a0 detachedContentData:(id)a1 outError:(id *)a2;
+ (id)decoderForEncodedData:(id)a0 outError:(id *)a1;

- (void).cxx_destruct;
- (id)extractSignatureInfoAndSignedData:(id *)a0 outError:(id *)a1;
- (id)initWithContentInfo:(id)a0 detachedContentData:(id)a1;

@end
