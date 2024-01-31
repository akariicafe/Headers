@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    struct SecCmsMessageStr { } *_message;
    struct SecCmsDigestContextStr { } *_digest;
    struct SecCmsSignedDataStr { } *_signedData;
    struct SecCmsEnvelopedDataStr { } *_envelopedData;
    BOOL _isEncrypted;
}

@property (readonly, nonatomic) int lastSecCMSError;
@property (readonly, nonatomic) NSArray *signers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)appendData:(id)a0;
- (void)dealloc;
- (void)done;
- (id)data;
- (id)signedData;
- (BOOL)isContentSigned;
- (id)initWithPartData:(id)a0 error:(id *)a1;
- (BOOL)isContentEncrypted;
- (id)verifyAgainstSenders:(id)a0 signingError:(id *)a1;

@end
