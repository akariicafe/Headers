@class NSString, NSArray;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    int _SecCMSError;
    struct SecCmsMessageStr { } *_message;
    struct SecCmsDigestContextStr { } *_digest;
    NSArray *_signers;
    struct SecCmsSignedDataStr { } *_signedData;
    struct SecCmsEnvelopedDataStr { } *_envelopedData;
    BOOL _isEncrypted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)appendData:(id)a0;
- (void)dealloc;
- (void)done;
- (id)data;
- (void).cxx_destruct;

@end
