@class NSURL, ICStoreRadioStreamAssetInfo;

@interface MPStoreRadioStreamAssetInfo : NSObject {
    ICStoreRadioStreamAssetInfo *_internalInfo;
}

@property (readonly, nonatomic) long long flavor;
@property (readonly, nonatomic) long long streamProtocol;
@property (readonly, copy, nonatomic) NSURL *streamURL;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;

- (void).cxx_destruct;
- (long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)a0;
- (long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)a0;
- (id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)a0;
- (BOOL)isITunesStoreStream;

@end
